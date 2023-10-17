from copy import deepcopy
import os
import time

connections = {
    '-':[0,0,1,0,0,0,1,0],
    '|':[1,0,0,0,1,0,0,0],
    '+':[1,0,1,0,1,0,1,0],
    '/':[1,1,1,0,1,1,1,0],
    '\\':[0,1,1,1,0,1,1,1],
    'X':[0,1,0,1,0,1,0,1],
    ' ':[0,0,0,0,0,0,0,0],
    'S':[1,1,1,1,1,1,1,1]
}

deflections = {
    '/': ((5,6),(3,4,5)),
    '\\': ((-5,-6),(-3,-4,-5))
}

def generate_options(direction, piece):
    dir = direction.copy()
    i = direction.index(1)
    dir[i] = 0
    i = (i+4)%8
    if piece == '/' or piece == '\\':
        #if dir odd, direction is simple
        if i % 2 != 0:
            selector = 1
        else:
            selector = 0
        if i % 4 == 0:
            for d in deflections[piece][selector]:
                ind = i + d
                dir[ind % 8] = 1
        else:
            for d in deflections[piece][selector]:
                ind = i - d
                dir[ind % 8] = 1
        return dir
    else:
        return direction
        

def decode_direction(direction, x, y):
    #print("Decoding", direction, x, y)
    i = direction.index(1)
    if i == 0:
        y-=1
    elif i == 1:
        y-=1
        x+=1
    elif i == 2:
        x+=1
    elif i == 3:
        y+=1
        x+=1
    elif i == 4:
        y+=1
    elif i == 5:
        y+=1
        x-=1
    elif i == 6:
        x-=1
    elif i == 7:
        y-=1
        x-=1
    return (x,y)

def walk(direction, x, y, track):
    nx, ny = decode_direction(direction, x, y)
    nxt = track[ny][nx]
    #print("Generating options for", nxt, direction, nx, ny, end='')
    options = generate_options(direction, nxt)
    #print(options)
    if options.count(1) == 1:
        #print("Returning", nx, ny, direction)
        return (nx, ny, direction)
    else:
        valid = []
        for j in reversed(range(2)):
            for i in range(j, len(options), 2):
                scratchpad = [0,0,0,0,0,0,0,0]
                if options[i] == 1:
                    scratchpad[i] = 1
                    x_check, y_check = decode_direction(scratchpad, nx, ny)
                    ind = (i+4)%8
                    if 0 <= x_check < len(track[0]) and 0 <= y_check < len(track):
                        if(connections[track[y_check][x_check]][ind] == 1):
                            if track[y_check][x_check] in '-+|':
                                valid.insert(0, scratchpad.copy())
                            else:
                                valid.append(scratchpad.copy())
            if(len(valid) != 0):
                return (nx, ny, valid[0])                
            
def move_train(positions, direction, track):
    new_positions = positions[:-1].copy()
    x = positions[0][0]
    y = positions[0][1]
    x,y,direction = walk(direction, x, y, track)
    new_positions.insert(0, [x,y])
    return (new_positions, direction)

def premature_collisions(a_train, a_train_pos, b_train, b_train_pos):
    a_limits = [0,0]
    b_limits = [0,0]
    if a_train[-1] < a_train[-2]:
        #aA
        a_limits[1] = a_train_pos
        a_limits[0] = (a_train_pos - len(a_train)) + 1
    else:
        a_limits[0] = a_train_pos
        a_limits[1] = (a_train_pos + len(a_train)) - 1
    if b_train[-1] < b_train[-2]:
        #aA
        b_limits[1] = b_train_pos
        b_limits[0] = (b_train_pos - len(b_train)) + 1
    else:
        b_limits[0] = b_train_pos
        b_limits[1] = (b_train_pos + len(b_train)) - 1
    if a_train_pos > b_train_pos and a_limits[0] <= b_limits[1]:
        return True
    elif b_train_pos > a_train_pos and b_limits[0] <= a_limits[1]:
        return True
    elif a_train_pos == b_train_pos:
        return True
    return False

def train_crash(track, a_train, a_train_pos, b_train, b_train_pos, limit):
    #print(track, a_train, a_train_pos, b_train, b_train_pos, limit)
    if premature_collisions(a_train, a_train_pos, b_train, b_train_pos):
        return 0
    mx = 0
    count = 0
    for line in track.splitlines():
        count += 1
        if len(line) > mx:
            mx = len(line)
    matrix = [[" " for i in range(mx)] for j in range(count)]
    line_count = 0
    for line in track.splitlines():
        for c in range(len(line)):
            matrix[line_count][c] = line[c]
        line_count+=1
    
    #get zero_position
    for i in range(len(matrix[0])):
        if matrix[0][i] != ' ':
            xzero = i
            yzero = 0
            break
    
    a_positions, adirection = (map_carriage_positions(a_train, a_train_pos, matrix, xzero, yzero))
    b_positions, bdirection = (map_carriage_positions(b_train, b_train_pos, matrix, xzero, yzero))
    a_wait = 0
    b_wait = 0
    #preview(a_positions.copy(), b_positions.copy(), matrix)
    #input("Enter to start")
    
    t = 0
    while t <= limit:
        if collision_check(a_positions, b_positions):
            return t
        t+=1
        if(a_wait > 0):
            a_wait-=1
        if(b_wait > 0):
            b_wait-=1
        if(a_wait == 0 or a_train[0] in 'xX'):
            a_positions, adirection = move_train(a_positions, adirection, matrix)
        if(b_wait == 0 or b_train[0] in 'xX'):
            b_positions, bdirection = move_train(b_positions, bdirection, matrix)
        if(matrix[a_positions[0][1]][a_positions[0][0]] == 'S' and a_wait == 0):
            a_wait = len(a_train)
        if(matrix[b_positions[0][1]][b_positions[0][0]] == 'S' and b_wait == 0):
            b_wait = len(b_train)
        #preview(a_positions.copy(), b_positions.copy(), matrix)
        #print(t)
        #time.sleep(0.01)
    return -1

def map_carriage_positions(train, train_pos, matrix, xzero, yzero):
    ax = xzero
    ay = yzero
    a_positions = [[0,0] for i in range(len(train))]
    adirection = [0,0,1,0,0,0,0,0]
    entry_direction = [0,0,1,0,0,0,0,0]

    #Walk until the desired distance, setting the engine there
    for i in range(train_pos):
        if(i == train_pos-2):
            x_store, y_store, entry_direction = walk(adirection, ax, ay, matrix)
        ax,ay,adirection = walk(adirection, ax, ay, matrix)
        #print(ax, ay, adirection, matrix[ay][ax])

    a_positions[0] = [ax, ay]

    #if train position is 0, simulate the entry position, as if
    #we had completed a lap around the track
    if train_pos == 0:
        options = generate_options([0,0,0,0,0,0,1,0], '/')
        for i in range(len(options)):
            scratchpad = [0,0,0,0,0,0,0,0]
            if options[i] == 1:
                scratchpad[i] = 1
                x_check, y_check = decode_direction(scratchpad, 0, 0)
                ind = (i+4)%8
                if x_check < len(matrix[0]) and y_check < len(matrix):
                    if(connections[matrix[y_check][x_check]][ind] == 1):
                        entry_direction = scratchpad.copy()
        ind = entry_direction.index(1)
        entry_direction[ind] = 0
        entry_direction[(ind+4)%8] = 1

    if(train[-1] < train[-2]):
        #aaaaA
        #If the train moves clockwise, we have to place its carriages behind it
        #so we create a reverse walking direction, based on the entry direction
        dir = entry_direction.copy()
        ind = dir.index(1)
        dir[ind] = 0
        dir[(ind+4)%8] = 1
        for i in range(len(train)-1):
            a_positions[i+1][0], a_positions[i+1][1], dir = walk(dir, a_positions[i][0], a_positions[i][1], matrix)
    else:
        #Aaaaa
        #If the train moves counter clockwise, we can place its carriages in the
        #direction we were going, only reversing the engine direction after
        #using entry direction
        dir = adirection.copy()
        for i in range(len(train)-1):
            a_positions[i+1][0], a_positions[i+1][1], dir = walk(dir, a_positions[i][0], a_positions[i][1], matrix)
        adirection = entry_direction.copy()
        ind = adirection.index(1)
        adirection[ind] = 0
        adirection[(ind+4)%8] = 1
    
    return (a_positions, adirection)

def preview(a_pos, b_pos, matrix):
    prev = []
    prev = deepcopy(matrix)
    for i in range(len(a_pos)):
        if i == 0:
            prev[a_pos[i][1]][a_pos[i][0]] = 'A'
        else:
            prev[a_pos[i][1]][a_pos[i][0]] = 'a'
    for i in range(len(b_pos)):
        if i == 0:
            prev[b_pos[i][1]][b_pos[i][0]] = 'B'
        else:
            prev[b_pos[i][1]][b_pos[i][0]] = 'b'
    os.system('cls')
    for line in prev:
        print("".join(line))

def collision_check(a_pos, b_pos):
    for awagon in a_pos:
        for bwagon in b_pos:
            if awagon[0] == bwagon[0]:
                if awagon[1] == bwagon[1]:
                    return True
    for i in range(len(a_pos)):
        for j in range(len(a_pos)):
            if i != j and a_pos[i][0] == a_pos[j][0]:
                if a_pos[i][1] == a_pos[j][1]:
                    return True
    for i in range(len(b_pos)):
        for j in range(len(b_pos)):
            if i != j and b_pos[i][0] == b_pos[j][0]:
                if b_pos[i][1] == b_pos[j][1]:
                    return True
    return False

TRACK_EX = """\
    /---------S-----------\\               /-\\ /-\\  
   //---------------------\\\\              | | | |  
  //  /-------------------\\\\\\             | / | /  
  ||  |/------------------\\\\\\\\            |/  |/   
  ||  ||                   \\\\\\\\           ||  ||   
  \\\\  ||                   | \\\\\\          ||  ||   
   \\\\-//                   | || \\---------/\\--/|   
/-\\ \\-/                    \\-/|                |   
|  \\--------------------------/                |   
\\-------------------------------------S--------/
"""
print(train_crash(TRACK_EX, "Aaaaaa", 1, "Bbbbb", 196, 2000))

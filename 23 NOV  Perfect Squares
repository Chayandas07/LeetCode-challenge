from typing import List


class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        size = 9
        rows = [set() for i in range(size)]
        cols = [set() for i in range(size)]
        boxes = [set() for i in range(size)]

        for r in range(size):
            for c in range(size):
                cell = board[r][c]

                if cell == '.':
                    continue
                # Check if valid within row
                if cell in rows[r]:
                    return False
                else:
                    rows[r].add(cell)
                # Check if valid within column
                if cell in cols[c]:
                    return False
                else:
                    cols[c].add(cell)
                # Check if valid within box
                box_index = (r // 3) * 3 + (c // 3)
                if cell in boxes[box_index]:
                    return False
                else:
                    boxes[box_index].add(cell)
        return True


def main():
    board = [['5', '3', '.', '.', '7', '.', '.', '.', '.'],
             ['6', '.', '.', '1', '9', '5', '.', '.', '.'],
             ['.', '9', '8', '.', '.', '.', '.', '6', '.'],
             ['8', '.', '.', '.', '6', '.', '.', '.', '3'],
             ['4', '.', '.', '8', '.', '3', '.', '.', '1'],
             ['7', '.', '.', '.', '2', '.', '.', '.', '6'],
             ['.', '6', '.', '.', '.', '.', '2', '8', '.'],
             ['.', '.', '.', '4', '1', '9', '.', '.', '5'],
             ['.', '.', '.', '.', '8', '.', '.', '7', '9']]
    assert Solution().isValidSudoku(board)

    board = [['8', '3', '.', '.', '7', '.', '.', '.', '.'],
             ['6', '.', '.', '1', '9', '5', '.', '.', '.'],
             ['.', '9', '8', '.', '.', '.', '.', '6', '.'],
             ['8', '.', '.', '.', '6', '.', '.', '.', '3'],
             ['4', '.', '.', '8', '.', '3', '.', '.', '1'],
             ['7', '.', '.', '.', '2', '.', '.', '.', '6'],
             ['.', '6', '.', '.', '.', '.', '2', '8', '.'],
             ['.', '.', '.', '4', '1', '9', '.', '.', '5'],
             ['.', '.', '.', '.', '8', '.', '.', '7', '9']]
    assert not Solution().isValidSudoku(board)


if __name__ == '__main__':
    main()

class Solution 
{
public:
    int openLock(vector<string>& deadends, string target) 
    {
        int operations = 0;
        unordered_set<string> dead, vis;

        for(auto &deadend : deadends) dead.insert(deadend);
        if(dead.count("0000")) return -1;

        queue<string> q;
        q.push("0000");
        vis.insert("0000");

        while(q.size())
        {
            int sz = q.size();
            while(sz--)
            {
                string cur_state = q.front();q.pop();
                if(cur_state == target) return operations;
                for(int i = 0; i < 4; i++)
                {
                    string new_state = cur_state;
                    new_state[i] == '9' ? new_state[i] = '0' : new_state[i]++;
                    if(!vis.count(new_state) and !dead.count(new_state)) 
                        q.push(new_state), vis.insert(new_state);

                    new_state = cur_state;
                    new_state[i] == '0' ? new_state[i] = '9' : new_state[i]--;
                    if(!vis.count(new_state) and !dead.count(new_state)) 
                        q.push(new_state), vis.insert(new_state);
                }
            }
            operations++;
        }
        return -1;
    }
};

class Solution {
public:
    void swapChar(vector<char> &vec)
    {
        int n = vec.size(), Hash = 0;
        unordered_map<int, int>store;
        for(int i = 0; i < n; i++)
        {
            Hash += vec[i] == '#';
            if(vec[i] == '*')
                store[i] = Hash, Hash = 0;
        }
        if(Hash) store[n] = Hash;

        for(auto [idx_i, count] : store)
        {
            int idx = idx_i;
            while(count--) vec[--idx] = '#';
            while(idx-- and vec[idx] != '*') vec[idx] = '.';
        }
    }

    vector<vector<char>> rotateTheBox(vector<vector<char>>& box) 
    {
        int n = box.size(), m = box[0].size();
        for(auto &Box:box) swapChar(Box);

        vector<vector<char>>box90;
        for(int i = m - 1; i >= 0; i--)
        {
            vector<char>temp;
            for(int j = n - 1; j >= 0; j--)
                temp.push_back(box[j][i]);
            box90.push_back(temp);
        }

        reverse(begin(box90), end(box90));
        return box90;
    }
};

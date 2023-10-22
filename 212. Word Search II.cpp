//Given an m x n board of characters and a list of strings words, return all words on the board.Each word must be constructed from letters of sequentially adjacent cells
,where adjacent cells are horizontally or vertically neighboring. The same letter cell may not be used more than once in a word. 
class Trie {
    public:
        unordered_map<char, Trie*> child;
        bool isEnd = false;
        string word;
};
class Solution {
public:
    Trie* root = new Trie();

    void insertWord(string &s)
    {
        Trie* temp = root;
        for(char c : s)
        {
            if(temp->child.find(c) == temp->child.end())
                temp->child[c] = new Trie();
            temp = temp->child[c];
        }
        temp->isEnd = true;
        temp->word = s;
    }
    vector<string> ans;
    bool isValid(int i, int j, int n, int m)
    {
        return (i >= 0 and j >= 0 and i < n and j < m);
    }
    void rec(int i, int j, int n, int m, vector<vector<char>> &board, vector<vector<bool>> &vis, Trie* temp)
    {
        if(temp->isEnd)
        {
            temp->isEnd = false;
            ans.push_back(temp->word);
        }
        int dir[5] = {-1, 0, 1, 0, -1};

        for(int k=0; k<4; ++k)
        {
            int new_i = i + dir[k];
            int new_j = j + dir[k+1];

            if(isValid(new_i, new_j, n, m) && temp->child.find(board[new_i][new_j]) != temp->child.end() && !vis[new_i][new_j])
            {
                vis[new_i][new_j] = true;

                rec(new_i, new_j, n, m, board, vis, temp->child[board[new_i][new_j]]);

                vis[new_i][new_j] = false;
            }
        }
    }
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        for(auto s : words)
            insertWord(s);

        int n = board.size(), m = board[0].size();
        vector<vector<bool>> vis(n, vector<bool>(m));

        for(int i=0; i<n; ++i)
        {
            for(int j=0; j<m; ++j)
            {
                if(root->child.find(board[i][j]) != root->child.end())
                {
                    Trie* temp = root;
                    vis[i][j] = true;
                    rec(i, j, n, m, board, vis, temp->child[board[i][j]]);
                    vis[i][j] = false;
                }
            }
        }
        return ans;
    }
};

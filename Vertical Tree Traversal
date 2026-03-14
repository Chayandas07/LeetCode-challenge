class Solution {
  public:
    vector<vector<int>> verticalOrder(Node *root) {
        map<int, vector<int>> m;
        queue<tuple<Node*,int>> q;
        q.push({root,0});
        
        while (q.size()) {
            auto [n,c] = q.front(); 
            q.pop();
            m[c].emplace_back(n->data);
            if (n->left) q.emplace(n->left,c - 1);
            if (n->right) q.emplace(n->right,c + 1);
        }
        
        vector<vector<int>> ans;
        for(auto it:m) ans.emplace_back(it.second);

        return ans;
    }
};

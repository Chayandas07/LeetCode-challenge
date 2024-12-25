class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
        queue<TreeNode*> q;
        if(root==NULL) return {};
        q.push(root);
        vector<int> res;
        while (!q.empty()) {
            int n = q.size(), maxi = INT_MIN;
            for (int i = 0; i < n; i++) {
                TreeNode* node = q.front();
                q.pop();
                maxi = max(maxi, node->val);
                if (node->left)
                    q.push(node->left);
                if (node->right)
                    q.push(node->right);
            }
            res.push_back(maxi);
        }
        return res;
    }
};

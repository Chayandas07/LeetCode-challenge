class Solution {
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> arr, brr;
        helper(root1, arr);
        helper(root2, brr);
        return (arr == brr);
    }
    void helper(TreeNode* node, vector<int>& vec)
    {
        if(node == NULL)
            return;
        if(node -> left == NULL && node -> right == NULL)
            vec.push_back(node -> val);
        helper(node -> left, vec);
        helper(node -> right, vec);
    }
        
};

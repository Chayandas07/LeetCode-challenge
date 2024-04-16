/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if (depth == 1) {
            TreeNode* newRoot = new TreeNode(val);
            newRoot->left = root;
            return newRoot;
        }
        
        TreeNode *result = addRow(root, val, depth);
        return result;
    }
    
    TreeNode* addRow(TreeNode *currentNode, int val, int depth) {
        if (currentNode == nullptr)
            return currentNode;
        
        if (depth == 2) {
            TreeNode *newLeftNode = new TreeNode(val);
            TreeNode *newRightNode = new TreeNode(val);
            newLeftNode->left = currentNode->left;
            newRightNode->right = currentNode->right;
            currentNode->left = newLeftNode;
            currentNode->right = newRightNode;
            return currentNode;
        }
        
        currentNode->left = addRow(currentNode->left, val, depth - 1);
        currentNode->right = addRow(currentNode->right, val, depth - 1);
        return currentNode;
    }
};

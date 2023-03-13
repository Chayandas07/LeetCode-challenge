class Solution {
public:
    bool isEqual(TreeNode*r1,TreeNode*r2){
        //if we have both root to nullptr then we will return true
        //else we will be returning false
        
        if(!r1||!r2)
            return r1==r2;
        //if not null then we will check for the r1 and r2 values
        if(r1->val==r2->val){
        //we will check for the r1 left and r2 right because they will be on opposite sides
            return isEqual(r1->left,r2->right)&&isEqual(r1->right,r2->left);
        }
        //if r1 val not equal to r2 val then return false
        return false;
    }
    bool isSymmetric(TreeNode* root) {
        //The Approach is simple i.e. we will have to check if 
            //1. the right and left is equal 
        return isEqual(root->left,root->right);
    }
};

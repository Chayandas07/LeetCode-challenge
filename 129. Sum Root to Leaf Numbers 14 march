#define ll long long
class Solution {
public:

    void dfs(TreeNode *root, ll &ans , ll tmp){
        if(root->left== NULL && root->right==NULL){
            tmp = tmp*10 + root->val;
            ans+=tmp;
            return;
        }
        tmp = tmp*10 + root->val;
        if(root->left) dfs(root->left,ans,tmp);
        if(root->right) dfs(root->right,ans,tmp);
    }

    int sumNumbers(TreeNode* root) {
        ll ans =0;
        dfs(root,ans,0);
        return int(ans);
    }
};

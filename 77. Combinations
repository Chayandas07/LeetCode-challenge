class Solution {
public:
    vector<vector<int>> ans;
    void dfs(int i , int n , int k , vector<int>& temp){
        if(k == 0){
            ans.push_back(temp);
            return ;
        }
        if(i == n) return ;
        dfs(i + 1 , n , k , temp);
        temp.push_back(i+1);
        dfs(i + 1 , n , k - 1 , temp);
        temp.pop_back();
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> temp;
        dfs(0 , n , k , temp);
        return ans;
    }
};

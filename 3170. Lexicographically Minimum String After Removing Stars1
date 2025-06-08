class Solution {
public:
    void solve(int yes , int n , vector<int> &ans){
        if(yes > n){
            return;
        }
        ans.push_back(yes);

        for(int i = 0 ; i <= 9 ; i++){
            int new_num = yes*10 + i;
            if(new_num > n){
                return;
            }
            solve(new_num , n , ans);
        }
    }
    vector<int> lexicalOrder(int n) {
        vector<int> ans;
        for(int i = 1 ; i <= 9 ; i++){
            solve(i ,  n  , ans);
        }

        return ans;
    }
};

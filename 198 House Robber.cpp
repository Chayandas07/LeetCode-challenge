#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int solve(vector<int> &nums, int n){
        int prev1 = nums[0];
        int prev2 = 0;
        int curr = 0;

        for(int i=1; i<=n; i++){
            
           int include = prev2 + nums[i];
           int exclude = prev1 + 0;
           curr = max(include, exclude);
           prev2 = prev1;
           prev1 = curr;    
        }

        return prev1;

    }

    int rob(vector<int>& nums) {
        int n = nums.size()-1;
        return solve(nums, n);
    }

};
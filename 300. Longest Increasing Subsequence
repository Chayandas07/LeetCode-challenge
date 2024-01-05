class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> lis={nums[0]};
        int n=nums.size();
        lis.reserve(n);
        int ans=1;
        for(int x: nums){
            if (x>lis.back()){
                lis.push_back(x);
                ans++;
            }
            else{
                auto it=lower_bound(lis.begin(), lis.end(), x);
                *it=x;
            }
        }
        return ans;
    }
};

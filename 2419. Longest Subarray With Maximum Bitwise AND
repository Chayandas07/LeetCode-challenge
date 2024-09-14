class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int ans = 0, count = 0;
        int maxi = *max_element(nums.begin(), nums.end());

        for(int i = 0; i<nums.size(); i++){
            if(nums[i] == maxi){
                count++;
                ans = max(ans, count);
            }
            else{
                count = 0;
            }
        }
        return ans;
    }
};

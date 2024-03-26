class Solution {
public:
    int firstMissingPositive(std::vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,bool> mp;
        // Finding the maximum element in nums
        int maxi = *max_element(nums.begin(), nums.end());
        // Populating the unordered_map with values from nums
        for(auto &num : nums){
            mp[num] = true;
        }
        // Checking for the first missing positive integer
        for(int i=1; i<maxi; i++){
            if(mp.find(i) == mp.end())
                return i;
        }
        // If all integers from 1 to maxi are present, return maxi+1
        return maxi < 0 ? 1 : maxi+1;
    }
};

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
        
        int n = nums.size();
        nums.push_back(0);
        vector<int> res;
        for (int i = 0; i <= n ; ++i)
        {
            while(nums[i] != nums[nums[i]])
                swap(nums[i], nums[nums[i]]);
        }
        for (int i = 0; i <= n; ++i)
        {
            if (nums[i] != i)
                res.push_back(nums[i]);
        }


        return res; 

    }
};

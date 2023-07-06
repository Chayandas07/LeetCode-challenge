class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int mx=INT_MAX,current=0;
        int i=0,j=0;
        while(j<nums.size()){
            current += nums[j];
                while(current>=target){
                    mx = min(mx,j-i+1);
                    current -= nums[i];
                    i++;
                }
            j++;
        }
        if(mx==INT_MAX)return 0;
        else return mx;
    }
};

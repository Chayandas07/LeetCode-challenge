class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long res = 0;
        long long counter = 0;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]==0){
                counter++;
            }else{
                res+=(counter*(counter+1))/2;
                counter = 0;
            }
        }
        if(counter){
            res+=(counter*(counter+1))/2;
            counter = 0;
        }
        return res;
    }
};

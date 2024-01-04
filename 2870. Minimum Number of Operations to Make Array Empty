class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int, int> counts;
        int second;
        int result = 0;
        for(auto i: nums){
            counts[i]++;
        }
        for(auto i : counts){
            second = i.second;
            if(second == 1) return -1;
            if(second % 3 == 1){
                result += (second/3) - 1;
                result += 2;
            }else{
                result += (second/3);
                result += ((second%3)/2);
            }
        }
        return result;
    }
};

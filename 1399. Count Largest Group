class Solution {
public:
    int digitSum(int num){
        int sum = 0;
        while(num > 0){
            sum += num%10;
            num /= 10;
        }
        return sum;
    }
    int countLargestGroup(int n) {
        unordered_map<int, int> freq;
        int maxi = 0;
        for(int i=1;i<=n;i++){
            freq[digitSum(i)]++;
            maxi = max(maxi, freq[digitSum(i)]);
        }
        int count = 0;
        for(auto i:freq){
            if(i.second == maxi) count++;
        }
        return count;
    }
};

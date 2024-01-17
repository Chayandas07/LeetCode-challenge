class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int freq[2001]={0};
        for (int x: arr){
            freq[x+1000]++;
        }
        bool S[1001]={0};
        for (int f: freq){
            if (f>=1 && S[f]==1) 
                return 0;
            S[f]=1;
        }
        return 1;
    }
};

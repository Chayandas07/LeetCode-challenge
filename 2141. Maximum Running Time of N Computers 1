class Solution {
public:
    long long maxRunTime(int n, vector<int>& batteries) {
        long long sum = 0;
        for (long long b : batteries) sum += b;
        
        long long l = 0, r = sum / n;
        
        while (l < r) {
            long long m = (l + r + 1) >> 1;
            long long need = n * m, have = 0;
            
            for (long long b : batteries) 
                have += min(b, m);
            
            if (have >= need) l = m;
            else r = m - 1;
        }
        return l;
    }
};

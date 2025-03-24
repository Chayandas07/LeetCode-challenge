class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        const int n = meetings.size(), N=2*n;
        vector<unsigned> info(N);
        int i=0;
        
        // Encode meeting start and end 
        for (auto& m : meetings) {
            const unsigned s= m[0], e=m[1];
            info[i++]=(s<<1)|1;  // Start, mark with LSB=1
            info[i++]=(e+1)<<1;  // End (exclusive)
        }

        // Sort the events
        sort(info.begin(), info.end());

        int overlap=0, cnt=0, last=1;
        
        // Process events in sorted order
        for (int i=0; i<N; i++) {
            const int x=info[i]>>1;    // Extract day
            const bool isStart=info[i]&1;

            // If no overlap, count the days between last and current 
            if (overlap==0 && last<x) 
                cnt+=(x-last);

            overlap+=isStart?1:-1;  // Increment on start, decrement on end
            if(overlap==0) last=x;   // Update last when no overlap
        }

        // free between last & days
        if (last<=days) 
            cnt+=(days-last+1);

        return cnt;
    }
};

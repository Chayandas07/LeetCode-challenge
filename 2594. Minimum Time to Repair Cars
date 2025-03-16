class Solution {
public:
    int freq[101]={0}, minR=101, maxR=0;
    inline bool canRepair(int cars, long long t){
        long long cnt=0;
        for(int x=minR; x<=maxR; x++) {
            cnt+=freq[x]*(long long)sqrt(t/x);
            if (cnt>=cars) return 1;
        }
        return cnt>=cars;
    }
    long long repairCars(vector<int>& ranks, int cars) {
        for(int x: ranks){
            minR=min(x, minR);
            maxR=max(x, maxR);
            freq[x]++;
        }
        long long l=1, r=1LL*minR*cars*cars, m;
        
        while(l<r){
            m=(l+r)/2;
            if (canRepair(cars, m)) r=m;
            else l=m+1;
        }
        return l; 
    }
};

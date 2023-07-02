class Solution {
public:
    int maximumRequests(int n, vector<vector<int>>& r) {
        int mx=0;
        for(int i=0;i<(1<<r.size());i++){
            vector<int>a(n,0);
            int t=0;
            for(int j=0;j<r.size();j++){
                if(i & (1<<j)){
                    t++;
                    a[r[j][0]]--;
                    a[r[j][1]]++;
                }
            }
            bool f=true;
            for(int j=0;j<n;j++){
                if(a[j]!=0){
                    f=false;
                    break;
                }
            }
            if(f)mx=max(mx,t);
        }
        return mx;
    }
};

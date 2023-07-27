class Solution {
public:
    
    #define ll long long
    
    bool possible(int n, vector<int> &bat, ll int hrs){
        ll int time=0;
        for(int i=0;i<bat.size();i++){
            time += bat[i];
            if(time>=hrs){
                time-=hrs; // passing on extra time provided by battery to run other computer
                n--;
            }
            if(n==0) return true;
        }
        return false;
    }
    
    long long maxRunTime(int n, vector<int> &bat) {
        ll int l=1, r=0;
        
        for(int i=0;i<bat.size();i++) r += bat[i];
        r/=n;
        
        // max. time for which we can run current set of batteries will depend on battery with least operational time 
        sort(bat.begin(),bat.end());
        while(l<r){
            ll int m=l+(r-l+1)/2;
            
            if(possible(n,bat,m)){
                l=m;
            }else{
                r=m-1;
            }
        }
        return l;
    }
};

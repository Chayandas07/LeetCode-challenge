class Solution {
  public:
    
    void find(int index,int end,vector<int> &temp,vector<int> &arr,int sum){
        if(index==end){
            temp.push_back(sum);
            return;
        }
        
        find(index+1,end,temp,arr,sum+arr[index]);
        find(index+1,end,temp,arr,sum);
        
        return;
        
    }
    
    int countSubset(vector<int> &arr, int k) {
        // code here
        int n = arr.size();
        vector<int>L,R;
        int mid = n/2;
        
        
        find(0,mid,L,arr,0);
        find(mid,n,R,arr,0);
        
        sort(R.begin(),R.end());
        
        int ans = 0;

        for(int x:L){
            int need = k-x;

            // count occurrences of need in rightSums
            auto lo = lower_bound(R.begin(), R.end(), need);
            auto hi = upper_bound(R.begin(), R.end(), need);

            ans += (hi - lo);
        }

        return ans;
        
    }
};

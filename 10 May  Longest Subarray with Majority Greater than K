class Solution {
  public:
    int longestSubarray(vector<int> &arr, int k) {
        int n=arr.size();
        vector<int>diff(n);
        for(int i=0;i<n;i++){
            if(arr[i]>k){
                diff[i]=1;
            }
            else{
                diff[i]=-1;
            }
        }
        unordered_map<int,int>mp;
        int prefix=0;
        int maxlen=0;
        for(int i=0;i<n;i++){
            prefix+=diff[i];
            if(prefix>0){
                maxlen=i+1;
            }
            else{
                if(mp.find(prefix-1)!=mp.end()){
                    maxlen=max(maxlen,i-mp[prefix-1]);
                }
            }
            if(mp.find(prefix)==mp.end()){
                mp[prefix]=i;
            }
        }
        return maxlen;
    }
};

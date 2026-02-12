class Solution {
  public:
    bool isfeasible(vector<int>& arr, int h, int k, int w) {
    int temp = k;
    int n = arr.size();
    vector<int> diff(n+1, 0);

    for(int i = 0; i < n; i++) {
        if(i>=1){
            diff[i]=diff[i-1]+diff[i];
        }
        int currentHeight = arr[i] + diff[i];
        if(currentHeight < h) {
            int need = h - currentHeight;
            temp -= need;
            if(temp < 0) return false;
            diff[i]+=need;
            if(i+w<n){
                diff[i+w]-=need;
            }
        }
    }
    return true;
}

    
    int maxMinHeight(vector<int> &arr, int k, int w) {
        // code here
        
        const int n=arr.size();
        
        int minn=INT_MAX;
        int maxx=INT_MIN;
        
        for(int i=0;i<n;i++){
            minn=min(arr[i],minn);
            maxx=max(arr[i],maxx);
        }
        
        int i=minn;
        int j=minn+k;
        int ans=minn;
        
        // int temp=k;
        while(i<=j){
            int mid=(i+j)/2;
            if(isfeasible(arr,mid,k,w)){
                i=mid+1;
                ans=mid;
            }
            else{
                j=mid-1;
            }
        }
        
        return ans;
    }
};


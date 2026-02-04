class Solution {
  public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        // code here
        int l_size=left.size();
        int r_size=right.size();
        int maxx=-1;
        for(int i=0;i<l_size;i++){
            maxx=max(maxx,left[i]);
        }
        int minn=n+1;
        for(int i=0;i<r_size;i++){
            minn=min(minn,right[i]);
        }
        if(minn!=n+1&&maxx!=-1){
            return max(n-minn,maxx);
        } 
        else if(minn==n+1){
            return maxx;
        }
        else {
            return n-minn;
        }
        return -1;
    }
};

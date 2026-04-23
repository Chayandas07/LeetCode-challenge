class Solution {
  public:
    bool canSplit(vector<int>& arr) {
        // code here
        int n=arr.size();
        int sum=accumulate(arr.begin(),arr.end(),0);
        if(sum&1)return false;
        sum/=2;
        for(int i:arr){
            sum-=i;
            if(sum==0)return true;
        }
        return false;
    }
};

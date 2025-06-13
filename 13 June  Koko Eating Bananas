class Solution {
  public:
    int kokoEat(vector<int>& arr, int k) {
        // Code here
        int low = 1;
        int high = *max_element(arr.begin(), arr.end());
        int ans = INT_MAX;
        while(low <= high){
            int mid = low + (high - low)/2;
            int curr = 0;
            for(int i = 0; i < arr.size(); i++){
                curr += ceil((double)arr[i]/mid);
            }
            if(curr <= k){
                ans = min(ans, mid);
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return ans == INT_MAX ? -1 : ans;
    }
};

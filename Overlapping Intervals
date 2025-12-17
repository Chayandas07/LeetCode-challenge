class Solution {
  public:
    vector<vector<int>> mergeOverlap(vector<vector<int>>& arr) {
        sort(arr.begin(),arr.end());
        vector<vector<int>> res;
        int start = arr[0][0],end = arr[0][1];
        for(int i=1;i<arr.size();i++){
            if(end>=arr[i][0]){
                end = max(end,arr[i][1]);
                continue;
            }
            res.push_back({start,end});
            start = arr[i][0];
            end = arr[i][1];
        }
        res.push_back({start,end});
        return res;
    }
};

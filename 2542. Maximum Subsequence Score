class Solution {
public:
    bool static cmp(vector<int> &a,vector<int> &b){
        if(a[0]==b[0])return a[1]<b[1];
        return a[0]<b[0];
    }
    long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<vector<int>> v;
        for(int i = 0; i < nums1.size(); i++){
            v.push_back({nums2[i],nums1[i]});
        }
        priority_queue<int,vector<int>,greater<int>> pq;
        sort(v.begin(),v.end(),cmp);
        long long int ans = 0;
        long long int sum = 0;
        int j = 0;
        for(int i = nums1.size()-1; i >= 0; i--){
            if(i>=nums1.size()-k+1){
                sum += v[i][1];
                pq.push(v[i][1]);
            }else{
                sum += v[i][1];
                pq.push(v[i][1]);
                if(pq.size()>k){
                    sum -= pq.top();
                    pq.pop();
                }
                ans = max(ans,sum*1LL*v[i][0]);
            }
        }
        return ans;
    }
};

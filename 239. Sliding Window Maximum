class Solution {
    using int2=pair<int, int>; //(nums[i], i)
public:

    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n=nums.size();
        priority_queue<int2> pq;

        vector<int> ans(n-k+1);
        for (int i=0; i<k; i++)
            pq.push({nums[i], i});
        
        ans[0]=pq.top().first;
        for(int i=k; i<n; i++){
            while(!pq.empty() && pq.top().second<=(i-k))
                pq.pop(); //Pop up element not in the window
            pq.push({nums[i], i});
            ans[i-k+1]=pq.top().first;//Max element for this window
        }
        return ans;
    }
};

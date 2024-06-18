class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        int n = worker.size();
        sort(worker.begin(),worker.end());
        vector<pair<int,int>> nums(n);

        for(int i=0;i<n;i++)
        {
            nums[i] = {difficulty[i],profit[i]};
        }
        sort(nums.begin(),nums.end());

        int maxProfit = 0;
        int tempProfit = 0;
        for(int i=0,j=0;i<n;i++)
        {
            while(j<n && nums[j].first <= worker[i])
            {
                tempProfit = max(nums[j].second,tempProfit);
                j++;
            }
            if(j>0 && nums[j-1].first <= worker[i])
            {
                maxProfit = maxProfit + tempProfit;
            }
        }
        return maxProfit;
    }
};

class Solution
{
public:
    bool c(vector<int> &v, vector<int> &dp, int i)
    {
        int n = v.size();
        if (i == v.size())
            return true;
        if (dp[i] != -1)
            return dp[i];

        if (i + 1 < n && v[i] == v[i + 1])
        {
            if (c(v, dp, i + 2))
                return dp[i] = true;
        }

        if (i + 2 < n && v[i] == v[i + 2] and v[i] == v[i + 1])
        {
            if (c(v, dp, i + 3))
                return dp[i] = true;
        }
        if (i + 2 < n && v[i] + 1 == v[i + 1] && v[i] + 2 == v[i + 2])
        {
            if (c(v, dp, i + 3))
                return dp[i] = true;
        }
        return dp[i] = false;
    }
    bool validPartition(vector<int> &v)
    {
        int n = v.size();
        vector<int> dp(n + 1, -1);
        return c(v, dp, 0);
    }
};

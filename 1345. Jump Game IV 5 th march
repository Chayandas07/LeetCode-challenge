class Solution
{
public:
    int minJumps(vector<int> &arr)
    {
        int n = arr.size();
        const int inf = 1e9;

        unordered_map<int, vector<int>> mp;
        for (int i = 0; i < n; i++)
            mp[arr[i]].push_back(i);

        queue<pair<int, int>> q;
        q.push({0, 0});
        
        vector<int> dist(n, inf);
        dist[0] = 0;

        while (!q.empty())
        {
            auto idx = q.front().first;
            auto moves = q.front().second;
            q.pop();

            assert(idx >= 0 and idx < n);

            if (idx == n - 1)
                return moves;

            if (idx - 1 >= 0 and moves + 1 < dist[idx - 1])
            {
                dist[idx - 1] = moves + 1;
                q.push({idx - 1, moves + 1});
            }

            if (idx + 1 < n and moves + 1 < dist[idx + 1])
            {
                dist[idx + 1] = moves + 1;
                q.push({idx + 1, moves + 1});
            }

            for (auto i : mp[arr[idx]])
            {
                if (i != idx and moves + 1 < dist[i])
                {
                    dist[i] = moves + 1;
                    q.push({i, moves + 1});
                }
            }
            mp.erase(arr[idx]);
        }
        return -1;
    }
};

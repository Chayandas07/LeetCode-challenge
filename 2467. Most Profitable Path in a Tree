class Solution {
    int midNode = -1;

public:
    void findParent(int node, int par, vector<int> adj[], unordered_map<int, int> &mp) {
        mp[node] = par;
        for (auto i : adj[node]) {
            if (i != par) {
                findParent(i, node, adj, mp);
            }
        }
    }

    void dfs(int node, int par, int sum, vector<int> adj[], vector<int> &amount, vector<int> &dist, vector<int> &leaf, vector<bool> &zeroNodes) {
        bool isLeaf = true;
        dist[node] = sum;
        for (auto i : adj[node]) {
            if (i != par) {
                isLeaf = false;
                if (i == midNode) {
                    dfs(i, node, sum + (amount[i] / 2), adj, amount, dist, leaf, zeroNodes);
                } else if (zeroNodes[i]) {
                    dfs(i, node, sum, adj, amount, dist, leaf, zeroNodes);
                } else {
                    dfs(i, node, sum + amount[i], adj, amount, dist, leaf, zeroNodes);
                }
            }
        }
        leaf[node] = isLeaf;
    }

    int mostProfitablePath(vector<vector<int>> &edges, int bob, vector<int> &amount) {
        int n = edges.size() + 1;
        vector<int> adj[n];
        for (auto e : edges) {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }

        unordered_map<int, int> parent;
        findParent(0, -1, adj, parent);

        vector<int> bobNodes;

        do {
            bobNodes.push_back(bob);
            bob = parent[bob];
        } while (bob != -1);

        if (bobNodes.size() % 2 == 1) {
            midNode = bobNodes[bobNodes.size() / 2];
        }

        vector<bool> zeroNodes(n, 0);
        for (int i = 0; i < bobNodes.size(); i++) {
            if (i < bobNodes.size() / 2) {
                zeroNodes[bobNodes[i]] = 1;
            }
        }

        vector<int> dist(n, INT_MIN), leaf(n);
        dfs(0, -1, amount[0], adj, amount, dist, leaf, zeroNodes);

        int ans = INT_MIN;
        for (int i = 0; i < n; i++) {
            if (leaf[i]) {
                ans = max(ans, dist[i]);
            }
        }

        return ans;
    }
};

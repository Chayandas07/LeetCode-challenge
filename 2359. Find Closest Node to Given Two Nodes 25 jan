class Solution {
    public:
        int closestMeetingNode(vector<int>& edges, int node1, int node2) {
            std::vector<int> dist1(edges.size(), -1);
        std::vector<int> dist2(edges.size(), -1);

        // perform BFS from both nodes
        std::queue<int> q;
        q.push(node1);
        dist1[node1] = 0;
        while (!q.empty()) {
            int u = q.front();
            q.pop();
            if (edges[u] != -1) {
                if (dist1[edges[u]] == -1) {
                    dist1[edges[u]] = dist1[u] + 1;
                    q.push(edges[u]);
                }
            }
        }
        q.push(node2);
        dist2[node2] = 0;
        while (!q.empty()) {
            int u = q.front();
            q.pop();
            if (edges[u] != -1) {
                if (dist2[edges[u]] == -1) {
                    dist2[edges[u]] = dist2[u] + 1;
                    q.push(edges[u]);
                }
            }
        }

        // find the node that can be reached from both nodes with the minimum maximum distance
        int minDist = INT_MAX;
        int minNode = -1;
        for (int i = 0; i < edges.size(); i++) {
            if (dist1[i] != -1 && dist2[i] != -1) {
                int maxDist = std::max(dist1[i], dist2[i]);
                if (maxDist < minDist) {
                    minDist = maxDist;
                    minNode = i;
                }
            }
        }

        return minNode;
    }
};

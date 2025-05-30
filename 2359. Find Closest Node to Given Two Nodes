class Solution {
public:
    vector<int> bfs(const vector<int>& edges, int start) {
        int n = edges.size();
        vector<int> dist(n, -1);
        queue<int> q;
        q.push(start);
        dist[start] = 0;

        while (!q.empty()) {
            int node = q.front();
            q.pop();

            int next = edges[node];
            if (next != -1 && dist[next] == -1) {
                dist[next] = dist[node] + 1;
                q.push(next);
            }
        }
        return dist;
    }

    int closestMeetingNode(vector<int>& edges, int node1, int node2) {
        vector<int> dist1 = bfs(edges, node1);
        vector<int> dist2 = bfs(edges, node2);

        int minDist = INT_MAX, res = -1;
        for (int i = 0; i < edges.size(); ++i) {
            if (dist1[i] != -1 && dist2[i] != -1) {
                int maxDist = max(dist1[i], dist2[i]);
                if (maxDist < minDist) {
                    minDist = maxDist;
                    res = i;
                }
            }
        }
        return res;
    }
};

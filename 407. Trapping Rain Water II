class Solution {
public:
    int trapRainWater(vector<vector<int>>& heightMap) {
        if (heightMap.empty() || heightMap[0].empty()) return 0;

        int rows = heightMap.size(), cols = heightMap[0].size();
        vector<vector<int>> graph(rows * cols + 1);
        int virtualStart = rows * cols;

        // Direction vectors for moving in 4 directions
        vector<int> dx = {0, 0, 1, -1};
        vector<int> dy = {1, -1, 0, 0};

        // Build the graph
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                int currentCell = i * cols + j;

                // Connect boundary cells to virtual start node
                if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1) {
                    graph[virtualStart].push_back(currentCell);
                }

                // Connect current cell to its neighbors
                for (int k = 0; k < 4; k++) {
                    int x = i + dx[k], y = j + dy[k];
                    if (x >= 0 && x < rows && y >= 0 && y < cols) {
                        graph[currentCell].push_back(x * cols + y);
                    }
                }
            }
        }

        // Dijkstra-like BFS to calculate distances
        auto calculateDistances = [&](int start) {
            vector<int> dist(graph.size(), INT_MAX / 2);
            dist[start] = 0;

            // Min-heap to prioritize cells with smaller heights
            set<pair<int, int>> pq; // {distance, node}
            pq.insert({0, start});

            while (!pq.empty()) {
                auto [currentDist, currentNode] = *pq.begin();
                pq.erase(pq.begin());

                for (int neighbor : graph[currentNode]) {
                    int weight = heightMap[neighbor / cols][neighbor % cols];
                    if (max(currentDist, weight) < dist[neighbor]) {
                        pq.erase({dist[neighbor], neighbor});
                        dist[neighbor] = max(currentDist, weight);
                        pq.insert({dist[neighbor], neighbor});
                    }
                }
            }

            return dist;
        };

        vector<int> dist = calculateDistances(virtualStart);

        // Calculate trapped water
        int trappedWater = 0;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                int cell = i * cols + j;
                int boundaryHeight = dist[cell];
                if (boundaryHeight > heightMap[i][j]) {
                    trappedWater += boundaryHeight - heightMap[i][j];
                }
            }
        }

        return trappedWater;
    }
};

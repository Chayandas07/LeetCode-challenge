class Solution {
private:
    int bfs(vector<vector<int>>& stones, int start_index, vector<bool>& visited, int n) {
        queue<int> q;
        q.push(start_index);
        visited[start_index] = true;
        int count = 0;
        while (!q.empty()) {
            int index = q.front();
            q.pop();
            for (int i = 0; i < n; i++) {
                if(!visited[i]){
                    if((stones[i][0] == stones[index][0] || stones[i][1] == stones[index][1])){
                          visited[i] = true;
                    q.push(i);
                    count++; 
                    }
                }
            }
        }
        return count;
    }

public:
    int removeStones(vector<vector<int>>& stones) {
        int n = stones.size();
        vector<bool> visited(n, 0);
        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (!visited[i]) {
                ans += bfs(stones, i, visited, n);
            }
        }
        return ans;
    }
};

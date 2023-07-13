class Solution {
public:
    
    bool hasCycle(vector<int> graph[], int src, vector<bool> &visited, vector<bool> &dfsVisited){
        visited[src]=true, dfsVisited[src]=true;
        for(int i=0;i<graph[src].size();i++){
            int child=graph[src][i];
            if(visited[child]==false){
                if(hasCycle(graph,child,visited,dfsVisited)) return true;
            }else{
                if(dfsVisited[child]) return true;
            }
        }
        dfsVisited[src]=false;
        return false;
    }
    
    bool canFinish(int n, vector<vector<int>>& pre) {
        vector<bool> visited(n,false), dfsVisited(n,false);
        vector<int> graph[n];
        
        for(int i=0;i<pre.size();i++){
            int u=pre[i][0], v=pre[i][1];
            graph[v].push_back(u);
        }
        
        for(int i=0;i<n;i++){
            if(visited[i]==false){
                if(hasCycle(graph,i,visited,dfsVisited)) return false;
            }
        }
        
        for(int i=0;i<n;i++){
            if(visited[i]==false) return false;
        }
        return true;
    }
};

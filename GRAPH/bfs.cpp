/*
class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfs(vector<vector<int>> &mp) {
        unordered_map<int,vector<int>>adj;
        
        queue<int>q;
        q.push(0);
        vector<bool>visited(v,0);
        visited[0]=1;
        
        vector<int>ans;
        
        while(q.size()>0){
            int node=q.front();
            q.pop();
            ans.push_back(node);
            
            for(int j=0;j<adj[node].size();j++){
                if(visisted[adj[node][j]]!=0){
                    visited[node][j]=1;
                    q.push(adj[node][j]);
                }
            }
        }
        return ans;
    }
    
};

/*
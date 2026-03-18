class Solution {
public:
    vector<int> findOrder(int N, vector<vector<int>>& prerequisites) {
        vector<int>adj[N];
        vector<int>indeg(N,0);
        for(int i=0;i<prerequisites.size();i++){
            int course = prerequisites[i][0];
            int prereq = prerequisites[i][1];
            adj[prereq].push_back(course);
            indeg[course]++;
        }
        queue<int>q;
        for(int i=0;i<N;i++){
            if(!indeg[i]){
                q.push(i);
            }
        }
        vector<int>ans;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            ans.push_back(node);
            for(int j=0;j<adj[node].size();j++){
                indeg[adj[node][j]]--;
                if(!indeg[adj[node][j]]){
                    q.push(adj[node][j]);
                }
            }
        }
        vector<int>temp;
        return N==ans.size() ? ans : temp;
    }
};

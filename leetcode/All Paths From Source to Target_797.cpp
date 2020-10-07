class Solution {
public:
    void dfs(vector<vector<int>>& graph,int source, vector<vector<int>>& res, vector<int>& path){
        if(source == graph.size() - 1)
        {
            res.push_back(path);
            return;
        }
       
        for(int i = 0 ; i < graph[source].size(); i++)
        {
            path.push_back(graph[source][i]);
            dfs(graph, graph[source][i], res, path);
            path.pop_back();
        }
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> res;
        vector<int> path;
        path.push_back(0);
        
        dfs(graph, 0, res, path);
        return res;
    }
};
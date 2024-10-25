class Solution 
{
public:
    int maximalPathQuality(vector<int>& values, vector<vector<int>>& edges, int maxTime)
     {
       	int n = values.size();
		vector<vector<pair<int, int>>> graph(n);

        for (const auto & edge : edges)
		{
			int u = edge[0], v = edge[1], time = edge[2];
			graph[u].emplace_back(v, time);
			graph[v].emplace_back(u, time);
		}

		int maxQuality = 0;
		vector<int> visited(n, 0);  

		function<void(int, int, int)> dfs = [&](int node, int currentQuality, int currentTime)
		{
			
			if (node == 0)
			{
				maxQuality = max(maxQuality, currentQuality);
			}

			
             for (auto& [next, time] : graph[node])
			{
				if (currentTime + time <= maxTime)    
				{
					bool isFirstVisit = (visited[next] == 0);
					if (isFirstVisit) currentQuality += values[next];  

					visited[next]++;
					dfs(next, currentQuality, currentTime + time);  
					visited[next]--;

					if (isFirstVisit) currentQuality -= values[next];  
				}
			}
		};

		visited[0] = 1;  
		dfs(0, values[0], 0);

		return maxQuality; 
    }
};
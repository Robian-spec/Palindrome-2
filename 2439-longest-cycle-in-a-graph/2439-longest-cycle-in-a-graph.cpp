class Solution 
{
public:
    int longestCycle(vector<int>& edges) 
    {
        int n = edges.size();
		vector<int> visited(n, -1); 

		int longest = -1;

		for (int i = 0; i < n; ++i)

        {
			if (visited[i] == -1)   
			{
				int length = 0;
				int current = i;
				unordered_map<int, int> position; 

				while (current != -1 && visited[current] == -1)
				{
					visited[current] = 0; 
					position[current] = length++;
					current = edges[current];
				}

				if (current != -1 && visited[current] == 0)
				{
					longest = max(longest, length - position[current]);
				}

				current = i;
				while (current != -1 && visited[current] == 0)
				{
					visited[current] = 1;
					current = edges[current];
				}
			}
		}

		return longest;
    }
};
#include "Graph.h"
#include "stack.h"

using namespace std;

void dfs_helper(Graph g, int source, bool* visited, string& result)
{
	if (g.getVertices() < 1){
      return;
    }
	myStack stack(g.getVertices());
	stack.push(source);
    visited[source] = true;
	int current_node;
	while(!stack.isEmpty())
	{
		current_node = stack.getTop();
		stack.pop();
		result += to_string(current_node);
	}
	Node * temp = (g.getArray())[current_node].getHead();
	while(temp != NULL)
	{
		cout<<temp->data<<" ";
		if(!visited[temp->data])
		{
			dfs_helper(g, temp->data, visited, result);
		}
		temp = temp -> nextElement;
	}
}
string dfsTraversal(Graph g) {
	string result = "";
	bool * visited = new bool(g.getVertices());
	for(int i = 0; i < g.getVertices(); i++)
	{
		visited[i] = false;
	}
	for(int i = 0; i < g.getVertices(); i++)
	{
		if(!visited[i])
		  dfs_helper(g, i, visited,result);
	}

	delete[] visited;
    visited = NULL;

	return result; 
}
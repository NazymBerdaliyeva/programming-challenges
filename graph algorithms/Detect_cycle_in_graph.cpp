#include "Graph.h"
#include "stack.h"

using namespace std;

bool dfs_traversal(Graph g, int source, bool* visited)
{
    if(g.getVertices() < 1)
      return false;
    visited[source] = true;
    myStack stack(g.getVertices());
    stack.push(source);
    int current_node;

    while(!stack.isEmpty())
    {
        current_node = stack.pop();
    
        Node* node = (g.getArray())[current_node].getHead();
        while(node != NULL)
        {
            if(!visited[node->data])
            {
                stack.push(node->data);
                visited[node->data] = true;
            }
            else{
                return true;
            }
            node = node ->nextElement;
        }
    }
    return false;
    
}

bool detectCycle(Graph g) {
    bool* visited = new bool[g.getVertices()];
    bool res = false;
    for(int i = 0; i < g.getVertices(); i++)
    {
        visited[i] = false;
    }
    for(int i = 0; i < g.getVertices(); i++)
    {
        res = dfs_traversal(g, i, visited);
    }
    return res;
}
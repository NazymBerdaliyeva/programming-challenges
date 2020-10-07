#include "LinkedList.h"

class Graph {
private:
    int vertices;
    LinkedList* array;

public:
    Graph(int v);

    void addEdge(int source, int destination);

    void printGraph();

    LinkedList* getArray();

    int getVertices();
};
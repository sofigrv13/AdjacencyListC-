#include <bits/stdc++.h>
using namespace std;
using LL = long long;

const int V = 7;

void addEdge(vector<int> graph[], int source, int destination)
{
    graph[source].push_back(destination);
    graph[destination].push_back(source);
}

void printGraph(vector<int> graph[])
{
    cout << "\n La lista de adyacencia es: \n"
         << endl;
    for (int source = 0; source < V; source++)
    {
        cout << "Numero de vecinos del  " << source << " es:  " << graph[source].size() << endl;
        for (int neighbour : graph[source])
        {
            cout << "Existe una conexion entre:" << source << " y " << neighbour
                 << endl;
        }
        cout << endl;
    }
    cout << endl;
}

int main()
{
    vector<int> graph[V];

    addEdge(graph, 0, 6);
    addEdge(graph, 0, 3);
    addEdge(graph, 3, 4);
    addEdge(graph, 6, 2);
    addEdge(graph, 6, 4);
    addEdge(graph, 2, 1);
    addEdge(graph, 1, 5);
    addEdge(graph, 5, 2);

    printGraph(graph);
}
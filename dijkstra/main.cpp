#include <iostream>
#include <queue>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;
int OO = 99999999;
struct Compare {
    bool operator()(const pair<int,pair<int, int>>& a, const pair<int,pair<int, int>>& b) {
        return a.second.second > b.second.second;  // Reversed comparison for minimum priority queue
    }
};

class Graph {
public:
    // constructor
    Graph(int num_nodes) {
        // initialize adjacency list
        adj_list.resize(num_nodes);
    }

    // add an undirected edge between two nodes with given weight
    //an undirected branch is equivalent to two directed edges in both ways
    void add_undirected_edge(int u, int v, int weight) {
        adj_list[u].push_back(make_pair(v,weight));
        adj_list[v].push_back(make_pair(u,weight));
    }
    void add_directed_edge(int from, int to, int weight) {
        adj_list[from].push_back(make_pair(to,weight));
        //adj_list[v].push_back(make_pair(u,weight));
    }

    // get the number of nodes in the graph
    int get_num_nodes() {
        return adj_list.size();
    }

    // get the neighbors of a node and their weights
    vector<pair<int, int>> get_neighbors(int node) {
        vector<pair<int, int>> neighbors;
        for (int i = 0; i < adj_list[node].size(); i++) {
            neighbors.push_back(make_pair(adj_list[node][i].first,adj_list[node][i].second ));
        }
        return neighbors;
    }
    void printGraph (){
        for(int i = 0; i < adj_list.size(); i++)
        {
            cout<< "vertex "<<i<<": { ";
            for(int j = 1; j < adj_list[i].size(); j++)
            {
                cout<<adj_list[i][j].first<<" ";
            }
            cout<<"}"<<endl;
        }
    }
    void PrimMST ()
    {
        //the first int -> the node number zero based
        //the second int is the parent
        //the third int is the cost
        //we need a priority queue to hold the vertices with cost and the parent node for it
        //pair priority queue
       priority_queue<pair<int,pair<int,int>>>cost;
        for (int i = 0; i < adj_list.size(); i++) {   cost.push({i, {-OO, OO}}); }
       /* for (int i = 0; i < adj_list.size(); i++) {
          cout<<"Node number : "<<cost.top().first<<" parent of this node : "<<cost.top().second.first<<" cost to reach from the parent : "<<cost.top().second.second<<endl;
          cost.pop();
        }*/

    }
    void dijkstra_sssp(int sourceNode) {
        set<int> sssp; // the first int is the node number and the second is the parent
        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, Compare> Q;
        int arr[adj_list.size()];
        int parents[adj_list.size()];
        for (int i = 0; i < adj_list.size(); i++) {
            if (i == sourceNode) {
                Q.push({ i, { -10, 0 } });
                arr[i] = 0;
            }
            else {
                Q.push({ i, { -10, OO } });
                arr[i] = OO;
            }

        }
        while (Q.size() > 0) {
            int u = Q.top().first;
            sssp.insert(u);
            Q.pop();
            for (int i = 0; i < adj_list[u].size(); i++) {
                int v = adj_list[u][i].first;
                int weight = adj_list[u][i].second;
                if (arr[u] + weight < arr[v]) {
                    arr[v] = arr[u] + weight;
                    parents[v] = u;
                    Q.push({ v, { u, arr[v] } });
                }
            }
        }

        // Print the shortest distances and paths from the source node
        cout << "Shortest distances from node " << sourceNode << ":" << endl;
        for (int i = 0; i < adj_list.size(); i++) {
            cout << "Node " << i << ": " << arr[i] << endl;
        }

        cout << "Shortest paths from node " << sourceNode << ":" << endl;
        for (int i = 0; i < adj_list.size(); i++) {
            cout << "Node " << i << ": ";
            vector<int> path;
            int currentNode = i;
            while (currentNode != sourceNode) {
                path.push_back(currentNode);
                currentNode = parents[currentNode];
            }
            path.push_back(sourceNode);
            reverse(path.begin(), path.end());

            for (int j = 0; j < path.size(); j++) {
                cout << path[j];
                if (j != path.size() - 1) {
                    cout << " -> ";
                }
            }
            cout << endl;
        }
    }

/*
    void dijkstra_sssp(int sourceNode) {
        set<pair<int>> sssp;//the first int is the node number and the second is the parent
        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, Compare> Q;
        int arr[adj_list.size()];
        int parents [adj_list.size()];
        for (int i = 0; i < adj_list.size(); i++) {
            if (i == sourceNode) {
                Q.push({i, {-10, 0}});
            } else {
                Q.push({i, {-10, OO}});
            }
            arr[i] = OO;
        }
        while (Q.size() > 0) {
            int u = Q.top().first;
            sssp.insert(u);
            Q.pop();
            for(int i = 0; i < adj_list[u].size();i++) {
                if (adj_list[u][i].first == i && adj_list[u][i].second + arr[u] < arr[i])
                {
                    arr[i] = adj_list[u][i].second + arr[u];
                    parents[i] = u;
                }
            }
        }
    }
*/

private:
    // adjacency list
    vector<vector<pair<int, int>>> adj_list;
};



int main() {
    //priority_queue<int,vector<int>,greater<int>> pq;
    Graph graph(5);
    graph.add_directed_edge(0, 1, 10);
    graph.add_directed_edge(0, 4, 5);
    graph.add_directed_edge(1, 2, 1);
    graph.add_directed_edge(1, 4, 2);
    graph.add_directed_edge(2, 3, 4);
    graph.add_directed_edge(3, 2, 6);
    graph.add_directed_edge(3, 0, 7);
    graph.add_directed_edge(4, 3, 2);
    graph.add_directed_edge(4, 1, 3);
    graph.add_directed_edge(4, 2, 9);
    graph.printGraph();
    graph.dijkstra_sssp(0);
    return 0;
}

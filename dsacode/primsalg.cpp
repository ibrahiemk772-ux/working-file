#include<iostream>
#include<vector>
#include<list>
#include<queue>
using namespace std;

int primMST(int v, vector<vector<pair<int, int>>> &adj) {
    vector<bool> inMST(v, false);
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    int mstCost = 0;

    // Start from node 0
    pq.push({0,0});

    while(pq.size() > 0) {
        auto p = pq.top();
        pq.pop();

        int wt = p.first;
        int u = p.second;

        if(!inMST[u]) {
            inMST[u] = true;
            mstCost += wt;

            // Add all adjacent edges
            for(int i = 0; i < adj[u].size(); i++) {
                int v = adj[u][i].first;
                int w = adj[u][i].second;
                if(!inMST[v]) {
                    pq.push({w,v});
                }
            }
        }
    }
    return mstCost;
}

int main() {
    int V = 5; // number of vertices
    vector<vector<pair<int,int>>> adj(V);

    // Example graph (undirected)
    adj[0].push_back({1, 2});
    adj[1].push_back({0, 2});

    adj[0].push_back({3, 6});
    adj[3].push_back({0, 6});

    adj[1].push_back({2, 3});
    adj[2].push_back({1, 3});

    adj[1].push_back({3, 8});
    adj[3].push_back({1, 8});

    adj[1].push_back({4, 5});
    adj[4].push_back({1, 5});

    adj[2].push_back({4, 7});
    adj[4].push_back({2, 7});

    cout << "Cost of MST: " << primMST(V, adj) << endl;
    return 0;
}

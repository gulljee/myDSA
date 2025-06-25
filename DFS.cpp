#include "iostream"
#include "vector"
using namespace std;

void DFS(int node, vector<vector<int>>& vec , vector<bool> visited){
    cout << node << " ";
    visited[node] = true;

    for(int neighbour : vec[node]){
        if(!visited[node]){
            DFS(neighbour,vec,visited);
        }
    }
}
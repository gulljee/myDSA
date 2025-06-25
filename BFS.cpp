#include "iostream"
#include "vector"
#include "queue"
using namespace std;

void BFS(int start, vector<vector<int>> vec, vector<bool> visited){
    queue<int> q;
    visited[start] = true;
    q.push(start);

    while(!q.empty()){
        int node = q.front();
        cout<<node<<" ";
        q.pop();

        for(int neighbour: vec[node]){
            if(!visited[neighbour]){
                visited[neighbour] = true;
                q.push(neighbour);
            }
        }
    }

}
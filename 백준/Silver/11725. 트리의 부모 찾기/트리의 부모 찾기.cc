#include <iostream>
#include <vector>
using namespace std;

int N;
vector<int> answer;
vector<bool> visited;
vector<vector<int>> v;

void dfs(int k){
    visited[k] = true;
    for(int i:v[k]){
        if(!visited[i]){
            answer[i] = k;
            dfs(i);
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    visited.resize(N+1);
    answer.resize(N+1);
    v.resize(N+1);
    
    for(int i=1;i<N;i++){
        int x,y;
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }

    dfs(1);

    for(int i=2;i<=N;i++) cout << answer[i] << "\n";
}
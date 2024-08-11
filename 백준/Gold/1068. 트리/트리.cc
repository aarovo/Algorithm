#include <iostream>
#include <vector>
using namespace std;

int N;
vector<vector<int>> v;
vector<bool> visited;
int R;
int answer = 0;

void dfs(int k){
    visited[k] = true;
    int cNode=0;
    for(int i:v[k]){
        if(visited[i]==false&&i!=R){
            cNode++;
            dfs(i);
        }
    }
    if(cNode==0){
        answer++;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    v.resize(N);
    visited.resize(N);
    int root = 0;

    for(int i=0;i<N;i++){
        int j; cin >> j;

        if(j!=-1){
            v[i].push_back(j);
            v[j].push_back(i);
        }
        else{
            root = i;
        }
    }

    cin >> R;
    if(R==root){
        cout << 0 << "\n";
    }
    else{
        dfs(root);
        cout << answer << "\n";
    }
}
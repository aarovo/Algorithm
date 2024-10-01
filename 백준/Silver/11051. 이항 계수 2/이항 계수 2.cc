#include <iostream>
#include <vector>
using namespace std;

int main(){
    cin.tie(NULL); cout.tie(NULL);
    ios::sync_with_stdio(false);

    int N, K; cin >> N >> K;
    vector<vector<int>> D(N+1,vector<int>(N+1,0));

    for(int i=0;i<=N;i++){
        D[i][i] = 1;
        D[i][0] = 1;
        D[i][1] = i;
    }

    for(int i=1;i<=N;i++){
        for(int j=1;j<=N;j++){
            D[i][j] = (D[i-1][j] + D[i-1][j-1]) % 10007;
        }
    }

    cout << D[N][K];
}
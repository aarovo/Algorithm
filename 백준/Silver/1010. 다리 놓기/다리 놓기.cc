#include <iostream>
#include <vector>
using namespace std;

int main(){
    int T; cin >> T;
    vector<vector<int>> D(30,vector<int>(30,0));

    for(int i=0;i<30;i++){
        D[i][0] = 1;
        D[i][1] = i;
        D[i][i] = 1;
    }

    for(int i=1;i<30;i++){
        for(int j=1;j<30;j++){
            D[i][j] = D[i-1][j-1] + D[i-1][j];
        }
    }

    while(T--){
        int N,M; cin >> N >> M;
        cout << D[M][N] << "\n";
    }

    return 0;
}
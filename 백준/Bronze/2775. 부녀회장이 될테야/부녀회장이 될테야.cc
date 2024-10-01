#include <iostream>
#include <vector>
using namespace std;

int main(){
    cin.tie(NULL); cout.tie(NULL);
    ios::sync_with_stdio(false);

    int T; cin >> T;
    vector<vector<int>> D(15, vector<int>(15,0));
    for(int i=0;i<=14;i++){
        for(int j=0;j<=14;j++){
            D[i][0] = 1;
            D[0][j] = j+1;
        }
    }

    for(int i=1;i<=14;i++){
        for(int j=1;j<=14;j++){
            D[i][j] = D[i][j-1] + D[i-1][j];
        }
    }

    while(T--){
        int k, n; cin >> k >> n;
        cout << D[k][n-1] << "\n";
    }
}
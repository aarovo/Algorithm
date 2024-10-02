#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    vector<vector<long>> D(1001,vector<long>(1001,0));

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            D[i][1] = 1;
            D[1][j] = 1;
        }
    }

    for(int i=2;i<=n;i++){
        for(int j=2;j<=m;j++){
            D[i][j] = (D[i-1][j] + D[i][j-1] + D[i-1][j-1]) % 1000000007;
        }
    }

    cout << D[n][m];
}
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int M; cin >> M;
    vector<int> C(M,0);
    int T=0;
    for(int i=0;i<M;i++){
        cin >> C[i];
        T += C[i];
    }

    int K; cin >> K;
    double ans = 0;
    for(int j=0;j<M;j++){
        double f = 1;
        for(int i=0;i<K;i++){
            f *= (double)(C[j]-i)/(double)(T-i);
        }
        ans += f;
    }
    cout.precision(16);
    cout << ans;
}
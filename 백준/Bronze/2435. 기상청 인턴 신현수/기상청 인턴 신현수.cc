#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N, K; cin >> N >> K;
    vector<int> A(N);
    for(int i=0;i<N;i++) cin >> A[i];

    int max=-10001, sum=0;
    for(int i=0;i<N-K+1;i++){
        for(int j=i;j<i+K;j++){
            sum += A[j];
        }
        if(max<sum) max = sum;
        sum = 0;
    }

    cout << max << "\n";
}
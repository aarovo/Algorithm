#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    cin.tie(NULL); cout.tie(NULL);
    ios::sync_with_stdio(false);
    
    int N, X; cin >> N >> X;
    vector<int> A(N,0);
    for(int i=0;i<N;i++) cin >> A[i];

    int start=0, end=X-1, max=0, sum=0, count=1;
    for(int i=0;i<X;i++) sum+=A[i];
    max = sum;
    while(end<N){
        sum = sum - A[start++] + A[++end];
        if(sum>max) {
            max = sum;
            count = 1;
        }
        else if(max==sum) count++;
    }

    if(max==0) cout << "SAD\n";
    else cout << max << "\n" << count << "\n";
}
#include <iostream>
using namespace std;

int main(){
    cin.tie(NULL); cout.tie(NULL);
    ios::sync_with_stdio(false);
    
    int N, M; cin >> N >> M;
    int A[N];
    for(int i=0;i<N;i++) cin >> A[i];

    int start=0, end=0, sum=A[0], result=0;
    while(end<N){
        if(sum<M){
            sum += A[++end];
        }
        else if(sum>M){
            sum -= A[start++];
        }
        else{
            result++;
            sum += A[++end];
        }
    }

    cout << result << "\n";
}
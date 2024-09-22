#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int N; cin >> N;
    vector<int> A(N);
    for(int i=0;i<N;i++){
        cin >> A[i];
    }
    
    sort(A.begin(),A.end());
    
    int answer=0, b=0;
    for(int i=0;i<N;i++){
        b += A[i];
        answer += b;
    }
    
    cout << answer;
}
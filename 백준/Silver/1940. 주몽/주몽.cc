#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    cin.tie(NULL); cout.tie(NULL);
    ios::sync_with_stdio(false);

    int N, M;
    cin >> N >> M;
    vector<int> A(N,0);
    for(int i=0;i<N;i++){
        cin >> A[i];
    }
    sort(A.begin(),A.end());

    int count = 0, i=0, j=N-1;
    while(i<j){
        if(A[i]+A[j]<M) i++;
        else if(A[i]+A[j]>M) j--;
        else{
            count++;
            i++;
            j--;
        }
    }

    cout << count << "\n";
}
#include <iostream>
#include <queue>
using namespace std;

int main(){
    cin.tie(NULL); cout.tie(NULL);
    ios::sync_with_stdio(false);

    int N; cin >> N;
    queue<int> Q;

    for(int i=1;i<=N;i++) Q.push(i);

    while(!(Q.size()==1)){
        Q.pop();
        int temp = Q.front();
        Q.pop();
        Q.push(temp);
    }

    cout << Q.front() << "\n";
}
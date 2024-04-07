#include <iostream>
#include <queue>
using namespace std;

struct cmp {
    bool operator()(int a, int b){
        int A = abs(a); int B = abs(b);
        if(A==B){
            return a>b;
        }
        else return A>B;
    }
};

int main(){
    cin.tie(NULL); cout.tie(NULL);
    ios::sync_with_stdio(false);

    int N; cin >> N;
    priority_queue<int, vector<int>, cmp> pq;
    
    while(N--){
        int x; cin >> x;
        if(x==0){
            if(pq.empty()) {
                cout << "0\n";
                continue;
            }
            else{
                cout << pq.top() << "\n";
                pq.pop();
                continue;
            }
        }
        pq.push(x);
    }
}
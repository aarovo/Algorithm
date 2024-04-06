#include <iostream>
#include <stack>
using namespace std;

int main(){
    int N; cin >> N;
    stack<int> S;

    while(N--){
        string str; cin >> str;
        if(str == "push"){
            int X; cin >> X;
            S.push(X);
        }
        else if(str == "pop"){
            if(S.empty()) {
                cout << "-1\n";
                continue;
            }
            int m; 
            cout << S.top() << "\n";
            S.pop();
        }
        else if(str == "size"){
            cout << S.size() << "\n";
        }
        else if(str == "empty"){
            if(S.empty()) cout << "1\n";
            else cout << "0\n";
        }
        else{
            if(S.empty()){
                cout << "-1\n";
                continue;
            }
            cout << S.top() << "\n";
        }
    }
}
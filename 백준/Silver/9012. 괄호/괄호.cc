#include <iostream>
#include <stack>
using namespace std;

int main(){
    cin.tie(NULL); cout.tie(NULL);
    ios::sync_with_stdio(false);

    int T; cin >> T;
    stack<int> S;

    while(T--){
        string str; cin >> str;
        int i=0, a=0; 

        while(i<str.length()){
            if(str[i]=='(') S.push(0);
            else {
                if(S.empty()) a=1;
                else if(S.top()==0) S.pop();
                else S.push(1);
            }
            i++;
        }

        if(a==1||!S.empty()) cout << "NO" << "\n";
        else cout << "YES" << "\n";

        while(!S.empty()) S.pop();
    }
}
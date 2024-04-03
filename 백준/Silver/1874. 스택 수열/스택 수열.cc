#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main(){
    cin.tie(NULL); cout.tie(NULL);
    ios::sync_with_stdio(false);

    int n; cin >> n;
    vector<char> result;
    stack<int> myStack;

    int i=1;
    bool b = true;
    while(n--){
        int a; cin >> a;
        if(a>=i){
            while(a>=i){
                myStack.push(i++);
                result.push_back('+');
            }
            myStack.pop();
            result.push_back('-');
        }
        else{
            if(myStack.top()>a){
                cout << "NO\n";
                b=false;
                break;
            }
            else{
                myStack.pop();
                result.push_back('-');
            }
        }
    }

    if(b){
        for(int i=0;i<result.size();i++){
            cout << result[i] << "\n";
        }
    }
}
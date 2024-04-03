#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    vector<int>A(N,0);
    vector<int>answer(N,0);
    for(int i=0;i<N;i++){
        cin >> A[i];
    }

    stack<int>myStack;
    myStack.push(0);

    for(int i=0;i<N;i++){
        while(!myStack.empty() && A[i]>A[myStack.top()]){
            answer[myStack.top()] = A[i];
            myStack.pop();
        }
        myStack.push(i);
    }
    while(!myStack.empty()){
        answer[myStack.top()] = -1;
        myStack.pop();
    }
    for(int i=0;i<answer.size();i++){
        cout << answer[i] << ' ';
    }
}
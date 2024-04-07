#include <iostream>
using namespace std;

int main(){
    string str; cin >> str;
    int A[str.length()];
    for(int i=0;i<str.length();i++){
        A[i] = stoi(str.substr(i,1));
    }

    for(int i=0;i<str.length();i++){
        int max=i;
        for(int j=i+1;j<str.length();j++){
            if(A[j]>A[max]) max = j;
        }
        if(A[i]<A[max]){
            int temp = A[i];
            A[i] = A[max];
            A[max] = temp;
        }
    }

    for(int i=0;i<str.length();i++) cout << A[i];
}
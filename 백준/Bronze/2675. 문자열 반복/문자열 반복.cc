#include <iostream>
using namespace std;

int main(){
    int T; cin >> T;
    while(T--){
        int R; cin >> R;
        string S; cin >> S;

        for(int i=0; i<S.length(); i++){
            for(int j=0;j<R;j++){
                cout << S.at(i);
            }
        }
        cout << "\n";
    }
}
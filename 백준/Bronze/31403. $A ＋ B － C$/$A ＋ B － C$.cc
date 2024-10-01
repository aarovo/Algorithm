#include <iostream>
#include <string>
using namespace std;

int main(){
    int A, B, C; cin >> A >> B >> C;
    int ans1 = 0, ans2 = 0;
    int digit = 1;
    int n = to_string(B).length();


    for(int i=0;i<n;i++){
        digit *= 10;
    }
    
    ans1 = A + B - C;
    ans2 = (A*digit + B) - C;
    cout << ans1 << "\n" << ans2;
    
    return 0;
}
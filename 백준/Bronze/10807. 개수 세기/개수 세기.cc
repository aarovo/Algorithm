#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int num[n];
    for(int i=0;i<n;i++) cin >> num[i];

    int x, count = 0;
    cin >> x;

    for(int i=0;i<n;i++){
        if(num[i]==x) count++;
    }
    cout << count << "\n";
}
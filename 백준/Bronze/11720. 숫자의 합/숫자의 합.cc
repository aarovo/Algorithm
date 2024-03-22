#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int num, sum=0;
    for(int i=0;i<n;i++) {
        scanf("%1d", &num);
        sum += num;
    }

    cout << sum;
}
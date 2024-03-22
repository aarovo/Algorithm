#include <iostream>
using namespace std;

int main(){
    int n,sum=0;
    cin >> n;
    
    int ar[n];
    for(int i=0;i<n;i++){
        scanf("%1d",&ar[i]);
        sum += ar[i];
    }
    
    cout << sum;
}
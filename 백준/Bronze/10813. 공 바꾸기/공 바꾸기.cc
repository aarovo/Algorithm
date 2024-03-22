#include <iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    int basket[n+1];
    for(int i=1;i<=n;i++)
        basket[i] = i;
    
    int a, b, c, d;
    for(int i=0;i<m;i++){
        cin >> a >> b;
        c = basket[a];
        d = basket[b];
        basket[a] = d;
        basket[b] = c;
    }

    for(int i=1;i<=n;i++)
        cout << basket[i] << " ";
}
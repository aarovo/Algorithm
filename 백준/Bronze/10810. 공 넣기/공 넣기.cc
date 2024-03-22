#include <iostream>
using namespace std;

int basket[101];

int main(){
    int n, m;
    cin >> n >> m;

    int i, j, k;
    for(int a=0; a<m; a++){
        cin >> i >> j >> k;
        for(int b=i; b<=j; b++){
            basket[b] = k;
        }
    }

    for(int a=1;a<=n;a++)
        cout << basket[a] << " ";
}
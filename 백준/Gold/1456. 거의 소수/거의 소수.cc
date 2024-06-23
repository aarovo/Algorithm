#include <iostream>
#include <vector>
#define MAX 10000001
using namespace std;
typedef long long ll;

ll A, B, ans;
bool isPrime[MAX];
vector<int> primeVec;

void Eratos(){
    for(int i=2;i<MAX;i++) isPrime[i] = true;
    for(int i=2;i*i<=MAX;i++){
        if(isPrime[i]){
            for(int j=i*i;j<MAX;j+=i) isPrime[j] = false;
        }
    }
}

void getAlmostPrime(){
    for(int i=2;i<=MAX;i++){
        if(isPrime[i]){
            ll num = i, n=2;
            while(num<=B/i){
                if(A<=num*i) ans++;
                num*=i;
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> A >> B;
    Eratos();
    getAlmostPrime();
    cout << ans << "\n";

    return 0;
}
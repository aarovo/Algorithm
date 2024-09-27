#include <iostream>
#include <string>
using namespace std;

bool canEat(int start, int end, string& h){
    for(int i=start;i<=end;i++){
        if(i>=0 && i<h.length() && h[i]=='H'){
            h[i] = 'E';
            return true;
        }
    }
    return false;
}

int main(){
    int n,k; cin >> n >> k;
    string h; cin >> h;
    int ans = 0;
    
    for(int i=0;i<h.length();i++){
        if(h[i]!='P') continue;
        
        if(canEat(i-k,i-1,h)) ans++;
        else if(canEat(i+1,i+k,h)) ans++;
    }
    
    cout << ans;
    
    return 0;
}
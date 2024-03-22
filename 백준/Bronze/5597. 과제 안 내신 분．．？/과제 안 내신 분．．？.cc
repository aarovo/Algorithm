#include <iostream>
using namespace std;

int main(){
    int n;
    int nums[31] = {0,};
    for(int i=0;i<28;i++){
        cin >> n;
        nums[n] = n;
    }

    for(int i=1;i<31;i++){
        if(nums[i]==0) {
            cout << i << "\n";
        }
    }
}
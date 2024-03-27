#include <iostream>
using namespace std;

int main(){
    int nums[42] = {0, };
    int a;
    for(int i=0;i<10;i++){
        cin >> a;
        nums[a%42] += 1;
    }

    int count = 0;
    for(int i=0;i<42;i++){
        if(nums[i]!=0) count++;
    }

    cout << count;
}
#include <iostream>
using namespace std;

int main(){
    int n, x;
    cin >> n >> x;

    int count=0, m, nums[n];
    for(int i=0;i<n;i++){
        cin >> m;
        if(m<x) nums[count++] = m;
    }

    for(int i=0;i<count;i++)
        cout << nums[i] << " ";
}
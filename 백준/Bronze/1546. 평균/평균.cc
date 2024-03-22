#include <iostream>
using namespace std;

int main(){
    int n;
    double avg, sum=0, max=0;
    cin >> n;

    int nums[n];
    for(int i=0;i<n;i++){
        cin >> nums[i];
        if(max<nums[i]) max = nums[i];
    }

    for(int i=0;i<n;i++)
        sum += (nums[i]/max)*100;
    
    avg = sum / (double)n;
    cout << avg;
}
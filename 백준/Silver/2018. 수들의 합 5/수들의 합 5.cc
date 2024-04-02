#include <iostream>
using namespace std;

int main(){
    cin.tie(NULL); cout.tie(NULL);
    ios::sync_with_stdio(false);

    int N; cin >> N;
    int count = 1, sum = 1, end=1, start=1;

    while(end != N){
        if(sum == N){
            count ++;
            end++;
            sum = sum + end;
        }
        else if(sum < N){
            end++;
            sum = sum + end;
        }
        else {
            sum = sum - start;
            start++;
        }
    }
    cout << count << "\n";
}
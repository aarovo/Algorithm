#include <iostream>
#include <deque> //덱을 사용하기 위한 라이브러리 추가
using namespace std;
typedef pair<int,int> Node; //Node 타입 선언

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N,L;
    cin >> N >> L;
    deque<Node> mydeque; //덱 자료구조

    for(int i=0;i<N;i++){
        int now;
        cin >> now; //현재 데이터 입력
        while(mydeque.size()&&mydeque.back().first > now) //?
        {
            mydeque.pop_back(); //덱 가장 오른쪽 데이터 삭제
        }

        mydeque.push_back(Node(now,i)); //덱 가장 오른쪽에 데이터 입력

        //범위에서 벗어난 값을 덱에서 제거
        if(mydeque.front().second <= i-L){
            mydeque.pop_front();
        }
        cout << mydeque.front().first << ' ';
    }
}
#include <iostream>
using namespace std;

int checkAr[4];
int myAr[4];
int checkSecret = 0;
void Add(char a);
void Remove(char a);

int main(){
    int s, p;
    cin >> s >> p;
    char A[s];
    for(int i=0;i<s;i++){
        cin >> A[i];
    }
    int answer=0;
    
    for(int i=0; i<4; i++){
        cin >> checkAr[i];
        if(checkAr[i]==0)
            checkSecret++;
    }
    
    for(int i=0;i<p;i++){
        Add(A[i]);
    }
    
    if(checkSecret==4) answer++;
    
    for(int i=p;i<s;i++){
        int j=i-p;
        Add(A[i]);
        Remove(A[j]);
        if(checkSecret==4) answer++;
    }
    
    cout << answer;
}

void Add(char a){
    if(a=='A'){
        myAr[0]++;
        if(myAr[0]==checkAr[0])
            checkSecret++;
    }
    else if(a=='C'){
        myAr[1]++;
        if(myAr[1]==checkAr[1])
            checkSecret++;
    }
    else if(a=='G'){
        myAr[2]++;
        if(myAr[2]==checkAr[2])
            checkSecret++;
    }
    else{
        myAr[3]++;
        if(myAr[3]==checkAr[3])
            checkSecret++;
    }
}

void Remove(char a){
    if(a=='A'){
        if(myAr[0]==checkAr[0])
            checkSecret--;
        myAr[0]--;
    }
    else if(a=='C'){
        if(myAr[1]==checkAr[1])
            checkSecret--;
        myAr[1]--;
    }
    else if(a=='G'){
        if(myAr[2]==checkAr[2])
            checkSecret--;
        myAr[2]--;
    }
    else{
        if(myAr[3]==checkAr[3])
            checkSecret--;
        myAr[3]--;
    }
}
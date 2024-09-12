#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int SIZE = 26;

int main(){
    string text;
    cin >> text;
    
    vector<int> count(SIZE,0);
    for(int i=0;i<text.size();i++){
        count[text[i]-'A']++;
    }
    
    string a="",b="",c="";
    bool win = true;
    
    for(int i=0;i<SIZE;i++){
        if(count[i]%2==1){
            if(b.size()==1){
                win = false;
            }
            b = (char)(i+'A');
        }
        
        for(int j=0;j<count[i]/2;j++){
            a += (char)(i+'A');
            c = (char)(i+'A')+c;
        }
    }
    
    if(win){
        cout << a+b+c;
    }
    else{
        cout << "I'm Sorry Hansoo";
    }
    
    return 0;
}
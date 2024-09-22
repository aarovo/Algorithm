#include <string>
#include <vector>
#include <map>
#include <iostream>
#include <sstream>

using namespace std;

int solution(vector<string> friends, vector<string> gifts) {
    int n = friends.size();
    map<string,int> dict;
    vector<vector<int>> table(n,vector<int>(n,0));
    vector<int> max(n,0);
    vector<int> score(n,0);
    
    for(int i=0;i<n;i++){
        dict[friends[i]] = i;
    }
    
    for(string gift : gifts){
        string a, b;
        stringstream ss (gift);
        ss >> a >> b;
        
        table[dict[a]][dict[b]]++;
        score[dict[a]]++;
        score[dict[b]]--;
    }
    
    for(int i=0; i<n; i++){
        for(int j=0;j<n;j++){
            if(i==j) continue;
            
            if(table[i][j]>table[j][i]) max[i]++;
            else if(table[i][j]==table[j][i]){
                if(score[i]>score[j]) max[i]++;
            }
        }
    }
    
    int answer = max[0];
    for(int i=0;i<max.size();i++){
        if(max[i]>answer) answer = max[i];
    }
    
    return answer;
}
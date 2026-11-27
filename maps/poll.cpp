#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  map<string,int>votes;
  int maxcnt=0;
  for (int i = 0; i <n; i++){
    string votename;
    cin>>votename;
    votes[votename]++;
    maxcnt=max(maxcnt,votes[votename]);
  }
  for (auto p :votes){
    if(p.second==maxcnt) cout<<p.first<<'\n';
  }   
  return 0;  
}
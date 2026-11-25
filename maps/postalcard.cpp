#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,m;
  cin>>n>>m;  
  map<int,string>si;
  map<int,string>ti;
  for (int i = 0; i <n; i++){
    cin>>si[i];
  }
  for (int i = 0; i <m; i++){
    cin>>ti[i];
  }
  int count=0;
  for (int i=0; i<n; i++){
     string suffix=si[i].substr(si[i].size()-3);
     for (int j=0; j <m; j++){
        if(ti[j]==suffix){
          count++;
          break;
        }
     }
  }
  cout<<count<<'\n';
  return 0;  
}
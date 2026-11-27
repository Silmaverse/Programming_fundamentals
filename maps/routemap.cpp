#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,m;
  cin>>n>>m;
  vector<string>allstname;
  map<string,bool>si;
  for (int i = 0; i < n; i++){
    string stname;
    cin>>stname;
    allstname.push_back(stname);
    si[stname]=false;
  }
  for (int i = 0; i < m; i++){
    string tiname;
    cin>>tiname;
    si[tiname]=true;
  }
  for (auto it:allstname){
    if(si[it]) cout<<"Yes\n";
    else cout<<"No\n";
  }
  
  return 0;  
}
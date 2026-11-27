#include <bits/stdc++.h>
using namespace std;
int main(){
  int n,m;
  cin>>n>>m;
  map<string,string>rt;
  for(int i=0;i<n;i++){
    string name;
    string ip;
    cin>>name>>ip;
    rt[ip]=name;
  }
  for (int i = 0; i < m; i++){
    string name,ip;
    cin>>name>>ip;
    ip.pop_back();
    cout<<name<<" "<<ip<<"; #"<<rt[ip]<<'\n'; 
    /* code */
  }
  
  return 0;  
}
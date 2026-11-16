#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,m;
  cin>>n>>m;
  vector<int>a(m);
  vector<int>b(m);
  vector<bool>gen(n,false);
  for (int i = 0; i < m; i++){
    int x;char gender;
    cin>>x>>gender;
    if(!gen[x] && gender!='F'){
       gen[x]=true;
       cout<<"Yes\n";
    }else{
      cout<<"No\n";  
    }
  }
  
  return 0;  
}
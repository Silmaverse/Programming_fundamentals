#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,q;
  cin>>n>>q;
  vector<vector<int>> v(n);
  int t;
  while (q--){
    cin>>t;
    if(t==0){
     int i,x;
     cin>>i>>x;
     v[i].push_back(x);
    }else if(t==1){
       int x;
       cin>>x;
       int m=v[x].size();
       for(int i=0;i<m;i++){
          cout<<v[x][i];
          if(i!=m-1) cout<<" ";
       } 
       cout<<'\n';
    }else{
       int x; 
       cin>>x;
       v[x].clear();

    } 
  }
  
  
  return 0;  
}
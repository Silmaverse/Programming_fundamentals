#include <bits/stdc++.h>
using namespace std;

int main(){
  int q;
  cin>>q;
  vector<int>v;
  while (q--){
   int t;
   cin>>t;
   if(t==0){
    int x;
    cin>>x;
    v.push_back(x);
   }else if(t==1){
     int p;
     cin>>p;
     cout<<v[p]<<'\n';
   }else{
     v.pop_back();
   }
  }
  return 0;  
}
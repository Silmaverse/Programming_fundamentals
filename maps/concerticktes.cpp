#include <bits/stdc++.h>
using namespace std;
int main(){
  int n,m;
  cin>>n>>m;
  map<int,int>ttp;
  for (int i = 0; i <n; i++){
    int h;
    cin>>h; 
    ttp[h]++;     
  }
  for (int i = 0; i <m; i++){
   int tp;
   cin>>tp;
   auto it= ttp.upper_bound(tp);
   if(it!=ttp.begin()){
     --it;
     cout<<it->first<<endl;
     ttp[it->first]--;
     if(ttp[it->first]==0) ttp.erase(it->first);
   }
   else{
     cout<<-1<<endl;
   }
  }
  return 0;   
}
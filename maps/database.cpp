#include <bits/stdc++.h>
using namespace std;

void solve(int testcase){
   map<pair<int,int>,bool> db;
   int n,r;
   cin>>n>>r;
   bool corrupted=false;
   for (int i = 0; i < r; i++){
     int id,c;
     cin>>id>>c;
     if(db[{id,c}]){
       corrupted=true; 
     }
     db[{id,c}]=true; 
   }
   if(corrupted) cout<<"Scenario  #"<<testcase<<": impossible\n";
   else cout<<"Scenario  #"<<testcase<<": possible\n";
}


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin>>t;
  for (int i = 1; i <=t; i++){
    solve(i);
  }
  

  return 0;  
}
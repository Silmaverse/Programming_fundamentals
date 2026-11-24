#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while (t--){
    int x,y;
    cin>>x>>y;
    string s;
    cin>>s;
    bool ok_x=true,ok_y=true;
  if(x>0){
     ok_x=count(s.begin(),s.end(),'R')>=x; 
  } 
  else if(x<0){
      ok_x=count(s.begin(),s.end(),'L')>=abs(x); 
  }
  if(y>0){
      ok_y=count(s.begin(),s.end(),'U')>=y; 
  }
  else if(y<0){
      ok_y=count(s.begin(),s.end(),'D')>=abs(y); 
  }
    
  if(ok_x && ok_y) cout<<"YES"<<'\n';
  else cout<<"NO"<<'\n';
 }
  return 0;  
}
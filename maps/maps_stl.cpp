#include <bits/stdc++.h>
using namespace std;

int main(){
  int q;
  cin>>q;
  map<string,int>m;
  while (q--){
    int t;
    cin>>t;
    if(t==1){
       string name;
       int marks; 
       cin>>name>>marks; 
       m[name]+=marks;
    }
    else if(t==2){
       string name;
       cin>>name; 
       m.erase(name); 
    }
    else{
       string name;
       cin>>name;
       cout<<m[name]<<'\n'; 
    }
  }
  
  return 0;  
}
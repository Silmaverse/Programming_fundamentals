#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while (t--){
   string str;
   cin>>str;
   str=str.substr(0,str.size()/2);
   int k=unique(str.begin(),str.end())-str.begin();
   cout<<(k==1?"No":"Yes")<<'\n';
  }
  return 0;  
}
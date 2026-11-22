#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while (t--){
   int n;
   cin>>n; 
   string str;
   cin>>str;
   for(auto &x:str){
    x=tolower(x);
   }
   str.erase(unique(str.begin(),str.end()),str.end());
   cout<<(str=="meow"?"Yes\n":"No\n");
  }
  return 0;  
}
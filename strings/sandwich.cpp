#include <bits/stdc++.h>
using namespace std;

int main(){
 string str;
 cin>>str;
 int n=str.size();
 bool ans=true;
 if(n!=8) ans=false;
 if(!(str[0]>='A' &&  str[0]<='Z')){
    ans=false;
 }
 if(!(str[n-1]>='A' &&  str[n-1]<='Z')){
    ans=false;
 }
for (int i = 1; i < n-2; i++){
  if(!(str[i]>='0' && str[i]<='9')){
   ans=false;
  }
}
 if(str[1]=='0'){
   ans=false; 
 }
 cout<<(ans?"Yes":"No")<<'\n';
 return 0;   
}
#include <bits/stdc++.h>
using namespace std;

string superReducedString(string s){
  
   for (int i = 0; i <(int)s.size()-1; i++){
    if(s[i]==s[i+1]){
    //   s.erase(i,2); 
      s=s.substr(0,i)+s.substr(i+2);
      i=-1; 
    }
   }
   if(s.empty()){
     return "Empty String"; 
   } 
   return s;
}

int main(){
 string s;
 cin>>s;
 string result=superReducedString(s);
 cout<<result<<'\n';
 return 0;   
}
#include <bits/stdc++.h>
using namespace std;

int main(){
  string str;
  int target[3]={5,7,5};
  vector<string>s;
   while (getline(cin,str)){
   if(str.empty()){
     break; 
   }
   s.push_back(str);
  }
  for (int i = 0; i < 3; i++){
    int vowels=0;
    for(char x:s[i]){
       if(x=='a'||x=='e'||x=='i'||x=='u'||x=='o'){
           vowels++;
       } 
    }
    if(vowels!=target[i]){
      cout<<"NO\n";
      return 0;  
    }
  }
  cout<<"YES\n";
  return 0;  
}
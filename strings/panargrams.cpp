#include <bits/stdc++.h>
using namespace std;

int main(){
  string str;
  getline(cin,str);
  int countchar[26]={0};
  for (int i = 0; i < str.size(); i++){
    if(str[i]!=' '){
     char ch=tolower(str[i]);   
     if(ch>='a' && ch<='z'){
        countchar[ch-'a']++;
      }
    }
  }
  for(int i=0;i<26;i++){
    if(countchar[i]==0){
       cout<<"not pangram \n";
       return 0; 
    }
  }
  cout<<"pangram \n";
  return 0;  
}
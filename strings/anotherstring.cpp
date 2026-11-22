#include <bits/stdc++.h>
using namespace std;

int main(){
 int t;
 cin>>t;
 vector<string>str(t);
 for (int i = 0; i < t; i++){
    cin>>str[i];
    for (int j = 0; j<str[i].size(); j+=2){
      if(str[i][j]=='a') str[i][j]='b';
      else str[i][j]='a';  
    }
    for (int j = 1; j<str[i].size(); j+=2){
      if(str[i][j]=='z') str[i][j]='y';
      else str[i][j]='z';  
    }
    cout<<str[i]<<'\n';
 }
 
 return 0;  
}
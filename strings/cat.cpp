#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  string str;
  cin>>str;
  size_t pos=str.find("na",0);
  while (pos!=string::npos){
    str.replace(pos,2,"nya");
    pos=str.find("na",pos+3);
  }
  cout<<str<<'\n';
  return 0;  
}
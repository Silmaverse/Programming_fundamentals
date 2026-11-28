#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  map<pair<int,int>,string>codeword;
  for (int i = 0; i < n; i++){
    int ff,ss;
    cin>>ff>>ss;
    string name;
    cin>>name;
    codeword[{ff,ss}]=name;
  }
  int t;
  cin>>t;
  while (t--){
    int ff,ss;
    cin>>ff>>ss;
    cout<<codeword[{ff,ss}]<<'\n';
  }
  

  return 0;  
}
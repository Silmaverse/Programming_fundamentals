#include <bits/stdc++.h>
using namespace std;

int main(){
  map<char,int> charcount;
  for (int i = 0; i < 4; i++){ 
    char c;
    cin>>c;
    charcount[c]++;
  }
  if(charcount.size()==2){
    auto it=charcount.begin();
    auto it1=next(it);
    if(it->second ==2 && it1->second ==2) cout<<"Yes\n";
    else cout<<"No\n";
  }else{
    cout<<"No"<<'\n'; 
  }
  
  return 0;  
}
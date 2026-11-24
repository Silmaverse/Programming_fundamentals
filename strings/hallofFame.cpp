#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin>>t;
  while (t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    bool ok=0;
    int pos=0;
    for (int i = 0; i<n-1; i++){
       if(s[i]!=s[i+1]){ 
         ok=1;
      }
      if(i+1<n && s[i]=='L' && s[i+1]=='R'){
         pos=i+1;
      } 
    }
    if(!ok) cout<<-1<<'\n';
    else{
        if(s[0]=='R') cout<<0<<'\n';
        else cout<<pos<<'\n';
    }

    
  }
  
  return 0;
}
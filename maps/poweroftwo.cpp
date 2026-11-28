#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  vector<int>num(n+1);
  for (int i = 1; i <=n; i++){
    cin>>num[i];
  }
  long long ans=0;
  map<int,int>freqcnt;
  for (int i = 1; i <=n; i++){
    for (int p = 0; p <=30; p++){
        int sum=(1<<p);
        int need=sum-num[i];
        ans+=freqcnt[need];
    }
    freqcnt[num[i]]++;
  }
  cout<<ans<<endl;
  return 0;  
}
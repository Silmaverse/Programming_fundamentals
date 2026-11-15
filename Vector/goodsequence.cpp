#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  vector<long long> count(n+1);
  long long total=0;
  for (int i = 0; i <n; i++){
    int val;
    cin>>val;
    if(val>n || val<=0){
       total++; 
    }else
    count[val]++;
  }
  for (int i = 1; i <=n ; i++){
    if(count[i]>=i) total+=count[i]-i;
    else total+=count[i];
  }
  cout<<total<<'\n';
  return 0;  
}
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,q;
    scanf("%d%d",&n,&q);
    long long arr[n];
    long long pref[n+1];
    for (int i = 0; i <n; i++){
      scanf("%lld",&arr[i]);
    }
    sort(arr,arr+n);
    for (int i = 0; i <=n; i++){
      pref[i]=0;
    }
    for (int i =0; i <n; i++){
      pref[i+1]=arr[i]+pref[i];
    }
    while (q--)
    {
      int x,y;
      scanf("%d%d",&x,&y);
      long long ans=pref[n-x+y]-pref[n-x];
      printf("%lld\n",ans);
    }
    
    
  return 0;
}
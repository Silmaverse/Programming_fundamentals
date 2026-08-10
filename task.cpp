#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  scanf("%d",&t);
  while (t--){
    int n,k,mx=0,ans=0;
    scanf("%d%d",&n,&k);
    int arr[k];
    for (int i = 0; i < k; i++){
      scanf("%d",&arr[i]);
      ans+=2*arr[i]-1;
      if(mx<arr[i]) mx=arr[i]; 
    }
    ans-=mx*2-1;
    printf("%d\n",ans);
  } 
  return 0;
}
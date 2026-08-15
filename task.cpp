#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,m;
  scanf("%d%d",&n,&m);
  int arr[m];
  for(int i=0;i<m;i++){
   scanf("%d",&arr[i]); 
  }
  sort(arr,arr+m);
  int j=n-1,ans=1002;
  for(int i=0;j<m;j++,i++){
    ans=min(arr[j]-arr[i],ans);
  }
  printf("%d\n",ans);
  return 0;
}
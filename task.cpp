#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,x;
  scanf("%d%d",&n,&x);
  int arr[n]; 
  for(int i=0;i<n-1;i++) scanf("%d",&arr[i]);
  for(arr[n-1]=0;arr[n-1]<=100;arr[n-1]++){
    int sum=0;
    for(int i=0;i<n;i++){
      sum+=arr[i];
    }
    int minnum=101,maxnum=0;
    for(int i=0;i<n;i++){
      minnum=min(minnum,arr[i]);
      maxnum=max(maxnum,arr[i]);
    }
    sum=sum-maxnum-minnum;
    if(sum>=x){
      break;
    }
  }
  if(arr[n-1]>100) printf("%d\n",-1);
  else printf("%d",arr[n-1]);
  return 0;
}
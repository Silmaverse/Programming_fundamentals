#include <bits/stdc++.h>
using namespace std;

int main(){

  int n;
  scanf("%d",&n);
  int arr[n],barr[n];
  for(int i=0;i<n;i++){
   scanf("%d",&arr[i]);
   barr[i]=arr[i];
  }
  sort(barr,barr+n);
  int count=0;
  for (int i = 0; i <n; i++){
    if(arr[i]!=barr[i]) count++;
  }
  printf("%d",count-1);
  return 0;
}
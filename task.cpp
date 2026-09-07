#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  scanf("%d",&t);
  while (t--){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++){
      scanf("%d",&arr[i]);
    }
    sort(arr,arr+n);
    int u=1;
    for(int i=1;i<n;i++){
      if(arr[i]!=arr[i-1]) u++;
    }
    for (int k = 1; k<=n; k++){
      printf("%d ",max(k,u));
    }
    printf("\n");
  }
  return 0;
}
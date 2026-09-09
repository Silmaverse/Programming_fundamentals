#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  scanf("%d",&t);
  while (t--){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
      scanf("%d",&arr[i]);
    }
    int ans=0;
    for (int i = 1; i +1< n; i++){
      if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
        if(i+2<n){
          arr[i+1]=max(arr[i],arr[i+2]);
        }else{
            arr[i+1]=arr[i];
        }
        ans++;

      }
    }
    printf("%d\n",ans);
    for(int i=0;i<n;i++){
      printf("%d ",arr[i]); 
    }
    printf("\n");
  }
  
  return 0;
}
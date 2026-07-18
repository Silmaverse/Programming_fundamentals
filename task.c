#include <stdio.h>

int main(){
  int t;
  scanf("%d",&t);
  while (t--){
    int n;
    scanf("%d",&n);
    int arr[n+1];
    int mn=100;
    for(int i=0;i<n;i++){
      scanf("%d",&arr[i]);
      if(mn>arr[i]) mn=arr[i];
    }
    int ans=0;
    for(int i=0;i<n;i++){
       if(arr[i]!=mn) ans++;
    }
    printf("%d\n",ans);
  }
 return 0;
}
#include <stdio.h>
#include <limits.h>

int main() {
  int t;
  scanf("%d",&t);
  while (t--){
    int n,a;
    scanf("%d",&n);
    int arr[n];
    int ans=-1;
    for(int i=0;i<=n;i++){
      arr[i]=0;
    }
    for(int i=0;i<n;i++){
       scanf("%d",&a);
       if(++arr[a]>=3){
         ans=a;
       }
    }
    printf("%d\n",ans);
  }
  
  return 0;
}

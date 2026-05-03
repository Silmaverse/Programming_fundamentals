#include <stdio.h>
#include <stdlib.h>

int main() {
  int n;
  scanf("%d",&n);
  int arr[n+1];
  int b[n+1];
  for(int i =1;i<=n;i++){
      scanf("%d",&arr[i]);
  }
  for(int i =1;i<=n;i++){
     b[i]=0;
  }
  for(int i=1;i<=n;i++){
     if(b[i]==0){
       b[arr[i]]=1;
     } 
  }

  int ans=0;
  for(int i=1;i<=n;i++){
      if(b[i]==0){
        ans++;
      }
  }
  printf("%d\n",ans);
  for (int i = 1; i <=n ; i++){
    if(b[i]==0){
      printf("%d ",i);
    }
  }
  
  return 0;
}

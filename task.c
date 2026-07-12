#include <stdio.h>

int main(){
  int t;
  scanf("%d",&t);
  while (t--){
    int n,m;
    scanf("%d%d",&n,&m);
    int arr[n+1][m+1];
    for(int i=1;i<=n; i++){
      for(int j=1;j<=m;j++){
        scanf("%d",&arr[i][j]);
      }
    }
    if(n==1 && m==1){ 
      printf("-1\n");
      continue;
    }
    for(int i=1;i<=n;i++){
      for(int j=1;j<=m;j++){
        printf("%d ",arr[i][j]%(n*m)+1);
      }
      printf("\n");
    }
   

  }
return 0;
}
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
    else{
      
     if(n==1){ 
      int mid=1+(m-1)/2;
      for(int i=m;i>=1;i--){
        if(i!=mid) printf("%d ",arr[1][i]);
      }
      printf("%d\n",arr[1][mid]);
      continue;
    }
    else if(m==1){
      int mid=1+(n-1)/2;
      for(int i=n;i>=1;i--){
        if(i==mid) continue;
        for(int j=m;j>=1;j--){
          printf("%d",arr[i][j]);
        }
        printf("\n");        
      }
      printf("%d\n",arr[mid][1]);
      continue;
    }
    else{

      for(int i=n;i>=1; i--){
        for(int j=m;j>=1;j--){
          printf("%d ",arr[i][j]); 
        }
        printf("\n");
      }
    }
    }

  }
return 0;
}
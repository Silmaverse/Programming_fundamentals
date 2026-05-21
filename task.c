#include<stdio.h>
#include<stdbool.h>

int main(){
  int n,m;
  scanf("%d%d",&n,&m);
  int arr[m][n];
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      scanf("%d",&arr[i][j]);
    }
  }
  int ans=0;
  for(int i=1;i<=n;i++){
    for(int j=i+1;j<=n;j++){
       bool flag=false;
       for(int k=0;k<m;k++){
         for(int l=0;l<n-1;l++){
          if(arr[k][l]==i && arr[k][l+1]==j) flag=true;
          if(arr[k][l]==j && arr[k][l+1]==i) flag=true;
         }
       }
       if(!flag) ans++;
    }
  }
  printf("%d",ans);

  return 0;
}
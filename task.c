#include<stdio.h>
int main(){
 int n;
 scanf("%d",&n);
 int A[n+1][n+1];
 int B[n+1][n+1];
 int temp[n+1][n+1];

 for(int i=1;i<=n;i++){
  for(int j=1;j<=n;j++){
    scanf("%d",&A[i][j]);
  }
 }

 for(int i=1;i<=n;i++){
  for(int j=1;j<=n;j++){
    scanf("%d",&B[i][j]);
  }
 }
 
 for(int k=0;k<4;k++){
   int flag=1;
   for(int i=1;i<=n;i++){
     for(int j=1;j<=n;j++){
      if(A[i][j]==1  && B[i][j]==0){
         flag=0;
         break;
      }
    }
   }
   if(flag){
     printf("Yes\n");
     return 0;
   }
   //rotate
   for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
       temp[i][j]=A[n+1-j][i];
    }
   }

   
   for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
       A[i][j]=temp[i][j];
    }
   }

 }
 printf("No");
 
 
 return 0;
}
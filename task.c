#include <stdio.h>

int main(){
   int n,m;
   scanf("%d%d",&n,&m);

   int arr[n][m];
   int total_saddle = 0;

   for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
         scanf("%d",&arr[i][j]);
      }
   }

   for(int i=0;i<n;i++){
      int saddle_point = arr[i][0];
      int col_ind = 0;

      for(int j=1;j<m;j++){
         if(arr[i][j] < saddle_point){
            saddle_point = arr[i][j];
            col_ind = j;
         }
      }

      int k;
      for(k=0;k<n;k++){
         if(arr[k][col_ind] > saddle_point){
            break;
         }
      }

      if(k==n){
         total_saddle++;
      }
   }

   printf("%d",total_saddle);

   return 0;
}
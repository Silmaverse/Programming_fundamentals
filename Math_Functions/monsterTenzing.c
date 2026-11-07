#include <stdio.h>

int main(){
 int t;
 scanf("%d",&t);
  while (t--){
   int n,m;
   scanf("%d%d",&n,&m);
   int arrA[n],arrB[m];
   long long sum1=0,sum2=0;
   for (int i = 0; i <n; i++){
      scanf("%d",&arrA[i]);
      sum1+=arrA[i];
   }
   for (int i = 0; i <m; i++){
      scanf("%d",&arrB[i]);
      sum2+=arrB[i];
   }

   if (sum1>sum2){
    printf("Tsondu\n");
   }else if(sum1<sum2){
     printf("Tenzing\n");
   }else{
    printf("Draw\n");
   }
     
  }
  return 0; 
}
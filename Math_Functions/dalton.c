#include <stdio.h>

int minimumSwap(int arr[],int n){
  int c=0;  
  for (int i = 1; i <= n+1; i++){
    if(arr[i]==i) c++;
  }
  if(c%2==0){
   return c/2;
  }
  return c/2+1;  
}

int main(){
 int t;
 scanf("%d",&t);
 while (t--){
   int n;
   scanf("%d",&n);
   int arr[n+1];
   for (int i = 1; i <=n; i++){
    scanf("%d",&arr[i]);
   }
   
   int minswap=minimumSwap(arr,n); 
   printf("%d\n",minswap);
 }
 
 return 0;  
}
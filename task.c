#include <stdio.h>
# include <string.h>

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
   int x=0;
   for(int i=1;i<=n;i++){
      x++;
     if(arr[i]==x) x++;
   }
   printf("%d\n",x);
  }
  return 0;
}
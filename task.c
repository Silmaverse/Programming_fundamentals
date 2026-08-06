#include <stdio.h>
#include <string.h>

int main(){
  int t;
  scanf("%d",&t);
  while (t--){
   int x,y,n;
   scanf("%d%d%d",&x,&y,&n);
   int arr[n];
   arr[n-1]=y;
   int b=1;
   for(int i=n-2;i>=0;i--){
     arr[i]=arr[i+1]-b;
     b++;
   }
   if(arr[0]>=x){
     arr[0]=x;
     for(int i=0;i<n;i++){
       printf("%d ",arr[i]);
     }
     printf("\n");
   }else{
    printf("-1\n");
   }
  }
  return 0;
}
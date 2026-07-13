#include <stdio.h>

int main(){
  int t;
  scanf("%d",&t);
  while (t--){
    int n;
    int arr[n+1];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
      scanf("%d",&arr[i]);
    } 
    for(int i=0;i<n;i++){
      if(arr[i]==0){
        printf("0\n");
      }
    }
  }
return 0;
}
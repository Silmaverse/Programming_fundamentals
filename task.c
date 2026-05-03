#include <stdio.h>
#include <stdlib.h>

int main() {
  int n;
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++){
     scanf("%d",&arr[i]);
  }
  
  for(int i=1;i<n;i++){
    if(abs(arr[i]-arr[i-1])==1){
       printf("%d ",arr[i]);
    }
    else if(arr[i]>arr[i-1]){
      for(int j=arr[i-1];j<=arr[i];j++) printf("%d ",j);
    }
    else{
      for(int j=arr[i-1];j<=arr[i];j--) printf("%d ",j);
    }
  }
  return 0;
}

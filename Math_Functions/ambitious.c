#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int main(){
  int n;
  scanf("%d",&n);
  int arr[n];
  int min=INT_MAX;
  for (int i = 0; i <n; i++){
    scanf("%d",&arr[i]);
    if(abs(arr[i])<min) min=abs(arr[i]);  
  }
  printf("%d",min);
  return 0;   
}
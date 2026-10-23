#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

bool monsterWin(int arr[],int h,int n){
    int sum=0;
    for (int i = 0; i < n; i++){
      sum+=arr[i];
    }
    if(sum>=h) return true;
    else return false;
}

int main(){
  int h,n;
  scanf("%d%d",&h,&n);
  int arr[n];
  for (int i = 0; i < n; i++){
    scanf("%d",&arr[i]);
  }
  
  bool ans=monsterWin(arr,h,n);
  if(ans) 
  printf("Yes\n");
  else printf("No\n");
  return 0;
}

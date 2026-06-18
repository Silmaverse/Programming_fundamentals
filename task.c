#include <stdio.h>
#include <string.h>

int main(){
  int n,x;
  scanf("%d%d",&n,&x);
  int arr[n]; 
  for(int i=0;i<n-1;i++) scanf("%d",&arr[i]);
  for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n-1;j++){
      if(arr[i]>arr[j]){
        int temp=arr[j];
        arr[j]=arr[i];
        arr[i]=temp;
      }
    }
  }
  int sum=0;
  for(int i=1;i<n-2;i++){
    sum+=arr[i];
  }
  int minscore=x-sum;
  if(minscore<0) printf("%d",0);
  else if(minscore<=100) printf("%d",minscore);
  else printf("%d",-1);
  return 0;
}
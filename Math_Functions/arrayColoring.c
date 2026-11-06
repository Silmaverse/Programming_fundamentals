#include <stdio.h>
#include <stdbool.h>

bool arrayColor(int arr[],int n){
  int sum=0;
  for (int i = 0;i<n; i++){
    sum+=arr[i];
  }
  if(sum%2==0) return 1;
  return 0;

}

int main(){
  int t;
  scanf("%d",&t);
  while (t--){

      
      int n;
      scanf("%d",&n);
      int arr[n];
      for (int i = 0; i <n; i++){
          scanf("%d",&arr[i]);
        } 
        bool ans=arrayColor(arr,n);
        if(ans) printf("yES\n");
        else printf("No\n");
    }

  return 0;  
}
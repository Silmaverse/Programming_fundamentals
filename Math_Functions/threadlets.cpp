#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
  int t;
  scanf("%d",&t);
  while (t--){

    int arr[3];
    for (int i = 0; i <3;i++){
      scanf("%d",&arr[i]);
    }
    sort(arr,arr+3);
    if(arr[1]%arr[0]==0 && arr[2]%arr[0]==0 &&(arr[1]/arr[0]-1)+(arr[2]/arr[0]-1)<=3) printf("yes\n");
    else{
      printf("no\n");
    }
  }
  return 0;  
}
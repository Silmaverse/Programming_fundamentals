#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int maxProduct(int arr[],int n){

    int minval=*min_element(arr,arr+n);
    minval++;
    int minindex=distance(arr,min_element(arr,arr+n));
    int product=1;
    arr[minindex]=minval;
    for(int i=0;i<n;i++){
       product*=arr[i];
    }
    return product;
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

    int ans=maxProduct(arr,n);
    printf("%d\n",ans);
  }
  
  return 0;
}
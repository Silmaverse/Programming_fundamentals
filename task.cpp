#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  scanf("%d",&t);
  while (t--){
    int n,k;
    scanf("%d%d",&n,&k);
    int arr[n],barr[n],id[n],ans[n];
    for (int i = 0; i < n; i++){
      scanf("%d",&arr[i]);
      id[i]=i;// Store original indices: 0, 1, 2, ..., n-1
    }
    for (int i = 0; i < n; i++){
      scanf("%d",&barr[i]);
    }
    sort(barr,barr+n);
    //sort index array 'id' based on the value in arr
    sort(id,id+n,[&](int i,int j){
       return arr[i]<arr[j];   
    });
    //id array give the index of arr's smallest element
    for (int i = 0; i < n; i++){
      ans[id[i]]=barr[i];
    }
    
    for(int i=0;i<n;i++){
      printf("%d ",ans[i]);  
    }
    printf("\n");
  }
  return 0;
}
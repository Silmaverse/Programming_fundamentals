#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  scanf("%d",&t);
  while (t--){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++){
      scanf("%d",&arr[i]);
    }
    int count=0;
    for (int i = 1; i < n; i++){
      if(arr[i-1]==0 && arr[i]!=0) count++; 
      if (arr[i]==0 && arr[i-1]!=0) count++;
    }
    if(count==0) printf("0\n");
    else if(count==1) printf("1\n");
    else printf("2\n"); 
  }
  return 0;
}
// 4
// 4
// 0 0 0 0
// 5
// 0 1 2 3 4
// 7
// 0 2 3 0 1 2 0
// 1
// 1000000000

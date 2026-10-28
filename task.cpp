  #include <bits/stdc++.h>
  #include <algorithm>
  using namespace std;

  int secondToSwap(int n,int arr[]){
    
    int mn=arr[0];
    int mx=arr[0];
    int min_index=0;
    int max_index=0;

    for (int i = 1; i < n; i++){
      if(arr[i]>mx){
        mx=arr[i];
        max_index=i;
      } 
    }

    for (int i = 1; i < n; i++){
      if(arr[i]<=mn){
        mn=arr[i];
        min_index=i;
      } 
    }

    int ans=max_index+(n-min_index-1);
    if(max_index>min_index) ans--;
    return ans;  
  }

  int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i <n; i++){
      scanf("%d",&arr[i]);
    }
    int ans=secondToSwap(n,arr);
    printf("%d",ans);
    return 0;
  }

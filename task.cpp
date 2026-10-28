  #include <bits/stdc++.h>
  using namespace std;

  void  minimumofHorseshoe(int n,int arr[]){
    sort(arr,arr+n);
    int count=0;
    for (int i = 1; i < n; i++){
      if(arr[i-1]==arr[i]) count++;
    }

    printf("%d",count);
  }

  int main(){
    int arr[4];
    for (int i = 0; i <4; i++){
      scanf("%d",&arr[i]);
    }
    minimumofHorseshoe(4,arr);
    return 0;
  }

#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  scanf("%d",&t);
  while (t--){

    int n;
    scanf("%d",&n);
    if(n%2==0){
      while (n>0){
        printf("1");
        n-=2;
      }
      printf("\n");
    }else{
      printf("7");
      n-=3;
      while (n>0){
        printf("1");
        n-=2;
      }
      printf("\n");
    }
  }
  return 0;
}
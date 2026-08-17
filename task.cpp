#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,m;
  scanf("%d%d",&n,&m);
  if(m){
    int remaining=n-m;
    int ans=min(m,remaining);
    printf("%d",ans);
  }else{
    printf("1\n"); 
  }

  return 0;
}
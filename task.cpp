#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  scanf("%d",&n);
  int ai[n],pi[n],ans=0,mn=101;
  for(int i = 0; i <n; i++){
    scanf("%d%d",&ai[i],&pi[i]);
    if(mn>pi[i]) mn=pi[i];
    ans+=ai[i]*mn;
  }
  printf("%d\n",ans);
  return 0;
}
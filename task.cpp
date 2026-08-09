#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  scanf("%d",&t);
  while (t--){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int n=5;
    while (n--){
     if(a<b && a<c){
       a++;
     }else if(b<c){
       b++;
     }else{
      c++;
     } 
    }
    printf("%d\n",a*b*c);
  }
  return 0;
}
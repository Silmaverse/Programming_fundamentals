#include <bits/stdc++.h>
#include<algorithm>
using namespace std;

int main(){
   int t;
   scanf("%d",&t);
   while (t--){
     int x[4],y[4];
     for (int i = 0; i <4; i++){
        scanf("%d%d",&x[i],&y[i]);
     }

    int max_val=*max_element(x,x+4);
    int min_val=*min_element(x,x+4);
    int l=max_val-min_val;
    int ans=l*l;
    printf("%d\n",ans);

   }
   

   return 0; 
}
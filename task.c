#include <stdio.h>
#include <math.h>

int main(){
   int t;
   scanf("%d",&t);
   while (t--){
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    int total=x*y;
    int passrate=total/2;
    if(z>passrate) printf("Yes\n");
    else printf("No\n");
   }  
   return 0;
}
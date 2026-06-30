#include <stdio.h>
#include <math.h>

int main(){
   int t;
   scanf("%d",&t);
   while (t--){
     int a1,a2,a3,b1,b2,b3;
     scanf("%d%d%d%d%d%d",&a1,&a2,&a3,&b1,&b2,&b3);
     int maxa1=0,maxa2=0,maxa3=0,maxb1=0,maxb2=0,maxb3=0;
     if(a1>=a2 && a1>=a3){ 
         maxa1=a1;
         if(a2>=a3) {
          maxa2=a2;
          maxa3=a3;
        }else{
          maxa2=a3;
          maxa3=a2;
        }
       }else if(a2>=a1 && a2>=a3){
         maxa1=a2;
         if(a1>=a3){ 
          maxa2=a1;
          maxa3=a3;
        }else{ 
          maxa2=a3;
          maxa3=a1;
        }
       }else{
         maxa1=a3;
         if(a1>=a2){
          maxa2=a1;
          maxa3=a2;
        } else{ 
          maxa2=a2;
          maxa3=a1;
        }
       }

    maxa1=maxa1*100+maxa2*10+maxa3;

    if(b1>=b2 && b1>=b3){ 
         maxb1=b1;
         if(b2>=b3){ 
          maxb2=b2;
          maxb3=b3;
        }else{
          maxb2=b3;
          maxb3=b2;
        }
       }else if(b2>=b1 && b2>=b3){
         maxb1=b2;
         if(b1>=b3){ 
          maxb2=b1;
          maxb3=b3;  
        }else{ 
          maxb2=b3;
          maxb3=b1;
        }
       }else{
         maxb1=b3;
         if(b1>=b2){ 
          maxb2=b1;
          maxb3=b2;
        }else{ 
         maxb2=b2;
         maxb3=b1;
        }
       }  
     
    maxb1=(maxb1*100)+(maxb2*10)+maxb3;
    if(maxa1>maxb1) printf("Alice\n");
    else if(maxb1>maxa1) printf("Bob\n");
    else{
      printf("Tie\n");
    }
   }
   return 0;
}
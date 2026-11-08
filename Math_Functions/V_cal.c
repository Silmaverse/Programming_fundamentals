#include <stdio.h>
#include <math.h>

int main(){
  float a,b;
  scanf("%f%f",&a,&b);
  float kcal=(a*b)/100.0;
  printf("%.6f\n",kcal);
  return 0;  
}
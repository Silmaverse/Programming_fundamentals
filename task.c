#include <stdio.h>
int main(){
     int weight ,height;
	scanf("%d%d",&weight,&height);
	if(weight>=60){
	   if(height<=130){
	       printf("Yes");
	   }else{
	     printf("No");    
	   } 
	   
	}else{
	    printf("No");
	}
}  



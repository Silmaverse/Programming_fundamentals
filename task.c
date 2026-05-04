#include <stdio.h>

int main(){
        
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i =0;i<n;i++) scanf("%d",&arr[i]);
    
    int f[n];
    for(int i =0;i<n;i++) f[i]=0;

    for (int i = 0; i < n ; i++) {
        f[arr[i]]++;
    }
    int mx=0;
    for(int i=1;i<n;i++){
        if(f[i]>mx){
           mx=f[i];
        }
    }
     
    printf("%d",n-mx);
    

 return 0;
}
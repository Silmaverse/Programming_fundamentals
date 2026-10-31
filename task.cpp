#include <bits/stdc++.h>
using namespace std;

int factorial(int n){
 int fact=1;
 for (int i = 2; i <=n; i++){
   fact*=i;
 }
  return fact;
}

int getPermutationIndex(int arr[],int n){
  int perm[n]={0};
  int index=1;
  for (int i = 0; i < n; i++){
    int small_count=0;
    for (int j = 1; j <arr[i]; j++){
      if(!perm[j]) small_count++;
    }
    
    index+=small_count*factorial(n-i-1);
    perm[arr[i]]=1;    
  }
  
  return index;
}

int main(){
 int n;
 scanf("%d",&n);
 int parr[n],qarr[n];
 for (int i = 0; i < n; i++){
   scanf("%d",&parr[i]);
 }
 for (int i = 0; i < n; i++){
   scanf("%d",&qarr[i]);
 }

 int a=getPermutationIndex(parr,n);
 int b=getPermutationIndex(qarr,n);
 int ans= abs(a-b);
 printf("%d\n",ans); 
 return 0; 
}
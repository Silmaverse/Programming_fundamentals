#include <bits/stdc++.h>
using namespace std;

int minimumNumber(int n,string s){
   bool hasdigit=false;
   bool haslower=false;
   bool hasUpper=false;
   bool hasspecial=false;
   
   string specialchars="!@#$%^&*()-+";
   int missitype=0;

   for(char c: s){
     if(isdigit(c)) hasdigit=true;
     else if(islower(c)) haslower=true;
     else if(isupper(c)) hasUpper=true;
     else if(specialchars.find(c)!=string::npos) hasspecial=true;
   }
   if(!hasdigit) missitype++;
   if(!haslower) missitype++;
   if(!hasUpper) missitype++;
   if(!hasspecial) missitype++;
   
   return max(missitype,6-n);
}


int main(){
 int n;
 cin>>n;
 string s;
 cin>>s;
 int value=minimumNumber(n,s);
 cout<<value;
 return 0;   
}
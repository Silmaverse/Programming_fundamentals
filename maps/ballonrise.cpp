#include <bits/stdc++.h>
using namespace std;

int main(){
 while (1)
 {
    /* code */
    
    int n;
    cin>>n;
    if(n==0) break;
    else{
        map<string ,int>ballon;
        while (n--)
        {
            string color;
            cin>>color;
            ballon[color]++;  
        }
        int max=0;
        string ans="";
        for(auto it:ballon){
            if(it.second>max){
                max=it.second; 
                ans=it.first;
            } 
        }
        cout<<ans<<'\n';
    }
  }
  return 0;
}
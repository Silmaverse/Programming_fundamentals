#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
  int n;
  cin>>n;
  vector<vector<int>> ans;
  for (int x = 0; x <=n; x++){
    for (int y= 0; y<=n; y++){
      for (int z=0; z<=n; z++){
        if(x+y+z<=n){
          ans.push_back({x,y,z});
        }
      }
    }
  }
  for (int i = 0; i <ans.size(); i++){
    cout<< ans[i][0] <<" "<<ans[i][1] << " " <<ans[i][2]<<"\n";
  }
  
   
  return 0;  
}
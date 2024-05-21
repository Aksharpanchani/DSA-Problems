#include <bits/stdc++.h>

using namespace std;

// Space optimised problem
int main() {

  vector<int> height{30,10,60,10,60,50};
  int n=height.size();
  int prev=0;
  int prev2=0;
  for(int i=1;i<n;i++){
      
      int j2 = INT_MAX;
      int j1= prev + abs(height[i]-height[i-1]);
      if(i>1)
        j2 = prev2 + abs(height[i]-height[i-2]);
    
      int curr=min(j1, j2);
      prev2=prev;
      prev=curr;
        
  }
  cout<<prev;
}
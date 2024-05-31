#include <bits/stdc++.h>

using namespace std;

int main() {
  int tests;
  cin >> tests;
  while(tests--) 
  {
    int nos_, mx;

    cin >> nos_ >> mx;
    if(nos_ == 0) 
    {
      if(mx == 0)
       {
        cout << 0 << endl;
        continue;
      }
      int bit = 1;
      while(mx>>bit)
      bit++;

      cout << (1<<bit)-1 << endl;
      continue;
    }
    int resu = 0;
    for(int i = 0; i < 32; i++) {
      
      if((nos_>>i)&1) 
      resu += (1<<i);

      else {
        int place = (nos_-((nos_>>i)<<i));
        
        if(mx >= (place+1))
         resu += (1<<i);

        else if(mx >= (1<<i)-place)
         resu += (1<<i);
      }
    }
    cout << resu << endl;
  }
}

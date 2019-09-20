#include <bits/stdc++.h>

using namespace std;

int main(void) {
  ios::sync_with_stdio(false);

  string currT, explT;

  cin >> currT >> explT;

  int s = int(currT[6])*10 + int(currT[7]);
  int m = int(currT[3])*10 + int(currT[4]);
  int h = int(currT[0])*10 + int(currT[1]);

  int es = int(explT[6])*10 + int(explT[7]);
  if(es < s){
    if(s != 0){
    s = 60 - s + es;
    m++;
    }
  } else {
    s = es - s;
  }
  
  int em = int(explT[3])*10 + int(explT[4]);
  if(em < m){
    if(m != 0){
    m = 60 - m + em;
    h++;
  }
  } else{
    m = em - m;
  }
  
  int eh = int(explT[0])*10 + int(explT[1]);
  if(eh < h){
    if(h != 0){
      h = 24 - h + eh;
    }
  } else {
    h = eh - h;
  }

  printf("%02d:%02d:%02d",h,m,s);
        
return 0;
}
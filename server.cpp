#include <bits/stdc++.h>

using namespace std;

int main(void) {
  ios::sync_with_stdio(false);

  int n,s;
  cin >> n >> s;

  int i=0;
  int x,c=0,t=0;
  while(i<n){
    cin >> x;
    if(t<= s){
      t += x;
      ++c;
    }
    ++i;
  }
  if(t>s){
    --c;
  }
  cout<<c;

return 0;
}
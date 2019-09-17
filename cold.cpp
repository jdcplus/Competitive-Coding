#include <bits/stdc++.h>

using namespace std;

int main(void) {
  ios::sync_with_stdio(false);

  int n, t;
  cin >> n;
  int i = 0, c = 0;

  while (i < n){
    cin >> t;
    if(t < 0)
      c++;
    ++i;
    }
  cout<<c;
  return 0;
}
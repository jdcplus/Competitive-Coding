#include <bits/stdc++.h>

using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n ;
  for(int i=0; i<n; ++i){
    string s;
    cin >> s;
    int len = s.length();
    int k = ceil(sqrt(len));

    vector<char> arr (k*k,'*');
  
    for(int i=0;i<s.length(); ++i){
      arr[i] = s[i];
    }

    for(int j=k-1; j>=0; --j){
      for(int i=arr.size()-j-1; i>=0; i-=k){
        if(arr[i] != '*')
          cout<<arr[i];
      }
    }
    cout<<"\n";

  }

return 0;
}
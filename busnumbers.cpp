#include <bits/stdc++.h>

using namespace std;

int main(void) {
  ios::sync_with_stdio(false);

  long long a, b;
  int n, t;
  cin >> n;
  vector<int> myV;
  while (n--){
    cin >> t;
    myV.push_back(t);
    }
  
  sort(myV.begin(), myV.end());
  int curr = 0, len = 0;
  int head = -1;
  int next = curr + 1;

  while(curr < myV.size()-1){
    next = curr + 1;
    if(myV[curr]+1 == myV[next]){
        len++;
        if(head == -1){
          head = curr;
        } 
        curr++;
        continue;
    } else if(myV[curr]+1 < myV[next]){

      if(head == -1){
        cout<<myV[curr]<<" ";
      } else{
        if(len == 1)
          cout<<myV[head]<<" "<<myV[curr]<<" ";
        else
          cout<<myV[head]<<"-"<<myV[curr]<<" ";
        head = -1;
        len = 0;
      }
      curr++;
    }
  }
  if(head != -1 && len > 1){
    cout<<myV[head]<<"-"<<myV[curr];
  } else if (head != -1 && len == 1){
    cout<<myV[head]<<" "<<myV[curr];
  } else{
    cout<<myV[curr];
  }
  return 0;
}
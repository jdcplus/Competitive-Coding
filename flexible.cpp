#include <bits/stdc++.h>

using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int w,p,t;

  vector<int> pt;
  set<int> r;

  cin >> w >> p;
  pt.push_back(0);
  for(int i=0;i<p; ++i){
    cin >> t;
    pt.push_back(t);
  }
  pt.push_back(w);

  for(int i=0;i<pt.size()-1;++i){
    for(int j=i+1;j<pt.size();++j){
      r.insert(abs(pt[i]-pt[j]));
    }
  }

  for(auto it=r.begin(); it!= r.end(); it++){
    cout<<*it<<" ";
  }

  return 0;
}
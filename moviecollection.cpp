#include <bits/stdc++.h>

#define deb(x) cout<<#x<<"->"<<x

using namespace std;

int main(void) {
  
  ios::sync_with_stdio(false);
  //cin.tie(NULL);
  //cout.tie(NULL);

  int t;
  cin >>t;

  while(t--){

    int m,r;
    cin >>m >>r;
    vector<int> req;
    int temp;
    while(r--){
      cin>>temp;
      req.push_back(temp);
    }
    deque<int> myQ;
    for(int i=m;i>0; i--){
      myQ.push_back(i);
    }

    /*
    cout<<"vector"<<"\n";
    for(int i=0;i<m;++i){
      cout<<myQ[i]<<" ";
    }
    cout<<"\n";
    */
    for(int i=0;i<req.size(); ++i){

      deque<int>::iterator it = find(myQ.begin(), myQ.end(), req[i]);
      if(it != myQ.end()){
        
        int c = myQ.end() - it;
        if(c != 0)
          --c;
        
        myQ.erase(it);
        myQ.push_back(req[i]);
        cout<<c<<" ";
      }
    }
    cout<<"\n";
  }

  return 0;
}
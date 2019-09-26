#include <bits/stdc++.h>

#define deb(x) cout <<#x <<" "<<x<<"\n"
#define deb2(x,y) cout <<#x <<" "<<#y <<" "<<x <<" "<<y<<"\n"
using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  string ins;
  vector<pair<int, int>> myV;
  int x=0,y=0;
  pair<int, int> t;
  t.first = x;
  t.second = y;
  myV.push_back(t);
  
  while(cin>>ins){
    if(ins.compare("down") == 0){
      --y;
    } else if(ins.compare("right") == 0){
      ++x;
    } else if(ins.compare("up") == 0){
      ++y;
    } else if(ins.compare("left") == 0){
      --x;
    }
    t.first = x;
    t.second = y;
    myV.push_back(t);
  }
  
  /*
  cout<<"output\n";
  for(int i=0;i<myV.size(); ++i){
    cout<<myV[i].first << myV[i].second <<"\n";
  }
  cout<<"end\n";
  */

  // finding the max left and right up and down
  int min_x = INFINITY, min_y = INFINITY;
  int max_x = -INFINITY, max_y = -INFINITY;

  for(auto it=myV.begin(); it!= myV.end(); ++it){
    if(min_x > it->first){
      min_x = it->first;
    }
    if(min_y > it->second){
      min_y = it->second;
    }
    if(max_x < it->first){
      max_x = it->first;
    }
    if(max_y < it->second){
      max_y = it->second;
    }
    
  }

  /*
  deb(min_x);
  deb(min_y);
  deb(max_x);
  deb(max_y);
  */
  int tempc = abs(min_x - max_x)+1;
  int tempr = abs(min_y - max_y)+1;

  int idx_x = min_x,
      idx_y = max_y;

  /*
  cout<<"total cols :"<<tempc<<"\n";
  cout<<"total rows :"<<tempr<<"\n";
  */

  set<pair<int ,int>> points (myV.begin(), myV.end());
  
  for(int i=0;i<tempc+2;++i){
    cout<<"#";
  }
  cout<<"\n";
  for(int row = max_y; row>= min_y; --row){
    cout<<"#";
    for(int col = min_x; col<=max_x; ++col){
      char prt = ' ';
      pair<int, int> temp = {col, row};
      //deb2(row,col);
      if(col == 0 && row == 0){
        cout<<"S";
        continue;
      }
      if(points.find(temp) != points.end() && ((t.first == temp.first) && (t.second == temp.second)) ){
        prt = 'E';
      } else if(points.find(temp) != points.end()){
        prt = '*';
      }
      cout<<prt;
    }
    cout<<"#\n";
  }
  for(int i=0;i<tempc+2;++i){
    cout<<"#";
  }
  cout<<"\n";
  
  return 0;
}
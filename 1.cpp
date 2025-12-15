#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <deque>
#include <stack>
#include <algorithm>
#include <utility>
using namespace std;

int main() 
{
  int n, l ,r;
  cin>>n>>l>>r;
  
  vector<int> v;
  
  for(int i=0; i<n; i++){
    int x;
    cin>>x;
    v.push_back(x);
  }
  
  reverse(v.begin()+l-1, v.begin()+r);
  
  for(int i: v){
    cout<<i<<" ";
  }
}

// Askar 7
// Dana 3

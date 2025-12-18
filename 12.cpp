#include <iostream>
#include <vector>
#include <sstream>
#include <map>
#include <vector>
#include <algorithm>
#include <deque>
#include <set>
using namespace std;




int main() 
{
  int n;
  cin>>n;
  int a[100];
  int max = -21432;
  int count=0;
  
  for(int i=0; i<n; i++){
    int x;
    count=0;
    cin>>x;
    for(int i=0; i<x; i++){
      a[i] = x;
    }
    if(max<x) max = x;
  }
  
  set<int> s;
  
  for(int i=0; i<max; i++){
    s.insert(a[i]);
  }
  
  
  cout<<s.size();
}




#include <iostream>
#include <vector>
#include <sstream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;




int main() 
{
  int n;
  cin>>n;
  bool finded;
  
  vector<int> v;
  
  for(int i=0; i<n; i++){
    int x;
    cin>>x;
    v.push_back(x);
  }
  
  
  int k=0;
  cin>>k;
  
  for(int i: v){
    if(i==k) finded = true;
  }
  
  if(finded) cout<<"YES";
  else cout<<"NO";
}

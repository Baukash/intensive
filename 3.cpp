#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <map>
#include <cctype>
#include <utility>
#include <set>
#include <algorithm>
#include <iomanip>
using namespace std;


int main(){
  int n;
  
  
  map<int, int> m;
  
  for(int i=1; i<=9; i++){
    m[i] = 0;
  }
  while(cin>>n){
    if(n==0) break;
    else{
      m[n]++;
    }
  }
  
  for(auto i: m){
    cout<<i.second<<" ";
  }
}

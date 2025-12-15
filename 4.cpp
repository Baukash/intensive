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
  cin>>n;
  
  for(int i=100; i<=999; i++){
    int a = i/100;
    int b = (i%100)/10;
    int c = i%10;
    
    if(a+b+c==3) cout<<i<<endl;
  }
}

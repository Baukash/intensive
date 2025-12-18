#include <iostream>
#include <vector>
#include <sstream>
#include <map>
using namespace std;

int main() 
{
    map<char, int> m;
    
    string s;
    cin>>s;
    
    for(char i: s){
      m[i]++;
    }
    
    for(auto i: m){
      cout<<i.first<<" "<<i.second<<endl;
    }
}

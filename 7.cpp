#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int main() 
{
    vector<int> v1;
    vector<int> v2;
    
    
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    

    stringstream ss1(s1);
    int num;
    while(ss1>>num){
      v1.push_back(num);
    }
    
    stringstream ss2(s2);
    while(ss2>>num){
      v2.push_back(num);
    }

    for(int i: v1){
      cout<<i<<" ";
    }
    cout<<endl;
    for(int i: v2){
      cout<<i<<" ";
    }
    
}

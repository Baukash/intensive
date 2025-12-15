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

bool comp(pair<pair<string, string>, float> a, pair<pair<string, string>, float> b){
  if(a.second%2==1 && b.second%2==0) return false;
  return a.second<b.second;
}



int main(){
    vector<pair<pair<string, string>, float>> v;
    
    int n;
    cin>>n;
    
    for(int i=0; i<n; i++){
      string firstname, secondname;
      cin>>firstname>>secondname;
      pair<string, string> p1 = {firstname, secondname};
      
      int x;
      cin>>x;
      
      float fMark=0;
      float totalCredit = 0;
      
      for(int j=0; j<x; j++){
        string mark;
        cin>>mark;
        int credit;
        cin>>credit;
        totalCredit+=credit;
        if(mark=="A+") {
          fMark+=4.00*credit;
        }
        else if(mark=="A") {
          fMark+=3.75*credit;
        }
        else if(mark=="B+") {
          fMark+=3.50*credit;
        }
        else if(mark=="B") {
          fMark+=3.00*credit;
        }
        else if(mark=="C+") {
          fMark+=2.50*credit;
        }
        else if(mark=="C") {
          fMark+=2.00*credit;
        }
        else if(mark=="D+") {
          fMark+=1.50*credit;
        }
        else if(mark=="D") {
          fMark+=1.00*credit;
        }
        else if(mark=="F") {
          fMark+=0;
        }
        
      }
      pair<pair<string, string>, float> p3 = {p1, fMark/totalCredit};
      v.push_back(p3);
      
    }
    sort(v.begin(), v.end(), comp);
    cout<<setprecision(4);
    
    for(auto i: v){
        cout<<i.first.first <<" "<< i.first.second<<" "<<i.second<<endl;
    }
}

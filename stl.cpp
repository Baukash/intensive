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
  vector<int> v;
  v.push_back(2);
  

  sort(v.begin(), v.end());
  
  set<int> s;
  s.insert(2);
  s.insert(2);
  s.insert(1);
  
  /*int n;
  cin>>n;
  
  map<string, int> m;
  
  for(int i=0; i<n; i++){
    string name;
    int sleep;
    cin>>name>>sleep;
    
    m[name]+= sleep;
  }
  for(auto i: m){
    cout<<i.first<< " "<<i.second<<endl;
  }
  
  pair<int, int> p = {3, 2};
  cout<<p.second;*/
  
  stack<int> st;
  
  st.push(3); //3 6  Last in First Out 
  st.push(6);
  st.push(5);
  st.push(7);
  st.push(8);
  

  
  /*while(!st.empty()){
    cout<<st.top()<<" ";
    st.pop();
  }*/
  
  
 /* queue<int> q;
  q.push(3); //3 6 5 7 8 First in First Out 
  q.push(6);
  q.push(5);
  q.push(7);
  q.push(8);
  while(!q.empty()){
    cout<<q.front()<<" ";
    q.pop();
  }*/
  
  deque<int> dq;
  
  dq.push_back(3); //5 3
  dq.push_front(5);
  cout<<dq.front()<<" "<<dq.back()<<endl;
  
  cout<<dq[0];
  
  
  
  
  
  
}

// Askar 7
// Dana 3

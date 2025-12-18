#include <iostream>
#include <vector>
#include <sstream>
#include <map>
using namespace std;

int main() 
{
  int n;
  cin>>n;
  char a[n][n];
  
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      cin>>a[i][j];
    }
  }
  
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      cout<<int(a[i][j])<<" ";
    }
    cout<<endl;
  }
}

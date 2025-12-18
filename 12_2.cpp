#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    int mx = 0, cnt = 0;

    for(int i = n - 1; i >= 0; i--){
        if(a[i] > mx){
            cnt++;
            mx = a[i];
        }
    }

    cout << cnt;
}

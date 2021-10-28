#include <iostream>
#include <math.h>
using namespace std;
void solve(){
    long long x,y;
    cin>>x>>y;
    long long cnt = x - y;
    if(cnt <= 1)
        cout<<"NO";
    else
        cout<<"YES";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}

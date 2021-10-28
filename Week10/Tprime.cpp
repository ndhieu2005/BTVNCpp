#include <iostream>
#include <math.h>
using namespace std;
const int N=10e6+5;
bool isPrime[N];
void seive(){
    for(int i = 2; i <= N ;i++){
        isPrime[i] = true;
    }
    for(int i=2;i*i <= N;i++){
        if(isPrime[i] == true){
            for(int j=i*i;j<=N;j+=i)
                isPrime[j]=false;
        }
    }
}
void solve(){
    long long x;
    cin >> x;
    long long y = sqrt(x);
    if(y != sqrt(x))
        cout<<"NO";
    else
        if(isPrime[y] == true)
            cout<<"YES";else cout<<"NO";
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    seive();
    while(t--){
        solve();
    }
    return 0;
}

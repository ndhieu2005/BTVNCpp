#include <iostream>
#include <stdio.h>
using namespace std;
void seive(int &n){
    bool isPrime[n+1];
    for(int i =2 ; i <= n;i++)
        isPrime[i] = true;
    for(int i=2;i<=n;i++)
        if(isPrime[i] == true)
            cout<<i<<" ";
    cout<<endl;
    for(int i = 2;i*i <= n;i++){
        if(isPrime[i] == true ){
            for(int j = i * i; j <= n;j += i ){
                isPrime[j] = false;
            }
        }
    }
    for(int i=2;i<=n;i++)
        if(isPrime[i] == true)
            cout<<i<<" ";
}
int main(){
    int n;
    cin >> n;
    seive(n);
    return 0;
}

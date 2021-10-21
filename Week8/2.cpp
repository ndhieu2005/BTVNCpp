#include <iostream>
#include <stdio.h>
using namespace std;
int Prime[100000];
void solve(){
    int n;
    cin>>n;
    for(int i =2;i*i<= n;i++){
        if(Prime[i]==0){
            for(int j=i*i;j<=n;j+=i)
                if(Prime[j]==0)
                    Prime[j] = i;
        }
    }
    for(int i=2;i<=n;i++)
        if(Prime[i]==0)
            Prime[i]=i;
    while(n!=1){
        int snt=Prime[n];
        n/=snt;
        cout<<snt<<" ";
    }
}

int main(){
    solve();
}

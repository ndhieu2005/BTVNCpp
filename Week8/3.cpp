#include <iostream>
using namespace std;
void solve(){
    int n;
    cin >> n;
    int count = 0;
    for(int i = 1;i<= n;i++){
        if(n%i==0)
            count++;
    }
    if(count == 3)
        cout<<"Yes";
    else
        cout<<"No";
    cout<<endl;
}
int main(){
    int T;
    cin >> T;
    while(T--){
        solve();
    }
    return 0;
    
}

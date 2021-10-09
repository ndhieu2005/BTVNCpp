#include <iostream>
#include <vector>
using namespace std;
vector <int> ::iterator it;

void Enter(vector <int> &v,int &n){
    cout<<"Nhập số miếng sushi:";
    cin>>n;
    int t;
    for(int i=0;i<n;i++){
        cin>>t;
        v.push_back(t);
    }
    for(int i=0;i<n;i++){
        cout<<v[i];
    }
    cout<<endl;
}
int main(){
    vector<int> v,e,temp;
    int n;
    Enter(v, n);
    //Đếm phần tử liên tiếp
    for(int i =0;i<n;i++){
        int c=0;
        if (v[i] == v[i+1]){
            c=c+1;
        }
        if (v[i] != v[i+1]){
            e.push_back(c);
            c=0;
        }
    }
    /*for(int i=0;i<e.size();i++){
        cout<<e[i];
    }*/
    cout<<endl;
    //In ra kết quả x2
    for(int i=1;i<e.size();i++){
        if(e[i] >= e[i-1])
            temp.push_back(2*e[i]);
    }
        sort(temp.begin(),temp.end());
    cout<<temp.back();
    return 0;
    
}

 //https://codeforces.com/contest/1138/problem/A

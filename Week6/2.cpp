#include <iostream>
#include <set>
using namespace std;
struct cmp{
    bool operator() (int a,int b){
        return a>b;
    }
};

int main(){
    set <int> s;
    set <int> ::iterator it;
    set <int> ::reverse_iterator rit;
    s.insert(9);
    s.insert(4);
    s.insert(9);//Khong nhan phan tu trung lap
    for(it = s.begin();it != s.end();it++)
        cout<<*it<<" ";
    cout <<endl;
    for(rit = s.rbegin() ;rit != s.rend(); rit++ )
        cout<<*rit<<" ";
    cout<<endl;
    //set co chieu giam dan`
    set <int,cmp> s2;
    s2.insert(9);
    s2.insert(3);
    for(it = s2.begin();it != s2.end();it++)
        cout<<*it<<" ";
    int k;
    cout<<"Nhap k: ";
    cin>>k;
    it = s.find(k);
    if(it == s.end())
        cout<<"No";
    else
        cout<<"Yes";
    
    return 0;
}

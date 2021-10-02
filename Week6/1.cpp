#include <iostream>
#include <map>
using namespace std;
/* struct cmp{
    bool operator() (char a,char b){
        return a<b;
    }
}; */
int main(){
    map <char,int> m;//Khởi tạo 1 map
    map <char,int> :: iterator it;//Khai bao iterator
    map <char,int> :: reverse_iterator rit;
    m['a'] = 1;                       // m = {{'a',1}}
    m.insert(make_pair('b', 2));      // m = {{'a',1};{'b',2}}
    m.insert(pair<char, int>('c',3) );// m = {{'a',1};{'b',2};{'c',3}}
    cout << m['a']<<endl;
    map <char,int> m2;
    m2['a'] =1;
    m2['b'] =2;
    m2['c'] =3;
    
    for ( it =m.begin();it != m.end();it++){
        cout << it->first<<":"<<it->second<<endl;
    }
    for (rit =m.rbegin();rit != m.rend();rit++){
        cout << rit->first<<":"<<rit->second<<endl;
    }
    //Nhap mang so nguyen
    int array[100];
    int n;
    cout <<"Nhap n:";
    cin >>n;
    for(int i=0;i<n;i++){
        cout<<"a["<<i<<"] :";
        cin>>array[i];
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        m[array[i]]++;
    }
    for ( it =m.begin();it != m.end();it++){
        cout << it->first<<":"<<it->second<<endl;
    }
    char k;
    cout<<"Nhap k:";
    cin>>k;
    for ( it =m.begin();it != m.end();it++){
        it = m.find(k);
        if(it == m.end())
            cout<<"No";
        else
            cout<<"Yes";
    }

    return 0;
}

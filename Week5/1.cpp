#include <iostream>
#include <vector>
using namespace std;
int main(){
    //Khai báo vector + iterator
    vector <int> :: iterator it;
    vector <int> :: reverse_iterator rit;
    vector <int> array ;
    for(int i = 0;i<5;i++)
        array.push_back(i);
    vector <int> u(array.begin(),array.end());
    //Duyệt theo index
    for(int i =0;i<array.size();i++)
        cout<<array[i]<<" ";
    cout<<endl;
    //Duyệt theo iterator xuôi
    for( it = array.begin();it != array.end();it++)
        cout << *it <<" ";
    cout<<endl;
    //Duyệt theo iterator ngược
    for( rit = array.rbegin();rit != array.rend();rit++)
        cout << *rit<<" ";
    return 0;
}

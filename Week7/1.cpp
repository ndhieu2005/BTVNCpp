#include <string.h>
#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    string str="";
    getline(cin,str);
    cout <<str<<endl;
    //Chuẩn hoá sâu
    //' ' khoảng trắng = 32
    for(int i = 1;i < str.size();i++){
        if(str[i] == str[i+1] && str[i]==32)
        {
            str[i] -= 32;
        }
    }
    cout<<str;
    //Đếm số từ
    int word=1;
    for(int i=0;i<str.size()-1;i++){
        if(str[i] == 32 && str[i+1] != 32)
            word++;
    }
    cout<<endl<<word<<endl;
    //Chuyển chuỗi thành số nguyên
    //atoi là một hàm thuộc thư viện cstdlib. Hàm này giúp chuyển đổi một chuỗi về số nguyên trong C++.
    int val;
    char s[18];
    cin>>s;
    val = atoi(s);
    cout<<endl<<val<<endl;
    //Kiểm tra chuỗi đối xứng
    string s2="";
    cin>>s2;
    for(int i=0;i<s2.size();i++){
        if(s2[i] != s2[s2.size()-i-1]){
            cout<<"No";break;
        }
        else{
            cout<<"Yes";break;
        }
    }
    cout<<endl;
    //Chuyển chữ hoa thành chữ thường
    string s3="";
    cin>>s3;
    for(int i=0;i<s3.size();i++){
        s3[i] = s3[i] - 32;
    }
    cout<<s3<<endl;
    return 0;
}

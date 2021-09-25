#include <iostream>
#include <vector>
using namespace std;

int main(){
    //Khởi tạo mảng A
    vector < vector<int> >Array1(10);
    for(int i=0;i<3;i++)
        for(int j = 0; j<3;j++)
            Array1[i].push_back(j);
    cout<<"Mảng A là: ";
    for(int i=0;i<3;i++){
        for(int j =0;j<3;j++){
            cout << Array1[i][j] <<" ";
        }
        cout<<endl;
    }
    //Khởi tạo mảng B
    vector < vector<int> >Array2(10);
    for(int i=0;i<3;i++)
        for(int j = 0; j<3;j++)
            Array2[i].push_back(j);
    cout<<"Mảng B là: "<<endl;
    for(int i=0;i<3;i++){
        for(int j =0;j<3;j++){
            cout<< Array2[i][j]<<" " ;
        }
        cout<<endl;
    }
    //Tính tổng
    vector< vector<int> >Sum(10);
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            Sum[i][j] = Array1[i][j] + Array2[i][j];
    cout<<"Mảng C là: "<<endl;
    for(int i = 0;i<3;i++){
        for(int j =0;j<3;j++){
            cout<< Sum[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
    return 0;
}



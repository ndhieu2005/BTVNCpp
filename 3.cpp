#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void EnterArray(int a[][100],int r,int c){
    
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            a[i][j] = rand() % 100;
        }
    }
}
void PrintArray(int a[][100],int r,int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<< a[i][j] <<"\t";
        }
        cout<<endl;
    }
}
void DelRow(int a[][100],int &r,int c){
    int y;
    cout<<"Nhập hàng muốn xoá: ";
    cin>>y;
    for(int i=y;i<r-1;i++){
        for(int j=0;j<c;j++){//Dịch mảng
            a[i][j] = a[i+1][j];
        }
        r--;//Xoá 1 hàng
    }
    PrintArray(a, r, c);
}
void AddCol(int a[][100],int r,int &c){
    int y;
    cout<<"Nhập vị trí cột muốn thêm : ";
    cin>>y;
    if(y>=0 && y<c){
        for(int i=y;i<c;i++){
            for(int j=0;j<r;j++){//Dịch mảng lên để chèn
                a[j][i]=a[j][i+1];
            }
        }
        for(int i=0;i<r;i++){
            a[i][y] = rand() %100;//Chèn mảng ngẫu nhiên
        }
        c++;//Tăng cột
    }
    PrintArray(a, r, c);
}
void DelCol(int a[][100],int &r,int &c){
    int y;
    cout<<"Nhập cột muốn xoá: ";
    cin>>y;
    for(int i=y;i<c-1;i++){
        for(int j=0;j<r;j++){
            a[i][j] = a[i+1][j];
        }
        c--;
    }
    PrintArray(a, r, c);
}
void AddRow(int a[][100],int &r,int &c){
    int y;
    cout<<"Nhập vị trí hàng muốn thêm : ";
    cin>>y;
    if(y>=0 && y<r){
        for(int i=y;i<r;i++){
            for(int j=0;j<c;j++){//Dịch mảng lên để chèn
                a[i][j]=a[i+1][j];
            }
        }
        for(int i=0;i<c;i++){
            a[y][i] = rand() %100;//Chèn mảng ngẫu nhiên
        }
        r++;//Tăng hàng
    }
    PrintArray(a, r, c);
}
void ConvertCol(int a[][100],int r,int c,int c1,int c2){
    cout<<"Nhập cột muốn hoán đổi: ";
    cin>>c1>>" ";
    cin>>c2;
    if((c1>=0 && c1<c) && ( c2>=0 && c2<c )){
        for(int i=0;i<r;i++)
            swap(a[i][c1], a[i][c2]);
    }
    PrintArray(a, r, c);
}
void ConvertRow(int a[][100],int r,int c,int r1,int r2){
    cout<<"Nhập hàng muốn hoán đổi: ";
    cin>>r1>>" ";
    cin>>r2;
    if((r1>=0 && r1<r) && (r2>=0)){
        for(int i=0;i<c;i++)
            swap(a[r1][i],a[r2][i]);
    }
    PrintArray(a, r, c);
}
int main(){
    int arr[100][100];
    int r,c;
    srand(time(NULL));
    cout<<"Nhập số hàng: ";
    cin>>r;
    cout<<"Nhập số cột: ";
    cin>>c;
    EnterArray(arr, r, c);
    PrintArray(arr, r, c);
    DelRow(arr, r, c);
    AddCol(arr, r, c);
    AddRow(arr, r, c);
    DelCol(arr, r, c);
    int c1,c2,r1,r2;
    ConvertCol(arr,r,c,c1,c2);
    ConvertRow(arr,r,c,r1,r2);
    return 0;
}

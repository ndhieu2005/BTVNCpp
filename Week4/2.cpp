#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void Array(int a[][100],int row,int col){
    // nhập mảng 2 chiều
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            a[i][j] = rand() %100;
        }
    }
}
void Print(int a[][100],int row,int col){
    // xuất mảng 2 chiều
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
}
void SumArray(int a[][100],int row,int col){
    int temp[1][row];
    int sum=0;

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            sum = sum + a[i][j];
        }
        temp[0][i] = sum;
    }
    for(int n=0;n<row;n++){
        cout<<temp[0][n]<<" ";
    }
}
void sort(int a[][100],int row,int col)
    {
    for(int k = 0; k<row ; k++)
        for(int i = 0 ; i<col-1;i++)
        for(int j = col-1; j>i ; j--)
        if(a[k][j]<a[k][j-1])
        {
           int temp = a[k][j];
           a[k][j] = a[k][j-1];
           a[k][j-1] = temp;
        }
    }
void TheBorder(int a[][100],int row,int col){
    for(int i=0;i<row;i++){
        cout<<a[i][0]<<" ";
        cout<<a[i][col-1]<<" ";
    }
    for(int j=1;j<col-1;j++){
        cout<<a[0][j]<<" ";
        cout<<a[row-1][j]<<" ";
    }
}
void Diagonal(int a[][100],int row,int col){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(i==j){
                cout<<a[i][j]<<" ";
            }
        }
    }
}
int main()
{
    // khởi tạo mảng 2 dòng 3 cột
    int arr[100][100];
    int row, col;
    // khởi tạo số ngẫu nhiên
    srand(time(NULL));
    // nhập số dòng, cột
    cout << "Nhập số dòng: ";
    cin >> row;
    cout << "Nhập số cột: ";
    cin >> col;
    Array(arr, row, col);
    Print(arr,row,col);
    cout<<"Tổng của các hàng là: ";
    SumArray(arr, row, col);
    sort(arr, row, col);
    cout<<endl<<"Mảng sau khi sắp xếp: "<<endl;
    Print(arr, row, col);
    cout<<endl<<"Các phần tử ở biên là: ";
    TheBorder(arr, row, col);
    cout<<endl<<"Các phần tử nằm ở đường chéo là: ";
    Diagonal(arr, row, col);
    return 0;
}


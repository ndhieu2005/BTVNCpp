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


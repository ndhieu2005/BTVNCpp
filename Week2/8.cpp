#include<iostream>
using namespace std;
void Nhapmang(int a[],int n){
    for(int i = 0; i<n ; i++){
        cout << "nhập phần tử a["<<i<<"] :";
        cin>>a[i];
    }
}
void Xuatmang(int a[],int n){
    for(int i = 0; i<n;i++){
        cout<<a[i]<<" ";
    }
}
void reverse(int a[],int n){
    for(int i=0;i<n;i++){
        for(int j=n-1;j>=0;j--){
            swap(a[i], a[j]);
        }
    }
}
void reverse2(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=n-1; j>i; j--)
            swap(a[j], a[j-1]);
    }
}
int main(){
    int arr[100];
    int n;
    cout<<"nhập số phần tử của mảng: ";
    cin>>n;
    Nhapmang(arr, n);
    Xuatmang(arr, n);
    cout<<endl<<"Mảng sau khi đảo: ";
    reverse(arr, n);
    Xuatmang(arr, n);
    cout<<endl<<"Mảng đổi ngược vị trí:";
    reverse2(arr,n);
    Xuatmang(arr, n);
}

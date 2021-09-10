
#include <iostream>
using namespace std;

void nhapmang(int arr[],int &n){
    for(int i=0;i<n;i++){
        cout << "enter a elem a["<<i<<"]:";
        cin >> arr[i];
    }
}
void del_elem(int arr[],int &n,int x){
    for(int i=0;i<n;i++){
        if(arr[i] == x){
            for(int j=i ; j<n-1 ; j++){
                arr[j]=arr[j+1];
            }
            n=n-1;
            i=i-1;
        }
    }
}
void xuatmang(int arr[],int&n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[1000];
    int n;
    cout<<"enter n:";
    cin>>n;
    nhapmang(arr, n);
    xuatmang(arr, n);
    int x;
    cout<<endl<<"Nhập phần tử muốn xoá: ";
    cin>>x;
    del_elem(arr, n, x);
    xuatmang(arr, n);
}

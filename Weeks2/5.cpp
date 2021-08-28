
#include <iostream>
  
using namespace std;
void nhapmang(int arr[],int &n){
    for(int i=0;i<n;i++){
        cout << "enter a elem a["<<i<<"]:";
        cin >> arr[i];
    }
}
void addelem(int arr[],int&n,int pos,int y){
    
    if(pos>=0 && pos < n){
            for(int i=n ;i >= pos;i--){
                arr[i]=arr[i-1];
                arr[pos]=y;
            }
            n=n+1;
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
    cout<<"enter n: ";
    cin>>n;
    nhapmang(arr, n);
    int pos;
    int y;
    cout<<"Nhập vị trí muốn thêm vào:";
    cin>> pos;
    cout<<"Nhập số muốn thêm vào:";
    cin>> y;
    addelem(arr, n, pos, y);
    cout<<"Mảng sau khi thêm:";
    xuatmang(arr, n);
    
}

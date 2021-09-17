#include<iostream>
using namespace std;
void findmax(int arr[],int n,int k){
    int sum =0;
    for(int i=0;i<k;i++){
        sum = sum + arr[i];
    }
    int temp=sum;
    for(int i=0;i<n-k;i++){
        sum = sum - arr[i] + arr[i+k];
        //Xoá số đầu tiên của dãy con rồi thêm phần tử sau đó để so sánh
        if(temp<sum)
            temp=sum;
    }
    cout<<"Tổng lớn nhất của dãy có có độ dài bằng"<<k<<"là"<<temp;
}
void Nhapmang(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<"Nhập phần tử a["<<arr[i]<<"]";
        cin>>arr[i];
    }
}
void Xuatmang(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[100];
    int n;
    int k;
    cout<<"Nhập số phần tử của mảng: ";
    cin>>n;
    Nhapmang(arr, n);
    Xuatmang(arr, n);
    cout<<"Nhập một số bất kì: ";
    cin>>k;
    findmax(arr, n, k);
    return 0;
}

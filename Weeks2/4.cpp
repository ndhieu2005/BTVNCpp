#include <iostream>
  
using namespace std;
void nhapmang(int arr[],int &n){
    for(int i=0;i<n;i++){
        cout << "enter a elem a["<<i<<"]:";
        cin >> arr[i];
    }
}
void insert1(int arr[],int &n){
    for(int i=1;i<n/2;i++){
        int key=arr[i];
        int j = i -1;
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
    }
}
void insert2(int arr[],int &n){
    for(int i=n/2;i<n;i++){
        int key=arr[i];
        int j = i-1;
        while(j>=n/2 && arr[j]<key){
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
    }
}
void xuatmang(int arr[],int&n){
    cout<<"Mảng đã được sắp xếp:";
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
    insert1(arr, n);
    insert2(arr,n);
    xuatmang(arr, n);
}

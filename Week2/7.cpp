#include<iostream>
using namespace std;
void Nhapmang(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<"enter a elem a["<<i<<"] : ";
        cin>>a[i];
    }
}
void Xuatmang(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
void insertsort(int a[],int n){
    for(int i=0;i<n;i++){
        int key=a[i];
        int j = i-1;
        while(i>=0 && a[j]>key){
            a[j+1] = a[j];
            j = j-1;
        }
        a[j+1] = key;
    }
    Xuatmang(a, n);
}
void addelem(int arr[],int&n,int pos,int y){
    
    if(pos>=0 && pos < n){
            for(int i=n ;i >= pos;i--){
                arr[i]=arr[i-1];
                arr[pos]=y;
            }
            n++;
        }
}

int main(){
    int a1[100];
    int a2[100];
    int n1;
    int n2;
    cout<<"enter n1: ";
    cin>>n1;
    Nhapmang(a1, n1);
    Xuatmang(a1, n1);
    cout<<endl<<"enter n2: ";
    cin>>n2;
    Nhapmang(a2, n2);
    Xuatmang(a2, n2);
    cout<<endl<<"Mảng sau khi sắp xếp: ";
    insertsort(a1, n1);
    insertsort(a2, n2);
    int pos1;
    int y1;
    int pos2;
    int y2;
    cout<<"Nhập vị trí muốn chèn mảng 1 : ";
    cin>>pos1;
    cout<<"Nhập giá trị muốn chèn mảng 1: ";
    cin>>y1;
    addelem(a1, n1, pos1, y1);
    Xuatmang(a1, n1);
    cout<<"Nhập vị trí muốn chèn mảng 2: ";
    cin>>pos2;
    cout<<"Nhập giá trị muốn chèn mảng 2: ";
    cin>>y2;
    Xuatmang(a2, n2);
}

#include <iostream>
using namespace std;
//tạo hàm nhập và xuất cho mảng
void Nhapmang(int a[],int &n){
    cout<<"Nhập số phần tử của mảng: ";
    cin >> n;
    cout<<"Nhập phần tử cho mảng"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
}
void Xuatmang(int a[], int &n){
    cout<<"Mảng đã tạo: ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<"-";
    }
}
//thao tác sắp xếp mảng-sắp xếp chèn-
void insertsort(int a[],int &n){
    int i,tmp,j;
    for(i=1; i<n; i++){
        tmp = a[i];
        j = i-1;
        while(j>=0 && a[j]>tmp ){
            a[j+1] = a[j];
            j = j-1;
        }
        a[j] = tmp;
    }
}
//thao tác tìm kiếm phần tử
void finding(int a[], int &n, int x){
    for(int i=0;i<n;i++){
        if(x==a[i]){
            cout<<a[i];
        }
        else{
            cout<<"Không có số bạn muốn tìm";
        }
    }
}
//thao tác xoá 1 phần tử của mảng
void del(int a[], int &n, int pos){
    //đk pos
    if(pos>=0 && pos<n)
        //dịch mảng
    for(int i = pos; i < n - 1; i++){
        a[i+1] = a[i];
    }
    n=n-1;
}
//thao tác thêm 1 phần tử vào mảng
void add_(int a[], int &n,int pos,int y){
    if(pos>=0 && pos <n){
        for(int i=n;i<pos;i--){
            a[i]=a[i-1];
            a[pos]=y;
        }
        n=n+1;
    }
}
void fix(int a[],int &n,int l,int r){
    if(0<=l && r<n){
        cout<<"Nhập phần tử mới "<<endl;
        for(int i=l;i<=r;i++){
            cin>>a[i];
        }
    }
}
int main(){
    int a[1000];
    int n;
    Nhapmang(a,n);
    Xuatmang(a,n);
    int x;
    cout<<"Nhập phần tử muốn tìm: ";
    cin>>x;
    insertsort(a, n);
    finding(a, n, x);
    int pos;
    cout<<"Nhập vị trí muốn xoá: ";
    cin>>pos;
    del(a, n, pos);
    cout<<"Nhập vị trí muốn thêm: ";
    cin>>pos;
    int y;
    cout<<"Nhập số muốn thêm: ";
    cin>>y;
    add_(a, n, pos, y);
    cout<<"Nhập đoạn muốn sửa: "<<endl;
    int left;
    int right;
    cin>>left>>right;
    fix(a, n, left, right);
    Xuatmang(a, n);
    
    return 0;
    
}


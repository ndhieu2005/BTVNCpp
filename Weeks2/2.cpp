#include <iostream>
using namespace std;
const int Max_Size=100;

void nhapmang(int a[],int n){
    for(int i=0; i<n ;i++){
        cout << "enter a elem a["<<i<<"] :";
        cin >> a[i];
    }
}
void xuatmang(int a[],int n){
    for (int i=0; i<n;i++){
        cout<<a[i]<<" ";
    }
}
int SumOdd(int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
        {
            sum += a[i];
        }
    }
    return sum;
}
int SumEven(int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
        {
            continue;
        }
        sum += a[i];
    }
    return sum;
}
int Counteven(int a[],int n){
    int count = 0;
    for (int i=0 ; i<n ; i++){
        if(a[i] % 2 != 0){
            continue;
        }
        count++;
    }
    return count;
}
int Countodd(int a[],int n){
    int count = 0;
    for(int i =0; i<n;i++){
        if(a[i] % 2 != 0){
            count++;
        }
    }
    return count;
}
void check(int a[], int n){
    cout<<"\n Các phần tử chia hết cho "<<n<<" là: ";
    for(int i=0; i<n;i++){
        if(a[i] % n == 0)
            cout<<a[i]<<" ";
    }
}
void fix(int arr[], int &n, int l, int r){
    if(l>=0 && r<n){
        cout<<"Nhập phần tử mới"<<endl;
        for(int i=l; i<=r;i++){
            cin>>arr[i];
        }
        
    }

}
int main(){
    int arr[Max_Size];
    int n;
    cout << "enter n:";
    cin >> n;
    nhapmang(arr, n);
    cout<< "Mảng xuất: " <<endl;
    xuatmang(arr, n);
    cout<<endl<<"Tổng số chẵn: "<<SumEven(arr, n )<<endl;
    cout<<"Tổng số lẻ: " << SumOdd(arr, n)<<endl;
    cout<<endl<<"Có "<<Counteven(arr, n)<<" số chẵn"<<endl;
    cout<<"Có "<<Countodd(arr, n)<<" số lẻ"<<endl;
    check(arr, n);
    int left;
    int right;
    cout<<"Nhập đoạn muốn thay đổi: "<<endl;
    cin>>left>>right;
}
    

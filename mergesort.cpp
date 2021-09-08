#include <iostream>
using namespace std;

void merge(int arr[], int l,int m , int r){
    int n1 = m - l + 1;
    int n2 = r - m;
    //Tạo mảng tạm
    int L[n1] , R[n2];
    //Copy data tới L và R
    for(int i=0;i<n1;i++)
        L[i] = arr[l+i];
    for(int j=0;j<n2;j++)
        R[j] = arr[m+1+j];
    //Trộn mảng tạm thành mảng chính arr[l..r]
    int i = 0; // Biến mảng con
    int j = 0;//Biến mảng con
    int k = l;//Biển mảng con được trộn
    while( i < n1 && j<n2 ){
        if(L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    //Copy những phần tử còn lại của mảng L nếu còn
    while(i<n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void Mergesort(int arr[], int l,int r){
    if (l<r)
    {
        int m = l + (r-l)/2;//Tránh overflow (tràn) mảng
        Mergesort(arr,l,m);
        Mergesort(arr, m+1, r);
        merge(arr,l,m,r);
    }
}
void Xuatmang(int a[],int size){
    for(int i=0;i<size;i++){
        cout << a[i] << " ";
    }
}
int main(){
    int arr[] = { 12, 11, 13, 5, 6, 7 };
    int arr_size = sizeof(arr) /sizeof(arr[0]);
    cout << "Mảng được cho \n";
    Xuatmang(arr, arr_size);
    Mergesort(arr,0,arr_size -1);
    cout << "\n Mảng đã được sắp xếp : \n";
    Xuatmang(arr, arr_size);
    return 0;
}

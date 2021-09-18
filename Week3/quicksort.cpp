#include <iostream>
#include<stdio.h>
#include<time.h>
//Quicksort:chia để trị

using namespace std;
//Hàm chia mảng
int partition (int arr[],int low , int high){
    int pivot = arr[high]; // pivot của mảng
    int left = low;
    int right = high -1;
    while(true){
        while(left <= right && arr[left] < pivot)
            left++;
        while(right >= left && arr[right] > pivot)
            right--;
        if(left >= right)// Khi chỉ số l = r -> phá vòng lặp ( nghĩa là đã duyệt hết )
            break;
        swap(arr[left],arr[right]);
        left++;
        right--;
    }
    swap(arr[left],arr[high]);
    return left;
}
//Hàm giair thuật quicksort
void quicksort(int arr[],int low,int high){
    if(low < high){
        int pi = partition(arr, low, high);
        //pi là chỉ số nơi phần tử này đã đứng đúng vị trí và là phần tử chia mảng làm 2 mảng con trái và phải
        //Gọi đệ quy sắp xếp 2 mảng con trái và phải
        quicksort(arr, low, pi - 1);
        quicksort(arr, pi+1, high);
        
    }
}
void printArray(int arr[],int n){
    for(int i =0;i<n;i++)
        cout<<arr[i]<<" ";
}
int main(){
    int arr[] = {1,8,3,9,4,5,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    quicksort(arr, 0, n-1);
    cout<<"Mảng đã sắp xếp: "<<endl;
    printArray(arr, n);
    return 0;
}

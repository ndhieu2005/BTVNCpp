#include <iostream>
#include<algorithm>
#include <vector> 
using namespace std;

struct toado{
    int x;
    int y;
};
bool cmpx(const toado i,const toado j){
    return (i.x>j.x);
}
void sortx(vector<toado> point){
    sort(point.begin(), point.end(), cmpx);
}
bool cmpy(const toado i,const toado j){
    return (i.y>j.y);
}
void sorty(vector<toado> point){
    sort(point.begin(), point.end(), cmpy);
}
void EnterPoint(vector<toado> point){
    point.resize(5);
    for(int i=0;i<5;i++){
        cout<<"Nhập toạ độ cho điểm "<<i+1<<endl;
        cin>>point[i].x>>point[i].y;
    }
}
void PrintPoint(vector<toado> point){
    for(int i=0;i<5;i++)
        cout << "("<<point[i].x<<";"<<point[i].y<<")";cout<<endl;
  //Bị lỗi chỗ này, a fix giúp em với:))))))))
    //Thread 1: EXC_BAD_ACCESS (code=1, address=0x0)
}
int main(){
    vector<toado> point;
    EnterPoint(point);
    cout<<"Các điểm đã nhập là:";
    PrintPoint(point);
    sortx(point);
    cout<<"Sắp xếp theo toạ độ x: ";
    PrintPoint(point);
    sorty(point);
    cout<<"Sắp xếp theo toạ độ y: ";
    PrintPoint(point);
    return 0;
}


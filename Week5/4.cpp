#include <iostream>
#include <vector>
using namespace std;
/*Coi x là thành phố 1
 y là thành phố 2
 z là khoảng cách
 (x;y;z)
*/
struct findway{
    int x;
    int y;
    int z;
};

void map(vector<findway> map){
    map.resize(5);
    cout<<"Custom bản đồ: "<<endl;
    for(int i=0;i<5;i++){
        cin>>map[i].x>>map[i].y>>map[i].z;
    }
}
void neighbor(vector<findway> map){
    cout <<"Các thành phố lân cận: "<<endl;
    for(int i =0;i<5;i++){
        for(int j=1;j<=5;j++){
            if(map[i].x==j)//Em k biết tại sao lại bug chỗ này =))),Thread 1: EXC_BAD_ACCESS (code=1, address=0x0), lỗi giống bài 3
                cout<<map[i].x<<" and "<<map[j].y<<endl;
            if(map[i].y==j)
                cout<<map[i].y<<" and "<<map[i].x<<endl;
        }
    }
}
void distance(vector<findway> map){
    int n;
    cout<<"U wanna find the way of: ";
    cin>>n;
    for(int i=0;i<5;i++){
        if(map[i].x==n)
            cout<<"Distance from "<<map[i].x<<" to "<<map[i].y<<":"<<map[i].z<<endl;
        if(map[i].y==n)
            cout<<"Distance from"<<map[i].y<<" to "<<map[i].z<<":"<< map[i].z<<endl;
    }
}
int main(){
    vector<findway> way;
    map(way);
    neighbor(way);
    distance(way);
    return 0;
}

#include<iostream>
using namespace std;
float area(int r){
    float area;
    area=3.14*r*r;
    return area;
}
int main(){
    int r;
    cin>>r;
    cout<<area(r);
    return 0;
}
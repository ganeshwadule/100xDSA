#include<iostream>

using namespace std;

struct circle{
    int height;
    int radius;
};
int PI = 3.14;
void getArea(circle ci){
    cout<<PI*ci.radius*ci.radius;
}

void getResult(){
    circle c;
    c.height=20;
    c.radius=10;
    getArea(c);
}
int main(){
    getResult();
       
    return 0;
}
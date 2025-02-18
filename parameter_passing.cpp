#include<iostream>

using namespace std;

void pass_by_value(int x,int y){
    int temp = x;
    x = y;
    y = temp;
}

void pass_by_address(int *x,int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
void pass_by_reference(int &x,int &y){
    int temp = y;
    y = x;
    x = temp;
}

int main(){
    int a = 10,b=20;
    pass_by_value(a,b);
    cout<<a<<" "<<b<<endl;

    pass_by_address(&a,&b);
    cout<<a<<" "<<b<<endl;
    
    pass_by_reference(a,b);
    cout<<a<<" "<<b<<endl;
    return 0;
}
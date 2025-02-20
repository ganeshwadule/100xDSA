#include <iostream>
using namespace std;

class Rectangle{
    private:
        int length;
        int breadth;

    public:
        Rectangle(int l,int b){
            length = l;
            breadth = b;
        }

        int area(){
            return length*breadth;
        }

        int perimeter(){
            return 2*(length+breadth);
        }

        ~Rectangle(){
            cout<<"Rectangle is destroyed"<<endl;
        }
};


int main(){
    
    int l,b;
    cin>>l>>b;

    Rectangle r(l,b);

    cout<<r.area()<<" "<<r.perimeter();

}
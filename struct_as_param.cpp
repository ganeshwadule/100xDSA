#include <stdlib.h>
#include <iostream>

using namespace std;

 struct Shape{
    int sides;
    string type;
};

void fun(Shape *s){
    cout<<(*s).sides<<" "<<s->type<<endl;
}

int main(){

  Shape s1 = {0,"Circle"};
  Shape s2 = {4,"Square"};

  fun(&s1);

  return 0;
}
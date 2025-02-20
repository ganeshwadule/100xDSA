#include <iostream>
#include <stdlib.h>
using namespace std;

#define INT_MAX 2147483647

template <class T>
class calculator
{
private:
    T a;
    T b;

public:
    calculator(T a, T b)
    {
        this->a = a;
        this->b = b;
    }

    T add();
    T sub();
    T mul();
    T div();

};  
template<class T>
T calculator<T>::add()
{
    return this->a + this->b;
}

template<class T>
T calculator<T>::sub()
{
    return this->a - this->b;
}

template<class T>
T calculator<T>::mul()
{
    return this->a * this->b;
}

template<class T>
T calculator<T>::div()
{
    if (this->b == 0)
        return INT_MAX;

    return this->a / this->b;
}

int main()
{
    calculator<int> c(10.1233, 12);
    cout << c.add()<<endl;
    cout<<c.mul();
}
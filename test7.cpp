#include <iostream>

using namespace std;

class A{
    private:
        int value;
    public:
        A(int n){
            cout << "constructor is called" << endl;
            value = n;
        }
        A(const A &other){
            cout << "copy constructor is called" << endl;
            value = other.value;
        }
        ~ A()
        {
            cout << "destructor id called" << endl;
        }
        void print()
        {
            cout << "A::print is called, the value is " << value << endl;
        }
};

void func(A c)
{
    cout << "func is called" << endl;
}

int main(int argc, char const *argv[])
{
     A a = 10;
     cout << "----------" << endl;
     A b = a; //b is a new object"，调用拷贝构造函数，赋值操作适用于已经有的对象
     cout << "----------" << endl;
     b.print();
     cout << "----------" << endl;
     func(a);
     cout << "----------" << endl;
     return 0;
}

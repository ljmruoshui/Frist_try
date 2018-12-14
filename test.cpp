#include <iostream>

using namespace std;

class A{
    private:
        int m_data;
    public:
        A(int value){
            m_data = value;
        }
        void print1(){
            cout << "print1 is execused" << endl;
        }
        virtual void print2()
        {
            cout << "print2 is execused" << endl;
        }
        void print3()
        {
            cout << "m_data = " << m_data << endl;
        }
};

int main(int argc, char const *argv[])
{
    A *PA = NULL;
    A a(2);
    PA->print1();
    //PA->print2();  vitual function, can not be called by nullptr. nullptr -> this is wrong
    a.print2();  
    a.print3();
    return 0;
}

#include <iostream>
using namespace std;

class A{
    public:
        //const val must be set by initialation list
        A(int val = 0):i(val),num(val){
            cout << "A construct function is called " << endl;
        }

        int getval()const{
            return i;
        }
        void show() const{
         //   set_num(22);//wrong, call non-const function
          //  i = 5; //wrong, call non-const value
            getval(); //right, call const function
            cout << "const function show" << endl;
        }
        void show()
        {
            getval();
            cout << "non const function show " << endl;
        }
        int set_num(int n){
            num = n;
            return num;
        }
    private:
        const int i;
        int num;
};

int main(int argc, char const *argv[])
{
    A a(11);
    const A ca;
    //b.set_num(22) wrong const->const
    ca.show(); //show const
    a.show(); //show or show const    non-const->const is also right
    return 0;
}

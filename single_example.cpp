#include <iostream>
using namespace std;

class A{
    private:
        A(){};
        ~A(){};
    public:
        static A* Initialize_A(){
            cout << "initialize A" << endl;
            if(ptr == nullptr)
                ptr = new A;
                return ptr;
            
        }

        static void Delete_A(){
            if(ptr != nullptr)
                delete ptr;
            ptr = nullptr;
            cout << "delete A is called " << endl;
        }
    private:
        static A* ptr;  //static varialble must be initialized
};

A* A::ptr = nullptr;
int main(int argc, char const *argv[])
{
    A *pa = A::Initialize_A();
    A *pb = A::Initialize_A();
    cout << pa <<"  "<< pb << endl; //pa and pb point to the same location
    A::Delete_A();
    return 0;
}

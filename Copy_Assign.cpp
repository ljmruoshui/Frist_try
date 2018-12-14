#include <iostream>
using namespace std;

class person{
    public:
    person(double a, double b){
        height = a;
        weight = b;
        cout << "construct" << endl;
    }
    person(const person &p){
        height = p.height;
        weight = p.weight;
        cout << "copy construct" << endl;
    }
    person operator=(const person &p){
        cout << "assign" << endl;
        return *this;  //note for the return value
    }
    ~person()
    {
        cout << "destruct" << endl;
    }
    private:
    double height;
    double weight;
};

void func1(person p)
{
    cout << "func1 is called" << endl;
};

person func2()
{
    person p(165, 40);
    cout << "func2 is called" << endl;
    return p;
};

int main(int argc, char const *argv[])
{
    person p1(180, 70);
    cout << "-----" << endl;
    person p2 = p1; //copy constuct
    cout << "-----" << endl;
    person p3(170,50);
    cout << "-----" << endl;
    p3 = p1; //assign
    cout << "-----" << endl;
    func1(p1);  //formal parameter is person
    cout << "-----" << endl;
    person p4 = func2(); //return type is person
    cout << "-----" << endl;
    return 0;
}

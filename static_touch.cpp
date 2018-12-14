#include <iostream>
using namespace std;

class Person{
    public:
        Person(int val = 10):age(val){
            sum += age;
            count++;
            cout << "sum is " << sum << endl;
            cout << "count is " << count << endl;
        }
        static double get_age(){
            //return age;//wrong , can not be called by static funciton
            return double(sum)/count; //right, static function call static value
        }
        static int get_count();
    private:
        int age;
        static int count;
    public:
        static int sum;
};

int Person::get_count(){   //"static should not be added"
    return count;
}
int Person::count = 0;  //static value initialized out of class
int Person::sum = 0;

int main(int argc, char const *argv[])
{
    cout << sizeof(Person) << endl; //4   static value is stored at bss rw
    Person p1(10);
    cout << "---------" << p1.sum << endl;
    Person p2(20);
    cout << "---------" << Person::sum << endl;  //person::count is wrong since count is privated
    cout << "---------" << p2.sum << endl;
    cout << "---------" << Person::get_age() << endl;
    cout << "---------" << p2.get_age() << endl;

    return 0;
}

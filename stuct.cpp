#include <iostream>
using namespace std;
struct students   //global
{
    char name[20];
    int age;
};

int main()
{
    students lucy =
    {
        "lucy zhang",
        20
    };
    students lily =
    {
        "lily zhang",
        20
    };
    students tom{"tom li",22};

    cout << "lucy full name" << lucy.name;
    cout << "num of students' age" << lucy.age + lily.age;
    return 0;

}
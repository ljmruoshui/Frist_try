#include <iostream>
#include <stack>

using namespace std;

int random(int n)
{
    return rand()%n;
}


int main(int argc, char const *argv[])
{
       stack<int> normal;
        stack<int> minstack;
        cout << "push the value to stack" << endl;
        int x = random(10);
        minstack.push(x);
        normal.push(x);
    for(int i = 0; i < 10 ; i++)
    {
        int x = random(10);
        if(x < minstack.top())
            {
                minstack.push(x);
            }
        else
            {
                minstack.push(minstack.top());
            }
        cout << " min value is " << minstack.top() << endl;
        normal.push(x);
        cout << "the random value in stack top is " << normal.top() << endl;
        
        
        
    }
    return 0;
}



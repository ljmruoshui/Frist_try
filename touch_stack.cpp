#include <iostream>
using namespace std;

class Stack{
    public:
        Stack(int len = 1024){
            ps =  new int[len];
            topid = 0;
            size =  len;
            cout << "contruct function is called----" << endl; 
        }
        void pop(){topid--;}
        void push(int x){   
            ps[topid++] = x;
            cout << "push value into stack, the value is " << x << endl;
            }
        int top(){
            return ps[topid-1];
        }
        bool isEmpty() const
        {
                return topid == 0;
        }
        bool isFull()  const{
                return topid == size;
        }
        ~Stack(){
            if(ps)
                delete[] ps;
            ps =  nullptr;
            cout << "destruct function is called---" << endl;
        }

    private:
        int *ps;
        int topid;
        int size;
};

int main(int argc, char const *argv[])
{
    Stack S1;
    Stack S2;
    S1.push(1);
    S1.push(11);
    S2.push(2);
    S2.push(22);

    cout << "s1 top value is "  << S1.top() << endl;
    cout << "s2 top value is "  << S2.top() << endl;

    S1.pop();
    S1.pop();

    S2.pop();
    S2.pop();

    cout << "S1 is empty? " << S1.isEmpty() << endl;

    return 0;
}

#include <iostream>

using namespace std;

struct ListNode{
    int value;
    ListNode *next;
    ListNode(int x): value(x), next(nullptr){};
    };


class Solution{
    public:
       ListNode *reverselist(ListNode *head);
};

ListNode *reverselist(ListNode *head){
    ListNode tmp(0);
    ListNode *next;
    while(head)
    {
        next = head->next;
        head->next = tmp.next;
        tmp.next = head;
        head = next;
    }
    return tmp.next;
};


void print_list(ListNode *head)
{
    if(head == nullptr){
        cout << "something may be wrong, since the head is nullptr" << endl; 
    }
    while(head != nullptr)
    {
        cout << "the value is " << head->value << endl;
        head = head->next;
    }
}


int main(int argc, char const *argv[])
{
    ListNode a(1);
    ListNode b(2);
    ListNode c(3);
    ListNode d(4);
    ListNode e(5);

    ListNode *head = &a;
    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = &e;
    e.next = nullptr;

    cout << "the old list is " << endl;
    print_list(head);

    ListNode *newhead = reverselist(head);
    cout << "print the new linked list " << endl;
    print_list(newhead);

    return 0;
}
// Create a generic list class for integers
#include<iostream>
#include<stdlib.h>
#include<ctype.h>

class list
{
    public:
        list *head;     // pointer to next item in list
        list *tail;
        list *next;
        int num;        // value to be stored
        list()
        {
            head = tail = next = NULL;
        }
        virtual void store(int i) = 0;
        virtual int retrieve() = 0;
};

// Create a queue list
class queue : public list
{
    public:
        void store(int i);
        int retrieve();
        queue operator+(int i)  { store(i); return *this; }
        int operator--()        { return retrieve(); }
};

void queue::store(int i)
{
    list *item;

    item = new queue;
    if(!item)
    {
        std::cout << "Allocation error\n";
        exit(1);
    }
    item->num = i;

    // put on end of list
    if(tail)    tail->next = item;
    tail = item;
    item->next = NULL;
    if(!head)   head = tail;
}

int queue::retrieve()
{
    int i;
    list *p;

    if(!head)
    {
        std::cout << "List empty\n";
        return 0;
    }

    // remove from start of list
    i = head->num;
    p = head;
    head = head->next;
    delete p;

    return i;
}

// Create a stack type list
class stack : public list
{
    public:
        void store(int i);
        int retrieve();
        stack operator+(int i)  { store(i); return *this; }
        int operator--()        { return retrieve(); }
};

void stack::store(int i)
{
    list *item;

    item = new stack;
    if(!item)
    {
        std::cout << "Allocation error\n";
        exit(1);
    }
    item->num = i;

    // put on front of lists for stack-like operation
    if(head)    item->next = head;
    head = item;
    if(!tail)   tail = head;
}

int stack::retrieve()
{
    int i;
    list *p;

    if(!head)
    {
        std::cout << "List empty\n";
        return 0;
    }

    // remove from start of list
    i = head->num;
    p = head;
    head = head->next;
    delete p;

    return i;
}

main()
{
    list *p;

    // キューの例
    queue q_ob;

    p = &q_ob;  // キューを指す

    q_ob + 1;
    q_ob + 2;
    q_ob + 3;

    std::cout << "Queue: ";
    std::cout << q_ob--;
    std::cout << q_ob--;
    std::cout << q_ob--;

    std::cout << '\n';

    // スタックの例
    stack s_ob;

    p = &s_ob;  // スタックを指す

    s_ob + 1;
    s_ob + 2;
    s_ob + 3;

    std::cout << "Stack: ";
    std::cout << s_ob--;
    std::cout << s_ob--;
    std::cout << s_ob--;

    std::cout << '\n';

    return 0;
}
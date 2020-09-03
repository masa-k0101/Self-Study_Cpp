// 整数用の一般的なlistクラスを作る
#include<iostream>
#include<stdlib.h>
#include<ctype.h>

class list
{
    public:
        list *head;     // listの先頭へのポインタ
        list *tail;     // listの終端へのポインタ
        list *next;     // 次の項目へのポインタ
        int num;        // ストアされる値
        list()
        {
            head = tail = next = NULL;
        }
        virtual void store(int i) = 0;
        virtual int retrieve() = 0;
};

// list型のキューを作る
class queue : public list
{
    public:
        void store(int i);
        int retrieve();
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

    // listの終端に入れる
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

    // listの先頭から削除
    i = head->num;
    p = head;
    head = head->next;
    delete p;

    return i;
}

// list型のスタックを作る
class stack : public list
{
    public:
        void store(int i);
        int retrieve();
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

    // スタックに似た操作のためにlistの前に入れる
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

    // listの先頭から削除
    i = head->num;
    p = head;
    head = head->next;
    delete p;

    return i;
}

main()
{
    list *p;
    stack s_ob;
    queue q_ob;
    char ch;
    int i;

    for(i=0; i<10; i++)
    {
        std::cout << "Stack or Queue? (S/Q): ";
        std::cin >> ch;
        ch = tolower(ch);
        if(ch=='q') p = &q_ob;
        else        p = &s_ob;
        p->store(i);
    }

    std::cout << "Enter T to terminate\n";

    for(;;)
    {
        std::cout << "Remove from Stack or Queue? (S/Q): ";
        std::cin >> ch;
        ch = tolower(ch);
        if(ch=='t') break;
        if(ch=='q') p = &q_ob;
        else        p = &s_ob;
        std::cout << p->retrieve() << '\n';
    }

    std::cout << '\n';

    return 0;
}
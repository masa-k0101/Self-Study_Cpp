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
        virtual int retieve() = 0;
};

// list型のキューを作る
class queue : public list
{
    public:
        void store(int i);
        int retieve();
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

int queue::retieve()
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

    // キューの例
    queue q_ob;

    p = &q_ob;  // キューを指す

    p->store(1);
    p->store(2);
    p->store(3);

    std::cout << "Queue: ";
    std::cout << p->retieve();
    std::cout << p->retieve();
    std::cout << p->retieve();

    std::cout << '\n';

    // スタックの例
    stack s_ob;

    p = &s_ob;  // スタックを指す

    p->store(1);
    p->store(2);
    p->store(3);

    std::cout << "Stack: ";
    std::cout << p->retieve();
    std::cout << p->retieve();
    std::cout << p->retieve();

    std::cout << '\n';

    return 0;
}
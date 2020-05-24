#include<iostream>
using namespace std;

#define SIZE 100

class q_type
{
    int queue[SIZE];    //holds the queue
    int head, tail;     //indices of head and tail
    public:
        q_type();       //コンストラクタ
        void init();    //initialize
        void q(int num); //store
        int deq();      // retrieve
};

//Initialize
q_type::q_type()
{
    head = tail = 0;
}

// Put value on a queue
void q_type::q(int num)
{
    if(tail+1==head || (tail+1==SIZE && !head))
    {
        cout << "Queue is full \n";
        return;
    }
    tail++;
    if(tail==SIZE) tail = 0; //cycle around
    queue[tail] =num;
}
//Remove a value from a queue.
int q_type::deq()
{
    if(head==tail)
    {
        cout << "Queue is empty\n";
        return 0;  // or some other error indicator
    }
    head++;
    if(head==SIZE) head = 0; //cycle around
    return queue[head];
}

main()
{
    q_type q1, q2;
    int i;

    for(i=1; i<=3; i++)
    {
        q1.q(i);
    }
    q2 = q1;
    for(i=0; i<=3; i++)
    {
        cout << "Dequeue 1:" << q1.deq() << "\n";
    }
     for(i=1; i<=4; i++)
    {
        cout << "Dequeue 2:" << q2.deq() << "\n";
    }
    return 0;
}
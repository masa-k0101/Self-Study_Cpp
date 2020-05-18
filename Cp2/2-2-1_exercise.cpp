//Dynamically allocated stack.
#include<iostream>
#include<cstdlib>

namespace A
{
    // Declaare a stack class for characters
    class stack
    {
        private:
            char *stck;    // holds the stack
            int tos;        // index of the stack
            int size;       // size of stack
        public:
            stack(int s);   //constructor
            ~stack();       //deconstructor
            void push(char ch);     //push character on stack
            char pop();     // pop character from stack
    };

    // Initialize the stack
    stack::stack(int s)
    {
        std::cout << "Constructing a stack\n";
        tos = 0;
        stck = (char *) malloc(s);
        if(!stck)
        {
            std::cout << "Allocation error...";
            exit(1);
        }
        size = s;
    }

    stack::~stack()
    {
        free(stck);
    }

    // Push a character.
    void stack::push(char ch)
    {
        if(tos==size)
        {
            std::cout << "Stack is full \n";
            return;
        }
        stck[tos] = ch;
        tos++;
    }

    // Pop a character.
    char stack::pop()
    {
        if(tos==0)
        {
            std::cout << "Stack si empty\n";
            return 0;   //return null on empty stack
        }
        tos--;
        return stck[tos];
    }
}

main()
{
    //create two stacks that are automatically initialized.
    A::stack s1(10), s2(10);
    int i;

    s1.push('a');
    s2.push('x');
    s1.push('b');
    s2.push('y');
    s1.push('c');
    s2.push('z');

    for(i=0; i<3; i++) std::cout << "Pop s1: " << s1.pop() << "\n";
    for(i=0; i<3; i++) std::cout << "Pop s2: " << s2.pop() << "\n";
    return 0;
}
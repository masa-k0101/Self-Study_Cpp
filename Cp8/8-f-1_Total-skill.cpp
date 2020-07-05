#include<iostream>

#define SIZE 10

namespace A
{
    // 文字用のstackクラスを宣言
    class stack
    {
            char stck[SIZE];    // スタック確保
            int tos;            // スタック先頭のインデクス
        public:
            stack();
            void push(char ch); // スタックに文字をプッシュ
            char pop();         // スタックから文字をポップ
            friend std::ostream &operator<<(std::ostream &stream, stack ob);
    };

    // スタックを初期化
    stack::stack()
    {
        tos = 0;
    }

    // 1文字をプッシュ
    void stack::push(char ch)
    {
        if(tos==SIZE)
        {
            std::cout << "Stack is full";
            return;
        }
        stck[tos] = ch;
        tos++;
    }

    // 1文字をポップ
    char stack::pop()
    {
        if(tos==0)
        {
            std::cout << "Stack is empty";
            return 0;       // 空スタックでヌルを返す
        }
        tos--;
        return stck[tos];
    }

    std::ostream &operator<<(std::ostream &stream, stack ob)
    {
        char ch;

        while(ch = ob.pop())    stream << ch;
        stream << '\n';

        return stream;
    }
}

main()
{
    A::stack s;

    s.push('a');
    s.push('b');
    s.push('c');

    std::cout << s;

    return 0;
}
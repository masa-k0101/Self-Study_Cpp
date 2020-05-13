#include<iostream>

#define SIZE 10

namespace A
{
    // 文字用のstackクラスを定義
    class stack
    {
            char stack[SIZE];   //スタックを確保
            int tos;            //スタック先頭のインデックス
        public:
            void init();        //スタックを初期化
            void push(char ch); //スタックに文字をプッシュ
            char pop();         //スタックから文字をポップ
    };

    // スタックを初期化
    void stack::init()
    {
        tos = 0;
    }

    // 文字をプッシュ
    void stack::push(char ch)
    {
        if (tos==SIZE)
        {
            std::cout << "Stack is full";
            return;
        }
        stack[tos] = ch;
        tos++;
    }

    // 1文字をポップ
    char stack::pop()
    {
        if (tos==0)
        {
            std::cout << "Stack is empty";
            return 0;   //スタックが空になってnullを返す
        }
        tos--;
        return stack[tos];
    }
}

main()
{
    A::stack s1,s2;
    int i;

    //スタックを初期化
    s1.init();
    s2.init();
    s1.push('a');
    s2.push('x');
    s1.push('b');
    s2.push('y');
    s1.push('c');
    s2.push('z');

    for (i=0; i<3; i++)
        std::cout << "Pop s1: " << s1.pop() << "\n";
    for (i=0; i<3; i++)
        std::cout << "Pop s2: " << s2.pop() << "\n";
    return 0;
}
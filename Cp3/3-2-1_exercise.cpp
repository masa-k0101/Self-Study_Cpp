#include<iostream>

namespace A
{
    #define SIZE 10

    // 文字用のstackクラスを定義
    struct stack
    {
        private:
            char stck[SIZE];    //スタックを確保
            int tos;            //スタック先頭のインデックス
        public:
            stack();            //コンストラクタ
            void push(char ch); //スタックに文字をプッシュ
            char pop();         //スタックから文字をポップ
    };

    // スタックを初期化
    stack::stack()
    {
        std::cout << "In construction\n";
        tos = 0;
    }

    // 文字をプッシュ
    void stack::push(char ch)
    {
        if (tos==SIZE)
        {
            std::cout << "Stack is full\n";
            return;
        }
        stck[tos] = ch;
        tos++;
    }

    // 1文字をポップ
    char stack::pop()
    {
        if (tos==0)
        {
            std::cout << "Stack is empty\n";
            return 0;   //スタックが空になってnullを返す
        }
        tos--;
        return stck[tos];
    }

    void showstack(stack o)
    {
        char c;
        while (c=o.pop())
        {
            std::cout << c << "\n";
        }
    }
}

main()
{
    A::stack s1;
    int i;

    s1.push('a');
    s1.push('b');
    s1.push('c');
    
    A::showstack(s1);

    for (i=0; i<3; i++)
        std::cout << "Pop s1: " << s1.pop() << "\n";
    return 0;
}
// Load a stack with the alpahbet
#include<iostream>

namespace A
{
    #define SIZE 30

    // 文字用のstackクラスを定義
    class stack
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
        std::cout << "Constructing a stack\n";
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
        while(c=o.pop())    std::cout << c <<"\n";
        std::cout << "\n";
    }
    stack loadstack()
    {
        stack t;
        char c;

        for(c='a'; c<='z'; c++)
        {
            t.push(c);
        }
        return t;
    }
}

main()
{
    A::stack s1;

    s1 = A::loadstack();
    A::showstack(s1);
    return 0;    
}

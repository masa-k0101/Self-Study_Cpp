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
            stack();                //コンストラクタ
            void push(char ch);     //スタックに文字をプッシュ
            char pop();             //スタックから文字をポップ
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
}

main()
{
    // 自動的に初期化される2つのスタックを作る
    A::stack s1,s2;
    int i;

    s1.push('a');
    s1.push('b');
    s1.push('c');

    // s1のクローン
    s2 = s1;    //これでs1とs2はまったく同じ

    for (i=0; i<3; i++)
        std::cout << "Pop s1: " << s1.pop() << "\n";
    for (i=0; i<3; i++)
        std::cout << "Pop s2: " << s2.pop() << "\n";
    return 0;
}
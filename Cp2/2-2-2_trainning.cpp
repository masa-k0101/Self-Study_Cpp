#include<iostream>

#define SIZE 10

namespace A
{
    //文字用のstackクラスを宣言
    class stack
    {
        private:
            char stck[SIZE];    //スタックを確保
            int tos;            //スタックの先頭インデクス
            char who;           //スタックを識別
        public:
            stack(char c);      //コンストラクタ
            void push(char ch);  //文字をスタックにプッシュ
            char pop();         //文字をスタックからポップ
    };

    //スタックを初期化
    stack::stack(char c)
    {
        tos = 0;
        who = c;
        std::cout << "Constructing stack " << who << "\n";
    }

    //1文字をプッシュ
    void stack::push(char ch)
    {
        if(tos==SIZE)
        {
            std::cout << "Stack" << who << "is full \n";
            return;
        }
        stck[tos] = ch;
        tos++;
    }

    //1文字をポップ
    char stack::pop()
    {
        if(tos==0)
        {
            std::cout << "Stack " << who << " is empty \n";
            return 0;   //スタックが空になってnullを返す
        }
        tos--;
        return stck[tos];
    }
}

main()
{
    //自動的に初期化される2つのスタックを作る
    A::stack s1('A'), s2('B');
    int i;

    s1.push('a');
    s2.push('x');
    s1.push('b');
    s2.push('y');
    s1.push('c');
    s2.push('z');

    //ここでいくつかのエラーメッセージが発生
    for(i=0; i<5; i++)  std::cout << "Pop s1:" << s1.pop() << "\n";
    for(i=0; i<5; i++)  std::cout << "Pop s2:" << s2.pop() << "\n";
    return 0;
}
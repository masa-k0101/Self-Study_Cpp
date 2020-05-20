#include<iostream>

namespace A
{
    class myclass
    {
        private:
            int a;
        public:
            myclass(int x); //コンストラクタ
            int get();
    };

    myclass::myclass(int x)
    {
        a = x;
    }

    int myclass::get()
    {
        return a;
    }
}

main()
{
    A::myclass ob(10);     //オブジェクトの生成
    A::myclass *p;         //オブジェクトへのポインタを作る
    p = &ob;            //obのアドレスをpに入れる

    std::cout << "Value using object: " << ob.get() << "\n";
    std::cout << "Value using pointer: " << p->get();
    return 0;
}
#include<iostream>

namespace A
{
    class myclass
    {
            int n, d;
        public:
            myclass(int i, int j)
            {
                n = i; d = j;
            }
            // myclass のフレンド宣言
            friend int isfactor(myclass ob);
    };

    //ここにフレンド関数定義がある。もし、dがnの因数ならば真を返す
    //キーワードfriendがisfactor()の定義中に使われていないことに注意
    int isfactor(myclass ob)
    {
        if(!(ob.n % ob.d))  return 1;
        else return 0;
    }
}

main()
{
    A::myclass ob1(10, 2), ob2(13 ,3);

    if(isfactor(ob1))   std::cout << "2 is a factor of 10\n";
    else                std::cout << "2 is not a factor of 10\n";

    if(isfactor(ob2))   std::cout << "3 is a factor of 13\n";
    else                std::cout << "3 is not a factor of 13\n";
    
    return 0;
}
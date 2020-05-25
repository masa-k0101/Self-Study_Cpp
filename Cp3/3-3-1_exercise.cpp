//オブジェクトを返す
#include<iostream>

namespace A
{
    class who
    {
            char s;
        public:
            who(char c)
            {
                s = c;
                std::cout << "Constructing who #" << s <<"\n";
            }
            ~who()
            {
                std::cout << "Deconstructing who #" << s <<"\n";
            }
    };

    //samp型のオブジェクトを返す
    who make_who()
    {
        who temp('A');
        return temp;
    }
}

main()
{
    A::who ob('x');

    A::make_who();
    return 0;
}
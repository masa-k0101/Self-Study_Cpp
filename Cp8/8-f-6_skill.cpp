// このプログラムは正方形を描く
#include<iostream>

namespace A
{
    class box
    {
            int len;
        public:
            box(int l)  { len = l; }
            friend std::ostream &operator<<(std::ostream &stream, box ob);
    };

    // 正方形を描く
    std::ostream &operator<<(std::ostream &stream, box ob)
    {
        int i, j;
        
        for(i=0; i<ob.len; i++) stream << '%';
        stream << '\n';
        for(i=0; i<ob.len-2; i++)
        {
            stream << '%';
            for(j=0; j<ob.len-2; j++)   stream << ' ';
            stream << "%\n";
        }
        for(i=0; i<ob.len; i++) stream << '%';
        stream << '\n';

        return stream;
    }
}

main()
{
    A::box b1(4);

    std::cout << b1;
    std::cout << std::endl;

    return 0;
}
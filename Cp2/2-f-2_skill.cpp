#include<iostream>

namespace A
{
    class line
    {
        private:
            int n;
        public:
            line(int a)     //コンストラクタ
            {
                n = a;
            }
            const char draw();
    };

    const char line::draw()
    {
        int i;
        for(i=0; i<n; i++)
            std::cout << "*";
    };
}

main()
{
    A::line ob(10);

    std::cout << ob.draw() << "\n";
    return 0;
}
#include<iostream>
#include<time.h>

class timer
{
    clock_t start;
        public:
            timer();    //コンストラクタ
            ~timer();   //デストラクタ
};

timer::timer()
{
    start = clock();
}

timer::~timer()
{
    clock_t end;
    end = clock();
    std::cout << "Elapsed time: " << (end-start) / CLK_TCK << "\n";
}

main()
{
    timer ob;
    char c;

    //遅延
    std::cout << "Press a Key followed by ENTER: ";
    return 0;
}
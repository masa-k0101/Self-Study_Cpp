#include<iostream>
#include<time.h>

class stopwatch
{
    double begin,end;
        public:
            stopwatch();    //コンストラクタ
            ~stopwatch();   //デストラクタ
            void start();
            void stop();
            void show();
};

stopwatch::stopwatch()
{
    begin = end = 0;
}

stopwatch::~stopwatch()
{
    std::cout << "Stopwatch object being destroyed.. \n";
}

void stopwatch::start()
{
    begin = (double)clock() / CLK_TCK;
}

void stopwatch::stop()
{
    end = (double)clock() / CLK_TCK;
}

void stopwatch::show()
{
    std::cout << "Elapsed time : " << end - begin << "\n";
}

main()
{
    stopwatch watch;
    long i;

    watch.start();

    for(i=0; i<1280000; i++);    // time a for loop
    watch.stop();
    watch.show();
    return 0;
}
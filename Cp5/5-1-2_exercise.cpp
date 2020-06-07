#include<iostream>
#include<time.h>

namespace A
{
    class stopwatch
    {
                double begin,end;
            public:
                stopwatch();    //コンストラクタ
                stopwatch(clock_t t);
                ~stopwatch();   //デストラクタ
                void start();
                void stop();
                void show();
    };

    stopwatch::stopwatch()
    {
        begin = end = 0;
    }

    stopwatch::stopwatch(clock_t t)
    {
        begin = (double) t / CLK_TCK;
        end = 0.0;
    }

    stopwatch::~stopwatch()
    {
        std::cout << "Stopwatch object being destroyed.. \n";
        show();
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
}

main()
{
    A::stopwatch watch;
    long i;

    watch.start();
    for(i=0; i<320000; i++)  ;    // time a for loop
    watch.stop();
    watch.show();

    A::stopwatch s2(clock());
    for(i=0; i<250000; i++)  ;    // time a for loop
    s2.stop();
    s2.show();

    return 0;
}
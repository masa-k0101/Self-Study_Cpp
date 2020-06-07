#include<iostream>
#include<cstdio>    //scanfのためのインクルード

namespace A
{
    class data
    {
            int day, month, year;
        public:
            data(const char *str);
            data(int m, int d, int y)
            {
                day = d;
                month = m;
                year = y;
            }
            void show()
            {
                std::cout << month << '/' << day << '/' << year << "\n";
            }
    };

    data::data(const char *str)
    {
        sscanf(str, "%d%*c%d%*c%d", &month, &day, &year);
    }
}

main()
{
    // 文字列を使って日付オブジェクトを作る
    A::data sdata("11/1/92");

    // 整数を使って日付オブジェクトを作る
    A::data idata(11, 1, 92);

    sdata.show();
    idata.show();

    return 0;
}

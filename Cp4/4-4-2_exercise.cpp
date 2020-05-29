#include<iostream>
#include<cstring>

namespace A
{
    class phone
    {
        char name[40], number[14];
        public:
            void store(const char *n, const char *num);
            void show();
    };

    void phone::store(const char *n, const char *num)
    {
        strcpy(name, n);
        strcpy(number, num);
    }

    void phone::show()
    {
        std::cout << name << " : " << number << "\n";
    }
}

main()
{
    A::phone *p;

    p = new A::phone;    // 整数の場所の割り当て

    // 常に割り当ての成功を確かめる
    if(!p)
    {
        std::cout << "Allocation error\n";
        return 1;
    }

    p -> store("Issac Newton", "111 222 333");

    p -> show();

    delete p;       //メモリ解放
    return 0;
}
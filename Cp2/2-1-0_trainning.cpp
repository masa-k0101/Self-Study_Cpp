#include<iostream>

class myclass
{
    int a;
        public:
            myclass();      //コンストラクタ
            ~myclass();     //デストラクタ
            void show();
};

myclass::myclass()
{
    std::cout << "In construction\n";
    a = 10;
}

myclass::~myclass()
{
    std::cout << "Detructing\n";
}

void myclass::show()
{
    std::cout << a << "\n";
}

main()
{
    myclass ob;

    ob.show();
    return 0;
}
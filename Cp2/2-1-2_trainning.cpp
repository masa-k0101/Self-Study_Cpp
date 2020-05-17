#include<iostream>
#include<malloc.h>
#include<string>
#include<cstring>
#include<cstdlib>
using namespace std;

#define SIZE 255

class myclass
{
    char *p;
    int len;
    public:
        myclass();   //コンストラクタ
        ~myclass();  //デストラクタ
        void set(const char *ptr);
        void show();
};

//文字列オブジェクトを初期化
myclass::myclass()
{
    p = (char *) malloc(SIZE);
    if(!p) 
    {
        cout << "Allocation Error \n";
        exit(1);
    }
    *p = '\0';
    len = 0;
}

//文字列オブジェクトが破棄されたときメモリを解放
myclass::~myclass()
{
    cout << "Freeing p\n";
    free(p);
}

void myclass::set(const char *ptr)
{
    if(strlen(p) > SIZE)
    {
        cout << "Strings too big \n";
        return;
    }
    strcpy(p, ptr);
    len = strlen(p);
}

void myclass::show()
{
    cout << p << " - length: " << len << "\n";
}

main()
{
    myclass s1, s2;

    s1.set("This is a test");
    s2.set("I like C++");

    s1.show();
    s2.show();
    return 0;
}
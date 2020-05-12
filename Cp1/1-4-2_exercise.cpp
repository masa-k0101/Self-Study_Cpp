#include<iostream>
#include<string.h>

namespace A
{
    class card
    {
        char title[80];   
        char author[40];
        int number;
    public:
        void store(const char *t, const char *name, int num);
        void show();
    };

    // 情報をストア
    void card::store(const char *t, const char *name, int num)
    {
        strcpy(title, t);
        strcpy(author, name);
        number = num;
    }
    void card::show()
    {
        std::cout << "Title:" << title << "\n";
        std::cout << "Author:" << author << "\n";
        std::cout << "Number:" << number << "\n";
    }
}

main()
{
    A::card book1;
    
    book1.store("Upper light is all stars","Right",3);
    book1.show();
    
    return 0;
}
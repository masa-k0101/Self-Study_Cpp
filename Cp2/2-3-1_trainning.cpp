//クラス継承の例
#include<iostream>
#include<cstring>

namespace A
{
    enum yn {no, yes};
    enum color {red, yellow, green, orange};

    void out(enum yn x);

    const char *c[] = {"red", "yellow", "green", "orange"};

    // 一般的なfruitクラス
    class fruit
    {
        private:
        // この基本オブジェクトで全要素はパブリック
        public:
            enum yn annual;     //一年生
            enum yn perenial;   //多年生
            enum yn tree;
            enum yn tropical;
            enum color clr;
            char name[40];
    };

    //Appleクラスを派生
    class Apple : public fruit
    {
        private:
            enum yn cooking;
            enum yn crunchy;
            enum yn eating;
        public:
            void seta(const char *n, enum color c, enum yn ck, enum yn crcky, enum yn e);
            void show();
    };

    //Orangeクラスを派生
    class Orange : public fruit
    {
        private:
            enum yn juice;
            enum yn sour;
            enum yn eating;
        public:
            void seto(const char *n, enum color c, enum yn j, enum yn sr, enum yn e);
            void show();
    };

    void Apple::seta(const char *n, enum color c, enum yn ck, enum yn crcky, enum yn e)
    {
        strcpy(name, n);
        annual = no;
        perenial = yes;
        tree = yes;
        tropical = no;
        clr = c;
        cooking = ck;
        crunchy = crcky;
        eating = e;
    }

    void Orange::seto(const char *n, enum color c, enum yn j, enum yn sr, enum yn e)
    {
        strcpy(name, n);
        annual = no;
        perenial = yes;
        tree = yes;
        tropical = yes;
        clr = c;
        juice = j;
        sour = sr;
        eating = e;
    }

    void Apple::show()
    {
        std::cout << name << " apple is: \n";
        std::cout << "Annual: "; out(annual);
        std::cout << "Perenial: "; out(perenial);
        std::cout << "Tree: "; out(tree);
        std::cout << "Tropical: "; out(tropical);
        std::cout << "Color: " << c[clr] << "\n";
        std::cout << "Good for cooking: "; out(cooking);
        std::cout << "Crunchy: "; out(crunchy);
        std::cout << "Good for eating: "; out(eating);
        std::cout << "\n"; 
    }

    void Orange::show()
    {
        std::cout << name << " orange is: \n";
        std::cout << "Annual: "; out(annual);
        std::cout << "Perenial: "; out(perenial);
        std::cout << "Tree: "; out(tree);
        std::cout << "Tropical: "; out(tropical);
        std::cout << "Color: " << c[clr] << "\n";
        std::cout << "Good for juice: "; out(juice);
        std::cout << "Sour: "; out(sour);
        std::cout << "Good for eating: "; out(eating);
        std::cout << "\n"; 
    }

    void out(enum yn x)
    {
        if(x==no)   std::cout << "no\n";
        else        std::cout << "yes\n";
    }
}

main()
{
    A::Apple a1,a2;
    A::Orange o1,o2;

    a1.seta("Red Delicious ", A::red, A::no, A::yes, A::yes);
    a2.seta("Jonation ", A::red, A::yes, A::no, A::yes);

    o1.seto("Navel",A::orange, A::no, A::no, A::yes);
    o2.seto("Valencia", A::orange, A::yes, A::yes, A::no);

    a1.show();
    a2.show();
    o1.show();
    o2.show();
    return 0;
}
// 多重継承
#include<iostream>

namespace A
{
    class building
    {
        protected:
            int floor, room, ft2;
    };

    // 直接基本クラスを継承
    class house : public building
    {
            int bed, bath;
        public:
            house(int f, int r, int ft, int be, int ba)
            {
                floor = f, room = r, ft2 = ft;
                bed = be; bath = ba;
            }
            void show()
            {
                std::cout << "Floors: " << floor << "\n";
                std::cout << "Rooms: " << room << "\n";
                std::cout << "Feet2: " << ft2 << "\n";
                std::cout << "Bedrooms: " << bed << "\n";
                std::cout << "Bathrooms: " << bath << "\n";
            }
    };

    // 派生クラスと間接的に基本クラスを継承
    class office : public building
    {
            int fire, tell;
        public:
            office(int f, int r, int ft, int fi, int t)
            {
                floor = f, room = r, ft2 = ft;
                fire = fi; tell = t;
            }
            void show()
            {
                std::cout << "Floors: " << floor << "\n";
                std::cout << "Rooms: " << room << "\n";
                std::cout << "Feet2: " << ft2 << "\n";
                std::cout << "Fire Extinguisher: " << fire << "\n";
                std::cout << "Tellephone: " << tell << "\n";
            }
    };
}

main()
{
    A::house ob1(2, 5, 60, 4, 2);
    A::office ob2(5, 25, 300, 10, 5);

    std::cout << "Spec of House: \n";
    ob1.show();

    std::cout << "Spec of Office: \n";
    ob2.show();

    return 0;
}
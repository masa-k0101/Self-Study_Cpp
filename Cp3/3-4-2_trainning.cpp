#include<iostream>

namespace A
{
    class truck;    //前方参照

    class car
    {
            int passengers;
            int speed;
        public:
            car(int p, int s)   { passengers = p; speed = s; }
            int sp_greater(truck t);
    };

    class truck
    {
            int weight;
            int speed;
        public:
            truck(int w, int s)   { weight = w; speed = s; }
            // スコープ解決演算子の使い方に注意
            friend int car::sp_greater(truck t);
    };

    // carがtruckより速ければ正の値を返し、速度が同じならば0を返す
    // truckがcarより速ければ負の値を返す
    int car::sp_greater(truck t)
    {
        //sp_greater()はcarのメンバなので、truckオブジェクトだけが渡されなければならない
        return speed-t.speed;
    }
}

main()
{
    int t;
    A::car c1(6, 55), c2(2, 120);
    A::truck t1(10000, 55), t2(20000, 72);

    std::cout << "Comparing c1 and t1\n";
    t = c1.sp_greater(t1);      //carのメンバ関数としてコール
    if(t<0)         std::cout << "Truck is faster.\n";
    else if(t==0)   std::cout << "Car and truck speed is same.\n";
    else            std::cout << "Car is faster. \n";

    std::cout << "Comparing c2 and t2\n";
    t = c2.sp_greater(t2);      //carのメンバ関数としてコール
    if(t<0)         std::cout << "Truck is faster.\n";
    else if(t==0)   std::cout << "Car and truck speed is same.\n";
    else            std::cout << "Car is faster. \n";

    return 0;
}
// 有限配列の例
#include<iostream>
#include<cstdlib>

namespace A
{
    class array
    {
            int size;
            char *p;
        public:
            array(int n);
            char &put(int i);
            char get(int i);
    };

    array::array(int num)
    {
        p = new char [num];
        if(!p)
        {
            std::cout << "Allocation error\n";
            exit(1);
        }
        size = num;
    }

    // 何かを配列に取り込む
    char &array::put(int i)
    {
        if(i<0 || i>=size)
        {
            std::cout << "Bound error!!!\n";
            exit(1);
        }
        return p[i];    //p[i]への参照を渡す
    }

    // 配列から何かを取り出す
    char array::get(int i)
    {
        if(i<0 || i>=size)
        {
            std::cout << "Bound error!!!\n";
            exit(1);
        }
        return p[i];    //文字を返す
    }
}

main()
{
    A::array a(10);

    a.put(3) = 'X';
    a.put(2) = 'R';

    std::cout << a.get(3) << a.get(2) << "\n";

    // ここでランタイム境界エラーを起こす
    a.put(11) = '!';
    
    return 0;
}
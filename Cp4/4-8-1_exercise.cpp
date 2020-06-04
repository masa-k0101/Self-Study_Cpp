// A bounded 2D array
#include<iostream>
#include<cstdlib>

namespace A
{
    class array
    {
            int isize, jsize;
            char *p;
        public:
            array(int i, int j);
            char &put(int i, int j);
            char get(int i, int j);
    };

    array::array(int i, int j)
    {
        p = new char [i*j];
        if(!p)
        {
            std::cout << "Allocation error\n";
            exit(1);
        }
        isize = i;
        jsize = j;
    }

    // 何かを配列に取り込む
    char &array::put(int i, int j)
    {
        if(i<0 || i>=isize || j<0 || j>=jsize)
        {
            std::cout << "Bound error!!!\n";
            exit(1);
        }
        return p[i*jsize+j];    //p[i]への参照を渡す
    }

    // 配列から何かを取り出す
    char array::get(int i, int j)
    {
        if(i<0 || i>=isize || j<0 || j>=jsize)
        {
            std::cout << "Bound error!!!\n";
            exit(1);
        }
        return p[i*jsize+j];    //文字を返す
    }
}

main()
{
    A::array a(2, 3);
    int i, j;

    for(i=0; i<2; i++)
        for(j=0; j<3; j++)
            a.put(i, j) = i+j;

    for(i=0; i<2; i++)
        for(j=0; j<3; j++)
            std::cout << a.get(i, j) << ' ';

    // ここでランタイム境界エラーを起こす
    a.put(10, 10);
    
    return 0;
}
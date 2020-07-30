// peak()の例
#include<iostream>
#include<fstream>
#include<ctype.h>
#include<stdlib.h>

main()
{
    char ch;
    std::ofstream out("test");

    if(!out)
    {
        std::cout << "Cannot open output file.\n";
        return 1;
    }

    char str[80], *p;

    out << 123 << "This is a test" << 23;
    out << "Hello there!" << 99 << "sdf" << std::endl;
    out.close();

    std::ifstream in("test");
    if(!in)
    {
        std::cout << "Cannot open input file.\n";
        return 1;
    }

    do
    {
        p = str;
        ch = in.peek();         // 次はどの型の文字か
        if(isdigit(ch))
        {
            while(isdigit(*p=in.get())) p++;        // 整数を読み返す
            in.putback(*p);                         // 文字をストリームへ返す
            *p = '\0';                              // ヌルで文字列終了
            std::cout << "Interger: " << atoi(str);
        }
        else if(isalpha(ch))
        {                                           // 文字列を読み返す
            while(isalpha(*p=in.get())) p++;
            in.putback(*p);                         // 文字列をストリームへ返す
            *p = '\0';                              // ヌルで文字列終了
            std::cout << "String: " << str;
        }
        else in.get();                              // 無視
        std::cout << '\n';
    }   while(!in.eof());

    in.close();
    return 0;
}
//オブジェクトを返すとエラーが発生
#include<iostream>
#include<cstring>

main()
{
    std::string *s;
    s = new std::string(100,'a');

    // 常に割り当ての成功を確かめる
    if(!s)
    {
        std::cout << "Allocation error for double\n";
        return 1;
    }

    *s = "This is a test";
    std::cout << "Here is string at a: " << *s << "\n";
    
    delete s;
    return 0;
}
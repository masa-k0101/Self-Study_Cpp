#include<iostream>
#include<cstring>

// 簡単な入力マニュピレータ
std::istream &getpass(std::istream &stream)
{
    std::cout << '\a';      // ベルを鳴らす
    std::cout << "Enter password: ";

    return stream;
}

main()
{
    char pw[80];

    do  {
            std::cin >> getpass >> pw;
        }
        while (strcmp(pw, "password"));

    std::cout << "Logon complete";

    return 0;
}
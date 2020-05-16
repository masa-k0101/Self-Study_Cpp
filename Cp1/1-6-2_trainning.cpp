#include<iostream>

void data(const char *data);  //文字列の日付
void data(int month, int day, int year); //数の日付

main()
{
    data("8/23/91");
    data(8,23,91);
    return 0;
}

// 文字列の日付
void data(const char *data)
{
    std::cout << "Date: " << data << "\n";
}

//整数の日付
void data(int month, int day, int year)
{
    std::cout << day << "/" << month << " '" << year << "\n"; 
}
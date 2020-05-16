#include<iostream>

#define Delay 100000

void sleep(int a);
void sleep(const char *a);

main()
{
    std::cout << "Say! ";
    sleep(10000);
    std::cout << "Say! ";
    sleep("10");
    return 0;
}

void sleep(int a)
{
    long i;

    for(; a; a--)
        for(i=0; i<Delay; i++);
    std::cout << "Hello world\n";
}

void sleep(const char *a)
{
    long i;
    int j;
    j = atoi(a);
    for(; j; j--)
        for(i=0; i<Delay; i++);
    std::cout << "Hello world\n";
}
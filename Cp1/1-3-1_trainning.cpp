/*
    This is C-style commnent
*/

/*
    This is a multi-line comment
    inside of which // is nested a single line comment
    Here is the end of the multi-line comment
*/

#include<iostream>

main()
{
    int num;
    // Read a number
    std::cout << "Enter number to be tested: \n";
    std::cin >> num;

    // Distinguish even and odd
    if((num%2)==0)  std::cout << "Number is even \n";
    else            std::cout << "Number is odd \n";

    return 0;
}
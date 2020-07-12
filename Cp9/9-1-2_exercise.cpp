#include<iostream>
using namespace std;

ostream &sethex(std::ostream &stream)
{
    stream.setf(ios::hex | ios::uppercase | ios::showbase);

    return stream;
}

ostream &reset(std::ostream &stream)
{
    stream.unsetf(ios::hex | ios::uppercase | ios::showbase);

    return stream;
}

main()
{
    cout << sethex << 100 << '\n';
    cout << reset << 100 << '\n';

    return 0;
}
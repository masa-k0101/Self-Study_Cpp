#include<iostream>
using namespace std;

class summation
{
    int num;
    long sum;
    public:
        void set_sum(int n);
        void show()
        {
            cout << num << " summed is " << sum << "\n";
        }
};

void summation::set_sum(int n)
{
    int i;
    num = n;

    sum = 0;
    for(i=0; i<=n; i++)
        sum += i;
}

summation make_sum()
{
    int num;
    summation temp;

    cout << "Please input a number: ";
    cin >> num;
    temp.set_sum(num);
    return temp;

}

main()
{
    summation ob;

    ob = make_sum();
    ob.show();
    return 0;
}
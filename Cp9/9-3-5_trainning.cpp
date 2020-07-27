// gcount()の例
#include<iostream>
#include<fstream>

main()
{
    std::ofstream out("test");
    if(!out)
    {
        std::cout << "Cannot open output file.\n";
        return 1;
    }

    double nums[4] = {1.1, 2.2, 3.3, 4.4 };
    
    out.write((char *) &nums, sizeof(nums));
    out.close();

    std::ifstream in("test");
    if(!in)
    {
        std::cout << "Cannot open input file.\n";
        return 1;
    }

    in.read((char *) &nums, sizeof(nums));

    int i;
    for(i=0; i<4; i++)
        std::cout << nums[i] << ' ';

    std::cout <<'\n';

    std::cout << in.gcount() << " charcters read\n";
    in.close();

    return 0;
}
#include <iostream>
#include "string.h"

int main()
{

    String s1 = "jewel";
    String s2 = "rana";

    std::cout << (s1 = s2) << std::endl;

    return 0;
}
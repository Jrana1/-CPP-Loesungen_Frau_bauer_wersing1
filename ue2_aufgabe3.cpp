#include <iostream>
using namespace std;

int main()
{

    int i;                       // declare an integer
    int *ip;                     // declare a pointer of type integer
    int *const cp = &i;          // declare a constant pointer of type integer and assign address of i in it.
    const int ci = 7;            // declare and define const of type integer
    const int *cip;              // declare a constant pointer of type integer.
    const int *const cicp = &ci; // constant pointer of a constant ineger type

    return 0;
}
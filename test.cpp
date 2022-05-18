#include <iostream>
#include <string.h>
#include "artikel.h"
using namespace std;
int foo(int *a, int len)
{
    int x = 0, y = 0, z = 0;
    for (int i = 0; i < len; i++)
    {
        x = x + a[i];
        y = 0;
        for (int j = 0; j < len; j++)
        {
            y = y + a[j];
            z = 0;
            for (int k = 0; k < len; k++)
            {
                z = 3;
            }
        }
        x = x + y;
    }
    return (x + y + z);
}
int fool(int *a, int len)
{
    int sum = 0;
    for (int i = 0; i < len; i++)
    {
        sum += a[i];
    }
    return (sum * (len + 2) + 3);
}
int main()
{
    int a[3] = {3, 2, 1};
    cout << foo(a, 3) << " " << fool(a, 3) << endl;

    return 0;
}
#include <iostream>
using namespace std;
#include <math.h>

double M[10] = {0};
double st(int n, double a)
{
    if (n == 0)
    {

        M[n] = (sqrt(3) / 4) * (a * a);
        return M[n];
    }
    else
    {

        if (M[n - 1] == 0)
        {
            M[n - 1] = st(n - 1, a / 2);
        }
        return 3 * M[n - 1];
    }
}

int main()
{
    cout << st(2, 1) << endl;
    for (int i = 0; i < 2; i++)
    {
        cout << M[i] << endl;
    }
    return 0;
}
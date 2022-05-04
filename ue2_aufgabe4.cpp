#include <iostream>
using namespace std;
void swapi_using_pointer(int *a, int *b)
{
    // swap using xor operator
    *a = (*a) ^ (*b);
    *b = (*a) ^ (*b);
    *a = (*a) ^ (*b);
}
void swapi_using_referenz(int &a, int &b)
{

    int temp = a;
    a = b;
    b = temp;
}
int main()
{

    int a = 20, b = 32;
    int x = 22, y = 42;
    cout << "before swap a= " << a << ", before swap b=" << b << endl;
    swapi_using_pointer(&a, &b);
    cout << "after swap a= " << a << ", after swap b=" << b << endl;
    cout << "before swap x= " << x << ", before swap y=" << y << endl;
    swapi_using_referenz(x, y);
    cout << "after swap x= " << x << ", after swap y=" << y << endl;
    return 0;
}
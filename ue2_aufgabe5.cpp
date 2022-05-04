#include <iostream>
using namespace std;
typedef struct bar_t
{
    int x;
    int y;

} bar_t;
void foo(bar_t &b);
void foo(bar_t *b);
void display(bar_t &b);
int main()
{

    bar_t b1;
    // foo(&b1);
    foo(b1);
    display(b1);
    return 0;
}
// here both functions are having same name. So Overloading  of function will happen.
// if we call foo with address of a object then the secound will be called.
// if we call foo with value then the first one will be called
void foo(bar_t &b)
{
    cout << "i was called by c++ referenz" << endl; // for testing
    b.x = 1;
    b.y = 2;
}
void foo(bar_t *b)
{
    cout << "i was called by address(pointer)" << endl; // for testing
    b->x = 3;
    b->y = 5;
}
void display(bar_t &b)
{

    cout << "x = " << b.x << " ,y= " << b.y << endl;
}
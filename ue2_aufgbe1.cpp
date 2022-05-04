#include <iostream>
using namespace std;
void paul(int a = 17, int b = 4)
{
    cout << " a = " << a;
    cout << " b = " << b << endl;
}
int main()
{
    paul();      // hier wird die function ohne argumente aufgerufen. deswegen beim Aufruf die default werte a=17,b=4. daher Ausgabe a=17,b=4 ;
    paul(20);    // a=20,b=4(default value)
    paul(20, 1); // a=20,b=1
    // paul(,1);//statement is not complete
    return 0;
}

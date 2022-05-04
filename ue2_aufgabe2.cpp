
#include <iostream>
using namespace std;
int rana(long i, double r, int j = 3)
{
    cout << "von long ,double,int" << endl;
    cout << "i = " << i << ", r= " << r << ", j= " << j << endl;
}
int rana(int i, long j, double r)
{
    cout << "von int,long,int" << endl;
    cout << "i = " << i << ", r= " << r << ", j= " << j << endl;
}
int rana(int i, int j)
{
    cout << "i = " << i << ", j= " << j << endl;
}
int main()
{
    // rana(1, 'b'); //'b' wird von compiler als assci code also integer interpratiert
    // rana(1L, 1.0, 1);
    rana(2.3, 2.3); // zweite argument ist double und dritte element fehlt. deswegen die zweite func wird aufgerufen.
    // rana(2.3,1L,1);fehler meldung.

    return 0;
}
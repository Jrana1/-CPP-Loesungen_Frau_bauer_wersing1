#include <iostream>
using namespace std;
#include <string.h>
class Airtikel
{

private:
    char name[32];
    long nr;
    double preis;

public:
    Airtikel(const char *, long, double);
    Airtikel(const char * = " ");
    void display(Airtikel const &);
    ~Airtikel()
    {
        cout << "invoced" << endl;
    }
};
Airtikel::Airtikel(const char *name)
{
    strncpy(this->name, name, 31);
    this->name[31] = '\0';
    this->preis = 0.0;
}
Airtikel::Airtikel(const char *name, long nr, double prs)
{
    strncpy(this->name, name, 31);
    this->name[31] = '\0';
    this->preis = (prs > 0.0) ? prs : 0.0;
    this->nr = nr;
    cout << "konstruktor" << endl;
}
void Airtikel::display(Airtikel const &ar)
{
    Airtikel tmp = ar;
    cout << tmp.name << endl;
}
int main()
{
    Airtikel a1("kaffe");
    // a2 = a1;
    a1.display(a1);

    return 0;
};
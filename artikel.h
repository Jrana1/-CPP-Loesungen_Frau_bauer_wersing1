#include <ctype.h>
#include <iostream>
#include <string.h>
using namespace std;
class Artikel
{
    char name[21];
    long nr;
    double preis;

public:
    void init(const char *, long, double);
    void display();
};

// Method implementation
void Artikel::init(const char *name, long nr, double pr)
{
    strcpy(this->name, name);
    this->nr = nr;
    this->preis = pr;
}
void Artikel::display()
{

    cout << this->name;
}
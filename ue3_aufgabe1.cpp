#include <iostream>
using namespace std;
#include <string.h>
#include <stdlib.h>
class PKW
{

private:
    char *marke;
    unsigned long fgstnr;
    unsigned int leistung;

public:
    PKW();
    PKW(unsigned long fgstnr, unsigned int leistung = 100, const char *marke = "mercedes");
    ~PKW();
};
PKW::~PKW()
{
    delete[] this->marke;
    cout << "des" << endl;
}
PKW::PKW()
{
    cout << "default" << endl;
}
PKW::PKW(unsigned long fgstnr, unsigned int leistung, const char *marke)
{
    this->fgstnr = fgstnr;
    this->leistung = leistung;
    // this->marke = new char[15];
    int len = strlen(marke);
    this->marke = new char[len + 1];
    strncpy(this->marke, marke, len);
    this->marke[len + 1] = '\0';
    cout << "Pkw der Marke " << this->marke << " mit Fahrgestellnummer " << this->fgstnr << " und leistung " << this->leistung << " erzeugt\n";
}
int main()
{
    char name[] = "bla";
    PKW p1;
    p1 = PKW(23, 41, "jewel");
    return 0;
}
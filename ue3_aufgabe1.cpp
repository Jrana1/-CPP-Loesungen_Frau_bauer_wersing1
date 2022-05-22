#include "pkw.h"
#include <iostream>
#include <string.h>
using namespace std;

PKW::PKW()
{
    this->leistung = 100;
}
void PKW::display()
{

    cout << "marke ist " << this->marke << ", frgs nr ist " << this->fgstnr << " und leistung ist " << this->leistung << endl;
}
PKW::PKW(unsigned int frgsnr, unsigned long lesitung, const char *marke)
{

    this->fgstnr = frgsnr;
    this->leistung = lesitung;
    int len = strlen(marke);
    this->marke = new char[len + 1];
    strncpy(this->marke, marke, len);
    this->marke[len] = '\0';
}
PKW::~PKW()
{
    delete[] this->marke;
    cout << "des" << endl;
}
int main()
{
    PKW *p2;
    p2 = new PKW(23, 138, "bmw");
    p2->display();
    delete p2;
    cout << "after" << endl;
    PKW p1(32, 929, "bm2");
    PKW p3, p4;
    p3 = p1;

    p3.display();

    return 0;
}
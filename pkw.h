#ifndef PKW_H
#define PKW_H
#include <iostream>
using namespace std;

class PKW
{
private:
    char *marke;
    unsigned long fgstnr;
    unsigned int leistung;

public:
    PKW();
    ~PKW();
    PKW(unsigned int fgstnr, unsigned long leistung = 100, const char *marke = "Mercedes");
    unsigned int getFgstnr() const;
    unsigned long getLeistung() const;
    const char *getMarke() const;
    void setFgstnr(unsigned int) const;
    void setLeistung(unsigned long) const;
    void getMarke(const char *) const;
    void display();
};

#endif // PKW_H
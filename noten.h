#ifndef _NOTEN_H_
#define _NOTEN_H_
#include <iostream>
using namespace std;

class Note
{
private:
    float value;
    Note *next;
    Note *head;

public:
    Note(float value);
    Note(){};
    inline float getValue(Note *n) const;
    inline void setValue(float val);
    inline Note *getNext() const;
    inline void setNext(Note *n);
    void print() const;
};
class NotenListe
{

private:
    Note *first;
    Note *last;

public:
    NotenListe(int size = 0);
    Note *begin() const;
    Note *end() const;
    void addNote(float val);
    double calculateAvarage() const;
    bool isEmpty();
    unsigned int size() const;
    void print() const;
};
#endif
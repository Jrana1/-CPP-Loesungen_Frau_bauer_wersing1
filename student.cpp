#include <iostream>
using namespace std;
#include "noten.h"
#include <stdlib.h>
#include <time.h>
Note *first = NULL, *tail = NULL;
Note::Note(float val)
{

    //    Note *newNote = (Note *)malloc(sizeof(Note));
    Note *newNote = new Note();
    newNote->value = val;
    newNote->next = NULL;
    if (first == NULL)
    {
        first = newNote;
        tail = newNote;
    }
    else
    {
        setNext(newNote);
    }
}
Note *NotenListe::begin() const
{
    return this->first;
}
Note *NotenListe::begin() const
{
    return this->last;
}
Note *Note::getNext() const
{
    return first->next;
}
void Note::setValue(float val)
{
    this->value = val;
}
void Note::print() const
{
    Note *tmp = first;
    while (tmp != NULL)
    {
        cout << tmp->value << endl;
        tmp = tmp->next;
    }
}
NotenListe::NotenListe(int size)
{
    this->first = NULL;
    this->last = NULL;
    srand(time(NULL));

    for (int i = 0; i < size; i++)
    {
        float val = rand() % 10 + 1;
        Note n(val);
    }
}
void Note::setNext(Note *n)
{

    tail->next = n;
}
float Note::getValue(Note *n) const
{
    return n->value;
}
int main()
{
    NotenListe l1(4);

    return 0;
}
#include <iostream>
using namespace std;
#include <algorithm>
#include <string>
class Person
{

private:
    int id;
    string name;

public:
    Person() { id = 0; }
    Person(int id, string name);
    // inline string const *getName() const;
    void display() const;
    ~Person();
};
Person::~Person()
{
    cout << " destructor wurde aufgerufen\n";
}
Person::Person(int id, string name)
{
    this->id = id;
    this->name = name;
}
void Person::display() const
{
    cout << "name = " << this->name << " id = " << this->id << endl;
}

int main()
{
    // Person *a;
    // a = new Person[2];
    // a[0] = Person(32, "jewel");
    // a[1] = Person(22, "rana");
    // a->display();
    // delete a;

    Person **a;
    a = new Person *[2];
    a[0] = new Person[2];
    a[1] = new Person[2];
    a[0][0] = Person(23, "Rana");
    // a[0][1] = Person(2, "jewel");
    // a[1][0] = Person(88, "shuvo");
    // a[1][1] = Person(77, "islam");
    (*(a + 1))->display();

    return 0;
}
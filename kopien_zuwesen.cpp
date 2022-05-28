#include <iostream>
using namespace std;
#include <string.h>

class Student
{
private:
    char *name;
    char *city;

public:
    Student(char const *name = " ", char const *city = " ")
    {
        this->name = new char[strlen(name)];
        this->city = new char[strlen(city)];
        strcpy(this->name, name);
        strcpy(this->city, city);
    }
    void display()
    {
        cout << "name = " << this->name << ", city = " << this->city << endl;
    }
    ~Student()
    {
        delete[] name;
        delete[] city;
        cout << "i was called" << endl;
    }
    // void assign(Student const &s)
    // {

    //     delete[] name;
    //     delete[] city;
    //     name = strdup(s.name);
    //     city = strdup(s.city);
    // }
    void operator=(Student const &s)
    {
        if (this != &s)
        {
            delete[] name;
            delete[] city;
            name = strdup(s.name);
            city = strdup(s.city);
        }
    }
};
void pri(Student &s)
{
    s = s;
    // tmp.assign(s);
    s.display();
}
int main()
{

    Student s1("jewel", "Frankfurt");
    pri(s1);
    s1.display();
    return 0;
}
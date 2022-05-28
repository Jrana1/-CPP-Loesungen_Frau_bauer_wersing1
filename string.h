#ifndef _STRING_
#define _STRING_
#include <iostream>
#include <string.h>
using namespace std;
class String
{
private:
    char *str;

public:
    String(const char *str)
    {
        int len = strlen(str);
        this->str = new char[len + 1];
        strncpy(this->str, str, len + 1);
        this->str[len + 1] = '\0';
    }
    ~String()
    {
        delete[] str;
    }
    void display()
    {
        cout << this->str << endl;
    }
    int length()
    {
        int count = 0;
        for (int i = 0; this->str[i] != '\0'; i++)
        {
            count++;
        }
        return count;
    }
    bool operator=(String &str)
    {
        int len1 = this->length();
        int len2 = str.length();
        if (len1 != len2)
        {
            return false;
        }
        for (int i = 0; i < len2; i++)
        {
            if (str.str[i] != (this->str[i]))
            {
                return false;
            }
        }
        return true;
    }
    bool operator>(String &s)
    {
        int len1 = this->length();
        int len2 = s.length();
        if (len1 > len2)
        {
            return true;
        }
        for (int i = 0; i < len2; i++)
        {
            if (this->str[i] < s.str[i])
            {
                return false;
            }
        }
        return true;
    }
};
#endif
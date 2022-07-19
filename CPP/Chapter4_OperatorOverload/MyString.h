#ifndef __MYSTRING_H__
#define __MYSTRING_H__
#include <ostream>
#include <istream>

using namespace std;

class MyString {
        friend ostream &operator<<(ostream &os, const MyString &out_str);
        friend istream &operator>>(istream &is, MyString &in_str);
    public:
        MyString(const char *src = nullptr);
        MyString(const MyString &another);
        MyString &operator=(const MyString &another);

        bool operator==(const MyString &another);
        bool operator!=(const MyString &another);
        bool operator>(const MyString &another);
        bool operator<(const MyString &another);
        bool operator>=(const MyString &another);
        bool operator<=(const MyString &another);
        MyString operator+(const MyString &another);
        MyString &operator+=(const MyString &another);

        char &operator[](int idx);
        char at(int idx);
        const char *c_str();
        ~MyString();

        // utils
        static int my_strlen(const char *src);
        static char *my_strcpy(char *dst, const char *src);
        static int my_strcmp(const char *s1, const char *s2);
        static char *my_strcat(char *dst, const char *src);

    private:
        char *_str;
};

#endif

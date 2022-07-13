#ifndef CPP_CHAPTER2_CLASS_MYSTRING_H_
#define CPP_CHAPTER2_CLASS_MYSTRING_H_

class MyString {
    public:
        MyString(const char *src = nullptr);
        MyString(const MyString &another);
        MyString &operator=(const MyString &another);
        ~MyString();
        void dis();
    private:
        char *_str;
};

#endif //CPP_CHAPTER2_CLASS_MYSTRING_H_

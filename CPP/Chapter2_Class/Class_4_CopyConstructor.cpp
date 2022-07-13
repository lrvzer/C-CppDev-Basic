#include <iostream>

using namespace std;

/*
 由普通数值作参数完成构造：constructor
 由同类对象作参数完成构造：copy constructor

 copy constructor
 （1）系统提供了默认的拷贝构造器，格式比较固定，一经实现，不复存在
 （2）此拷贝构造器不是空的，提供了一个等位拷贝机制
 （3）系统提供的默认拷贝构造器，是一种浅拷贝，shallow copy
 （4）deep copy

 shallow copy
 如果对象中不含有堆上的空间（*），此时浅拷贝可以满足需求，不需要自实现
 如果对象中含有堆上的空间（*），此时浅拷贝不可以满足需求，需要自实现

 浅拷贝会带来重析构，double free
 */

class DataStr {
    public:
        DataStr();
        DataStr(const DataStr &another);
        void dis();
        void setStr(const char *src);
        ~DataStr();
    private:
        char *_str;
};

DataStr::DataStr() {
    _str = new char[1024];
    strcpy(_str, "hello, world!");
    cout << "DataStr() " << this << endl;
}

DataStr::DataStr(const DataStr &another) {
    _str = new char[strlen(another._str) + 1];
    strcpy(_str, another._str);
    cout << "DataStr(const DataStr &another) " << this << " copy form " << &another << endl;
}

DataStr::~DataStr() {
    delete[] _str;
    cout << "~DataStr() " << this << endl;
}

void DataStr::dis() {
    cout << _str << endl;
}

void DataStr::setStr(const char *src) {
    strcpy(_str, src);
}

void func(DataStr data_str) {

}

void foo(DataStr &data) {

}

int main() {
//    DataStr d1;
//    d1.dis();
//
//    DataStr d2(d1);
//    d2.dis();
//
//    d1.setStr("very nice");
//    d1.dis();
//    d2.dis();

    DataStr d1;
//    DataStr d2(d1);
//    func(d1);
    foo(d1);
    return 0;
}
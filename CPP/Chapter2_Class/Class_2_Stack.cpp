#include <iostream>

using namespace std;

/** 构造器
1.与类名相同, 在对象生成的时候自动调用
2.无返回值, 可以有参数，可以有默认参数, 可以被重载
3.系统提供默认无参空体构造器, 一经自实现, 系统提供的默认构造器不复存在
   无论重载还是默认参数, 应该把无参空体构造器包含进来
   生成无参的对象, 是一种比较常见的现象, 比如对象数组
 */

/* 析构器
1.同类名，无参，无返回，前面加"~"
2.在对象被销毁前自动被调用，被调用用于处理清理工作（堆对象）
3.在对象被销毁前，栈上对象，堆上的对象
4.系统提供一个空体析构器

一、析构器不是必须的
 （1）在没有堆空间对象中，默认的就好
 （2）在对象有堆空间的情形下，必须要有

二、析构器，在对象销毁时自动调用
 */

/* 内存特点
 C++内存特点
 内存管理层次分明，只对本层的内存负责

 C语言内存特点
 申请空间：从外到内
 释放空间：从内到外
 */

// 栈
class MyStack {
    public:
        MyStack(int s = 1024);
        bool isFull(); // 是否栈满
        bool isEmpty(); // 是否栈空
        void push(char ch); // 入栈
        char pop(); // 出栈
        ~MyStack();
    private:
        int top; // 栈顶
        char *data; // 数据域
        int size; // 栈空间大小
};

MyStack::MyStack(int s) : top(0), size(s), data(new char[s]) {}

// 对象中有堆空间使用，需要析构函数
MyStack::~MyStack() {
    delete[] data;
}

bool MyStack::isEmpty() {
    return top == 0;
}

bool MyStack::isFull() {
    return top == size;
}

void MyStack::push(char ch) {
    data[top++] = ch;
}

char MyStack::pop() {
    return data[--top];
}

int main() {
    MyStack s;
    for (char ch = 'a'; ch <= 'z'; ++ch) {
        s.push(ch);
    }

    cout << "Stack is full?  " << s.isFull() << endl;

    while (!s.isEmpty()) {
        cout << s.pop() << '\t';
    }

    MyStack *ps = new MyStack(100);
    delete ps;

    return 0;
}
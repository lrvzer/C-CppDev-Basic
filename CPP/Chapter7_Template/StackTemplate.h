//
// Created by Lrwei on 2022/7/25.
//

#ifndef CPP_CHAPTER7_TEMPLATE_STACKTEMPLATE_H_
#define CPP_CHAPTER7_TEMPLATE_STACKTEMPLATE_H_

template<typename T>
class Stack {
    public:
        Stack(int size = 1024);
        ~Stack();
        bool isEmpty();
        bool isFull();
        void push(T data);
        T pop();
    private:
        T *space;
        int top;
};

#endif //CPP_CHAPTER7_TEMPLATE_STACKTEMPLATE_H_

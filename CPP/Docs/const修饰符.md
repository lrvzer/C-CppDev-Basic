## const & constant

```c++
int a;
// const int a;
// int const a;
```

## const & pointer

```C++
int *p;
// const int *p; // 指向可以改变，指向内容不可变(*p=0(error))
// int const *p;
	
// int * const p; // 指向内容可以改变，指向不可改变(p = &a (error))
// const int * const p; // 指向和指向内容都不可改变
```

## const & const_cast

```

```

## const & function overload

```C++
int add(int &a, int &b) {
    return a + b;
}

int add(const int &a, const int &b) {
    return a + b;
}

// 类成员函数重载
class A {
	void foo() {}
	void foo() const {}
};
```

## const & class

```
1.修饰类数据成员
      必须要初始化：一种类内初始化，一种初始化列表初始化；一经初始化，不可更改
      可被普通成员函数和常成员函数使用
2.修饰类成员函数
      修饰位置：
        class A {
            void foo() {} // 
            void foo() const; //类内定义
            void func() const {
            }
        };

        void A::foo() const { // 类外声明仍然需要const修饰符
        }

      const修饰的函数内部不会发生改变数据成员的行为，且函数内部只能调用const修饰的成员函数

3.修饰类对象
      修饰类成员函数构成的重载函数时：
        非const对象，优先调用非const版本；const对象只能调用const版本
```




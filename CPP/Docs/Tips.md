## `reference`

- Object和其reference的大小相同，地址也相同
- reference通常不用与声明变量，而用于参数类型（parameters type）和返回类型（return type）的描述

## `friend`

友元运算符

- 自由取得friend的private成员
- 相同class的各个objects互为friends(友元)

## Operator Overload

### `new`操作

```C++
Complex* pc = new Complex(1, 2);
```

编译器转化为：先分配memory，在调用ctor

```C++
void* mem = operator new(sizeof(Complex));  // 内部调用了malloc(n)，分配内存
pc = static_cast<Complex*>(mem);            // 转型
pc->Complex::Complex(1, 2);                 // 构造函数
```

### `delete`操作

```C++
delete pc;
```

编译器转化为：先调用dtor，再释放memory

```C++
String::~String(pc);  // 析构函数
operator delete(pc);    // 释放内存  内部调用free(pc)
```

## `static`相关

### 类型转换 `static_cast`

```c++

```

## 转换函数的本质也是构造函数

```c++
class 源类{
    operator 目标类() const { // const 建议加上
        return 目标类(源类实参);
    }
}
```

- 特点：无参数，无返回

## `explicit`

构造函数没有`explicit`修饰 - non explicit
explicit修饰构造器时，类声明是不可进行隐式转化，必须使用构造器对类进行实例化
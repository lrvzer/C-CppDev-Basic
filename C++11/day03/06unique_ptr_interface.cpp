#include <iostream>
#include <memory>

using namespace std;

class Copy
{
public:
    Copy(int i = 0) : _i(new int(i))
    {
        cout << "Copy(int i) " << this << endl;
    }
    Copy(const Copy &another)
        : _i(new int(*another._i))
    {
        cout << "Copy(const Copy &another)" << endl;
    }
    ~Copy()
    {
        cout << "~Copy() " << this << endl;
    }
    void dis()
    {
        cout << "*_i = " << *_i << endl;
    }
    int *_i;
};

int main() {
    unique_ptr<Copy> up(new Copy(78));
    unique_ptr<Copy> up2(std::move(up));
    up2->dis();
    // up->dis();
    return 0;
}

#if 0
int main()
{
    {
        unique_ptr<Copy> up(new Copy(78));
        // up.reset();
        up.reset(new Copy(199)); // reset 如果参数空，直接释放，非空托管新
        cout << "======" << endl;
    }
    cout << "++++++" << endl;

    return 0;
}
#endif

#if 0
int main(int argc, char *argv[])
{
    {
        // unique_ptr<Copy> up;
        unique_ptr<Copy> up(new Copy);

        if (!up)
        {
            cout << "no resource" << endl;
        }
        else
        {
            cout << "has resource" << endl;
        }
        cout << up.get() << endl; // 所托管资源的指针

        Copy *p = up.release(); // 放弃托管，返回资源句柄
        cout << p << endl;
        delete p;

        cout << "======" << endl;
    }
    cout << "++++++" << endl;

    return 0;
}
#endif
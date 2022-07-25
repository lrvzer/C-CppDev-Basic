#include <iostream>
#include <thread>

using namespace std;

// void func(int &n, string &s)
void func(int n, string s)
{
    for (int i = 0; i < n; i++)
    {
        cout << s << endl;
    }

    n = 100;
    s = "China n";
}

int main()
{
    int n = 5;
    string str = "China";

    // thread t(func, std::ref(n) , std::ref(str));
    thread t(func, n, str);

    t.detach();
    if (t.joinable()) {
        t.join();
    }
    // t.join();
    // cout << n << " " << str << endl;

    return 0;
}

#if 0
void func()
{
    cout << "func thread: " << this_thread::get_id() << endl;
    this_thread::sleep_for(chrono::seconds(5));
}

int main()
{
    cout << "main thread: " << this_thread::get_id() << endl;
    thread t(func);
    t.join();
    cout << "thread is over" << endl;
    return 0;
}
#endif
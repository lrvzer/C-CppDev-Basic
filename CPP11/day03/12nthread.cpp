#include <iostream>
#include <thread>

#define N 100

using namespace std;

void foo() {
    cout << "func thread: " << this_thread::get_id() << endl;
    this_thread::sleep_for(chrono::seconds(2));
}

int main() {

    thread th[N];
    for (int i = 0; i < N; i++)
    {
        th[i] = thread(foo);
    }
    

    return 0;
}
#include <iostream>
#include <list>

using namespace std;

void printList(list<int> &li) {
    for (auto &item: li) {
        cout << item << " ";
    }
    cout << endl;
}

int main() {

    list<int> li = {1, 3, 5, 7, 9};
    // erase use 1
//    li.erase(li.begin());

    // erase use 2
//    list<int>::iterator itr = li.begin();
//    advance(itr, 1);
//    li.erase(li.begin(), itr);

    // erase use 3
//    li.erase(li.begin(), ++li.begin());

//    li.remove(5);
    li.remove_if([](int x) -> bool { return x > 5; });
    printList(li);

    return 0;
}
#include <iostream>
#include <list>
using namespace std;

void printList(list<int> &li) {
    for (auto & item : li) {
        cout << item << " ";
    }
    cout << endl;
}

int main() {
    list<int> li = {1, 3, 5, 7, 9, 2, 4, 6, 8, 10, 2};
    cout << "Front: " << li.front() << endl;
    cout << "Back : " << li.back() << endl;
    printList(li);

//    li.pop_back();
//    li.push_back(99);
//    li.insert(li.begin(), 99);
//    li.erase(li.begin());

//    li.push_front(99);
//    li.pop_front();
//    li.remove(2);

    printList(li);
    return 0;
}
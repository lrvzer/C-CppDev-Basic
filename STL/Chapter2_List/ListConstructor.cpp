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

    int arr[10] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 10};
    list<int> liA(arr, arr + 10);
    printList(liA);

    list<int> liL(liA.begin(), liA.end());
    printList(liL);

    return 0;
}

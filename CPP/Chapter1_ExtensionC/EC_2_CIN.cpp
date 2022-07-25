#include <iostream>
using namespace std;

int main() {

    char buf[1024];
//    while (cin.getline(buf, 3)) {
    while (cin.getline(buf, 3, 'x')) {
        cout << buf << endl;
        cout << "\n cin.eof() : " << cin.eof()
             << "\n cin.fail(): " << cin.fail()
             << "\n cin.bad() : " << cin.bad()
             << "\n cin.good():    " << cin.good() << endl;
    }

    return 0;
}

//  int get();
//  istream& get (char& c);
//  istream& get (char* s, streamsize n);         //终止符为'\n'
//  istream& get (char* s, streamsize n, char delim);

int main2() {

    char buf[1024];
//    while (cin.get(buf, 2)) {
    while (cin.get(buf, 20, 'x')) {
        cout << buf << endl;
    }
    return 0;
}

int main1() {

    char ch;
#if 0
    while (cin >> ch , !cin.eof()) {
        cout << ch << endl;
    }
#endif

#if 0
    while ((ch = cin.get()) != EOF) {
        cout << ch << endl;
    }
#endif

#if 1
    while (cin.get(ch)) {
        cout << ch;
    }
#endif
    return 0;
}

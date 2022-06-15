#include <iostream>
#include <vector>

using namespace std;

class Compare {
    public:
        bool operator()(int x, int y) const {
//            cout << "x: " << x << endl;
//            cout << "y: " << y << endl;
            return x > y;
        }
};

int main() {
    vector<int> vi = {1, 2, 3, 11, 22, 33, 44, 55, 66, 77};
//    int count = count_if(vi.begin(), vi.end(), bind1st(greater<int>(), 10));
//    int count = count_if(vi.begin(), vi.end(), bind2nd(greater<int>(), 10));
//    int count = count_if(vi.begin(), vi.end(), bind(greater<int>(), 10, placeholders::_1));
//    int count = count_if(vi.begin(), vi.end(), bind(greater<int>(), placeholders::_1, 10));
    int count = count_if(vi.begin(), vi.end(), bind(Compare(), placeholders::_1, 10));
    cout << "count: " << count << endl;
    return 0;
}
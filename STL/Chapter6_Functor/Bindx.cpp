#include <iostream>
#include <vector>

using namespace std;

class Compare {
    public:
        bool operator()(int x, int y) const {
            return x >= y;
        }
};

int main() {
    vector<int> vi = {1, 5, 6, 7, 8, 9};
//    int count = count_if(vi.begin(), vi.end(), bind(Compare(), placeholders::_1, 5)); // x >= 5
//    int count = count_if(vi.begin(), vi.end(), bind(Compare(), 5, placeholders::_1)); // 5 >= x

    // 将5绑定为greater<int>()的第一个参数
//    int count = count_if(vi.begin(), vi.end(), bind1st(greater<int>(), 5)); // 5 > x

    // 将5绑定为greater<int>()的第二个参数
    int count = count_if(vi.begin(), vi.end(), bind2nd(greater<int>(), 5)); // x > 5

    cout << "count: " << count << endl;
    return 0;
}
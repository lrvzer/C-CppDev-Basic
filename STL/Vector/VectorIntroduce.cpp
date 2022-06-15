#include <iostream>
#include <vector>

class Compare {
    public:
        bool operator()(const int &x) const {
            return x > 5;
        }
        typedef int argument_type;
};

/*
 * --------------------------------
 * | front |                | back |
 * --------------------------------
 * |   1  |  2  ...      9  |  10  |
 * --------------------------------
 */
int main() {
    std::vector<int> vi = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::cout << "Front: " << vi.front() << std::endl;
    std::cout << "Back : " << vi.back() << std::endl;


//    vi.push_back(100);
    vi.pop_back();
    std::cout << "Front: " << vi.front() << std::endl;
    std::cout << "Back : " << vi.back() << std::endl;

    std::vector<int>::iterator itr;
    for (itr = vi.begin(); itr != vi.end(); ++itr) {
        std::cout << *itr << " ";
    }
    std::cout << std::endl;

//    int count = std::count_if(vi.begin(), vi.end(), std::not1(Compare()));
//    int count = std::count_if(vi.begin(), vi.end(), std::bind(std::greater<int>(), std::placeholders::_1, 5));
    int count = std::count_if(vi.begin(), vi.end(), std::not1(std::bind1st(std::greater<int>(), 5)));
    std::cout << count << std::endl;

    return 0;
}
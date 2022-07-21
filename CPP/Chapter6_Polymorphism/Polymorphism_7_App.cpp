#include <iostream>

using namespace std;

// Mother 依赖于 Book  依赖 -> 耦合

class IReader {
    public:
        virtual string getContents() = 0;
};

class Book : public IReader {
    public:
        virtual string getContents() {
            return "从前有座山，山里有座庙，庙里有个小和尚，听老和尚讲故事";
        }
};

class Newspaper : public IReader {
    public:
        virtual string getContents() {
            return "Trump要在黑西哥边境建一座墙";
        }
};

class EBook : public IReader {
    public:
        virtual string getContents() {
            return "郭文贵在美国瞎bb";
        }
};

class Mother {
    public:
        void tellStory(IReader *pi) {
            cout << pi->getContents() << endl;
        }
};

int main() {
    Mother m;
    Book b;
    Newspaper n;
    EBook eb;
    m.tellStory(&b);
    m.tellStory(&n);
    m.tellStory(&eb);
    return 0;
}

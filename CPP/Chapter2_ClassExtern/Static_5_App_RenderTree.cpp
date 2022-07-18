#include <iostream>

using namespace std;

// 对象创建、初始化、挂到树上

class CCSprite {
    public:
        CCSprite() {}

        bool init();
        void autoRelease();
        static CCSprite *create() {
            CCSprite *pRet = new CCSprite;
            if (pRet && pRet->init()) {
                pRet->autoRelease();
                return pRet;
            } else {
                delete pRet;
                pRet = nullptr;
                exit(-1);
            }
        }

        static void renderTree() {
            CCSprite *t = head;
            while (t) {
                cout << t->ch << endl;
                t = t->next;
            }
        }

    private:
        static CCSprite *head;
        CCSprite *next;
        char ch;
};

CCSprite *CCSprite::head = nullptr;

bool CCSprite::init() {
    cout << "initial" << endl;
    ch = rand() % (127 - 32) + 33;
    return true;
}

// 挂载到链表上
void CCSprite::autoRelease() {
//    if (head == nullptr) {
//        this->next = nullptr;
//        head = this;
//    } else {
    this->next = head;
    head = this;
//    }
}

int main() {
    srand(time(nullptr));

    CCSprite *pc1 = CCSprite::create();
    CCSprite *pc2 = CCSprite::create();
    CCSprite *pc3 = CCSprite::create();
    CCSprite *pc4 = CCSprite::create();

    CCSprite::renderTree();

    return 0;
}

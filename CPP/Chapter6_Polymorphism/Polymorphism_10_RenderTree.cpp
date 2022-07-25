#include <iostream>
#include <thread>
#include <unistd.h>
using namespace std;

class RenderShape {
    public:
        virtual void show() = 0;
        bool init(int x, int y) {
            _x = x;
            _y = y;
            return true;
        }

        static void RenderShapeList() {
            RenderShape *t = head;
            while (t) {
                t->show();
                t = t->next;
            }
        }

    protected:
        int _x;
        int _y;

        static RenderShape *head;
        RenderShape *next;
};

RenderShape *RenderShape::head = nullptr;

class Rectangle : public RenderShape {
    public:
        void autoRelease() {
            this->next = head;
            head = this;
        }

        static Rectangle *create(int x, int y, int w, int l) {
            Rectangle *pRet = new Rectangle;
            if (pRet && pRet->init(x, y, w, l)) {
                pRet->autoRelease();
            } else {
                delete pRet;
                pRet = nullptr;
            }
        }

        bool init(int x, int y, int w, int l) {
            RenderShape::init(x, y);
            _w = w;
            _l = l;
            return true;
        }

        virtual void show() {
            cout << "draw rectangle from (" << _x << ", " << _y << ") "
                 << "width " << _w << " length " << _l << endl;
        }
    protected:
        int _w;
        int _l;
};

class Circle : public RenderShape {
    public:
        void autoRelease() {
            this->next = head;
            head = this;
        }

        static Circle *create(int x, int y, int r) {
            Circle *pRet = new Circle;
            if (pRet && pRet->init(x, y, r)) {
                pRet->autoRelease();
            } else {
                delete pRet;
                pRet = nullptr;
            }
        }

        bool init(int x, int y, int r) {
            RenderShape::init(x, y);
            _r = r;
            return true;
        }

        virtual void show() {
            cout << "draw rectangle from (" << _x << ", " << _y << ") "
                 << "r " << _r << endl;
        }
    protected:
        int _r;
};

class Ellipse : public RenderShape {
    protected:
        int _long;
        int _short;
};

void threadTask() {
    while (1) {
        cout << "+++++++++++++++" << endl;
        RenderShape::RenderShapeList();
        sleep(2);
    }
}

int main() {

    thread _t(threadTask);

    while (1) {
        int choice;
        cin >> choice;
        switch (choice) {
            case 1:Rectangle::create(1, 2, 3, 4);
                break;
            case 2:Circle::create(4, 5, 6);
                break;
        }
    }
    return 0;
}

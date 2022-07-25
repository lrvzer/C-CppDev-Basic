#include <iostream>
#include <unistd.h>

using namespace std;

class Text
{
public:
    void showText()
    {
        cout << "好诗好诗好诗好诗好诗好诗好诗好诗好诗好诗好诗好诗好诗好诗" << endl;
    }
};

class ImageSubject
{
public:
    virtual void showImage() = 0;
};

class BigImage : public ImageSubject
{
public:
    BigImage()
    {
        sleep(6);
        cout << "我已经加载完毕，可以显示了" << endl;
    }

    void showImage()
    {
        cout << "清明上河图" << endl;
    }
};

class ProxyImage : public ImageSubject
{
public:
    ProxyImage()
    {
        bi = nullptr;
    }

    void showImage() {
        if (bi == nullptr) {
            bi = new BigImage;
        }
        bi->showImage();
    }

private:
    BigImage *bi;
};

class Doc
{
public:
    Doc()
    {
        t = new Text;
        pi = new ProxyImage;
    }
    void show()
    {
        t->showText();
        pi->showImage();
    }

private:
    Text *t;
    ProxyImage *pi;
};

int main()
{
    Doc d;
    d.show();
    return 0;
}
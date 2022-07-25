#include <iostream>
#include <fstream>

using namespace std;

struct info
{
    string ip;
    string port;
};

class Config
{
public:
    static Config *getInstance();

    string getIp()
    {
        return infor.ip;
    }

    string getPort()
    {
        return infor.port;
    }

private:
    info infor;
    static Config *_ins;
    Config()
    {
        fstream fs;
        fs.open("com.conf", ios::in | ios::out);
        if (!fs)
            cout << "open error";
        fs >> infor.ip;
        fs >> infor.port;
        fs.close();
    }
    ~Config() {}
    Config(const Config &another) = default;
    Config &operator=(const Config &another) = default;
};

Config *Config::_ins = nullptr;

Config *Config::getInstance()
{
    if (_ins == nullptr)
    {
        _ins = new Config;
    }
    return _ins;
}

class A
{
public:
    A()
    {
        Config *conf = Config::getInstance();
        cout << "ip:   " << conf->getIp() << endl;
        cout << "port: " << conf->getPort() << endl;
    }
};

class B
{
public:
    B()
    {
        Config *conf = Config::getInstance();
        cout << "ip:   " << conf->getIp() << endl;
        cout << "port: " << conf->getPort() << endl;
    }
};

int main()
{
    A a;
    B b;
    return 0;
}
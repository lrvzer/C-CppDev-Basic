#include <iostream>
using namespace std;

class Server {
    private:
        char _serverName;
        static int _turnCount;
        static bool _openFlag;
        static int _lastServedIdx;

    public:
        Server(char n) : _serverName(n) {}

        static int &getTurn() {
            return _turnCount;
        }

        void serverOne() {
            if (_openFlag && _lastServedIdx < _turnCount) {
                _lastServedIdx++;
                cout << "server " << _serverName << " is serving for " << _lastServedIdx << endl;
            }

            if (_lastServedIdx >= _turnCount) {
                _openFlag = false;
            }
        }

        static bool &stillOpen() {
            return _openFlag;
        }
};

int Server::_turnCount = 0;
bool Server::_openFlag = true;
int Server::_lastServedIdx = 0;

int main() {
    Server a('A'), b('B');

    do {
        cout << "How many people int group:";
        int num;
        cin >> num;

        for (int i = 0; i < num; i++) {
            cout << "idx:" << ++Server::getTurn() << endl;
        }
        a.serverOne();
        b.serverOne();
    } while (Server::stillOpen());

    return 0;
}

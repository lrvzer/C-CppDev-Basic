#include "AppDelegate.h"
#include <iostream>
using namespace std;

AppDelegate::AppDelegate() {

}

bool AppDelegate::applicationDidFinishLaunching() {
    cout << "游戏开始" << endl;
    return true;
}

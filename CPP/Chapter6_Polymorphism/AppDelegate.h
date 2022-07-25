//
// Created by Lrwei on 2022/7/25.
//

#ifndef CPP_CHAPTER6_POLYMORPHISM_APPDELEGATE_H_
#define CPP_CHAPTER6_POLYMORPHISM_APPDELEGATE_H_

#include "CCApplication.h"

class AppDelegate : private CCApplication {
    public:
        AppDelegate();
        virtual bool applicationDidFinishLaunching();
};

#endif //CPP_CHAPTER6_POLYMORPHISM_APPDELEGATE_H_

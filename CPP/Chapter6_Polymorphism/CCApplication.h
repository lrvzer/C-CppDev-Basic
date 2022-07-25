#ifndef CPP_CHAPTER6_POLYMORPHISM_CCAPPLICATION_H_
#define CPP_CHAPTER6_POLYMORPHISM_CCAPPLICATION_H_

#include "CCApplicationProtocol.h"

class CCApplication : public CCApplicationProtocol {
    public:
        CCApplication();
        int run();
        static CCApplication *sharedApplication();
    private:
        static CCApplication *sm_pSharedApplication;
};

#endif //CPP_CHAPTER6_POLYMORPHISM_CCAPPLICATION_H_

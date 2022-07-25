#include "CCApplication.h"

CCApplication *CCApplication::sm_pSharedApplication = 0;

CCApplication::CCApplication() {
    sm_pSharedApplication = this;
}

CCApplication *CCApplication::sharedApplication() {
    return sm_pSharedApplication;
}

int CCApplication::run() {
    return this->applicationDidFinishLaunching();
}

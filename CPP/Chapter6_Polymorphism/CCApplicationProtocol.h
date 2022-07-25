//
// Created by Lrwei on 2022/7/25.
//

#ifndef CPP_CHAPTER6_POLYMORPHISM_CCAPPLICATIONPROTOCOL_H_
#define CPP_CHAPTER6_POLYMORPHISM_CCAPPLICATIONPROTOCOL_H_

class CCApplicationProtocol {
    public:
        CCApplicationProtocol();
        virtual bool applicationDidFinishLaunching() = 0;
};

#endif //CPP_CHAPTER6_POLYMORPHISM_CCAPPLICATIONPROTOCOL_H_

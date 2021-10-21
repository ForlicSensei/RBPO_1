#include "lib.h"

    int CompareStrings(const char* lhs,const char* rhs) {
        for (; *lhs && *rhs && *lhs == *rhs; ++lhs, ++rhs)
            ;
        return *lhs - *rhs;
    };

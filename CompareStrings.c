#include "lib.h"

int CompareString(const char* lhs,const char* rhs) {
    int l_size = strlen(lhs);
    int r_size = strlen(rhs);
    for (int i = 0; i < l_size && i < r_size; i++)
        if (lhs[i] < rhs[i]) //a<z
            return -1;
        else if (lhs[i] > rhs[i]) //a>z
            return 1;
    if (l_size < r_size)
        return -1;
    else if (l_size > r_size)
        return 1;
    else return 0;
};

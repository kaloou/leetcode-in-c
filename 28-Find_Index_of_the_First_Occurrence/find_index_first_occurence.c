#include "stdbool.h"

int strStr(char* haystack, char* needle) {
    int i,j;
    i,j = 0;
    bool good;

    while (haystack[i] != '\0')
    {
        good = true;
        j = 0;
        while (needle[j] != '\0')
        {
            if (haystack[i + j] != needle[j])
            {
                good = false;
                break;
            }
            j++;
        }
        if (good)
            return i;
        i++;
    }
    return -1;
}

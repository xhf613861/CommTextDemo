#ifndef CPPPRIMERDEMO_H
#define CPPPRIMERDEMO_H


#include <string.h>

template <typename T>
int compare(const T &v1, const T &v2)
{
    if (v1 < v2) return -1;
    if (v2 < v1) return 1;
    return 0;
}

template<typename T, class U> T calc();

template<int N, int M>
int compare(const char (&p1)[N], const char (&p2)[M])
{
    return strcmp(p1, p2);
}

void testCPPPrimerDemo();

class CPPPrimerDemo
{
public:
    CPPPrimerDemo();
};

#endif // CPPPRIMERDEMO_H

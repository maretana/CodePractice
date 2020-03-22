#ifndef __PROD2SUM_H__
# define __PROD2SUM_H__
typedef struct Pair Pair;
struct Pair {
    long long first;
    long long snd;
};
Pair** prod2Sum(long long a, long long b, long long c, long long d, int* length);

#endif // !__PROD2SUM_H__

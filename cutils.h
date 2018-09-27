#ifndef Z_CUTILS_H
#define Z_CUTILS_H

#define countInt(x) (sizeof(x)/sizeof(int))
#define countF(x) (sizeof(x)/sizeof(float))
#define countD(x) (sizeof(x)/sizeof(double))
#define countLD(x) (sizeof(x)/sizeof(long double))
#define countS(x) (sizeof(x))

#define printBits(x) \
            int i = sizeof(x)*8-1; \
            while(i >= 0) { \
                printf("%d", x&(1<<i)?1:0); \
                if ((i&7) == 0) printf(" "); \
                i--; \
            }

#endif

#include "cutils.h"

void printBits(char *x, int qty) {
    for (int j = 0; j < qty; ++j) {
        int i = sizeof(x[j])*8-1;
        while(i >= 0) {
            printf("%d", x[j]&(1<<i)?1:0);
            if ((i&7) == 0) printf(" ");
            i--;
        }
    }
}

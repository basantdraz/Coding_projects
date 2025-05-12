#include <stdio.h>
#include <stdlib.h>

int main()
{
    int F, C;
    int L, S,  U;
    L = 0;
    U = 300;
    S = 2;
    F = L;
    while (F <= U){
        C=5*(F-32)/9;
        printf("%d\t%d\n",F,C);
        F=F+S;
    }
    }

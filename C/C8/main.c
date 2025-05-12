#include <stdio.h>
#include <stdlib.h>

int main()
{
    double nc;
    for(nc = 0 ; getchar() != EOF ; ++nc)
    printf("%1d\n", nc);
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num [3][2]={
    {12,2},
    {5,85},
    {59,22},
    };
    int i,j;
    for(i=0; i<3 ; i++){
        for (j=0; j<2; j ++){
            printf("%d," , num[i][j]);
        }
         printf("\n");
    }

    return 0;
}

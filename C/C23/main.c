#include <stdio.h>
#include <stdlib.h>

int main()
{
    char grade ;
    scanf("%c", &grade);
    switch (grade){
    case 'A':
    printf("XO\n");
    break;
    case 'B':
        printf("XD\n");

    break;
    case 'C':
        printf("X)\n");

    break;
    case 'D':
        printf("X(\n");

    break;
    case 'F':
        printf("X|\n");

    break;
    }

    return 0;
}

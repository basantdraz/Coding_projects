#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age = 30;
    int *page = &age;

    printf("%p\n", &age);
        printf("%p\n", page);
            printf("%d\n", *page);
    printf("%p\n", &page);


    return 0;
}

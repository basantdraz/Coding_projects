#include <stdio.h>
#include <stdlib.h>

int main()
{
    int secret= 2;
    int guess ;

    while (guess =! secret){
        printf("Enter a NO: ");
        scanf("%d", &guess);
    }

    printf("WINNER XD\n");
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char line [255];
    FILE *fpoint = fopen("EMO.txt", "r");
    fgets(line, 255, fpoint);
    printf("%s", line);

    //fprintf(fpoint, "boss ^^\n no x(");
    fclose(fpoint);

    return 0;
}

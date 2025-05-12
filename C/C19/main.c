#include <stdio.h>
#include <stdlib.h>

int main()
{
    do
    {
        int n = getchar ();
    }
    while ( n > 1);
    for (int i = 0 ; i < n ; i++)
    {
      for (int j = 0 ; j < n ; j++)
      {
          printf("#");
      }
      printf("\n");
    }

}


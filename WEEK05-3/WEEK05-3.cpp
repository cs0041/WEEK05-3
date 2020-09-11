#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i = 1, a;
    scanf_s("%d", &a);
    while (i <= a)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            printf("CozaLoza\t");
        }
        else
        {
            if (i % 3 == 0)
            {
                printf("Coza\t");
            }
            else
            {
                if (i % 5 == 0)
                {
                    printf("Loza\t");
                }
                else
                {
                    if (i % 7 == 0)
                    {
                        printf("Woza\t");
                    }
                    else
                    {
                        printf("%d\t", i);
                    }
                }
            }
        }
        if (i % 11 == 0)
        {
            printf("\n");
        }
        i++;
    }
    return 0;
}

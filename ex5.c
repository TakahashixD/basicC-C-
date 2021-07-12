#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[4][4], counta = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("\nEntre com um numero inteiro: ");
            scanf("%d", &num[i][j]);
        }

    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if(num[i][j] > 10)
            {
                counta++;
            }
        }

    }
    printf("A matriz possui %d numeros maiores que 10.", counta);

}

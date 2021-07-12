#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altura[15], maior, menor;
    for(int i = 0; i < 15; i++)
    {
        printf("%s","Escreva sua altura:");
        scanf("%f", &altura[i]);
    }
    maior = altura[0];
    menor = altura[0];
    for(int j = 0; j < 15; j++)
    {
        if(altura[j]>maior)
        {
            maior = altura[j];
        }
        else if(altura[j]<menor)
        {
            menor = altura[j];
        }
    }
    printf("\n\nMaior: %f\n", maior);
    printf("Menor: %f", menor);
    return 0;
}

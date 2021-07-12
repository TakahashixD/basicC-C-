#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 1, par = 0, impar = 0, total = 0;
    int sump = 0, sumi = 0, sumt = 0;
    while(num != 0)
    {
        printf("Escreva um numero:");
        scanf("%d", &num);
        total++;
        sumt = sumt + num;
        if(num%2 == 0 && num != 0)
        {
            sump = sump + num;
            par++;
        }
        else if(num%2 != 0)
        {
            sumi = sumi + num;
            impar++;
        }
    }
        printf("Quantidade de numeros pares: %d",par);
        printf("\nQuantidade de numeros impares: %d",impar);
        printf("\nMedia de valores pares: %d",sump/par);
        printf("\nMedia de valores gerais: %d",sumt/total);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int voto, c1 = 0, c2 = 0, c3 = 0;
    float n = 0, b =0;
    do
    {
        printf("1. Canditado Jair Rodrigues");
        printf("\n2. Canditado Carlos Luz");
        printf("\n3. Canditado Neves Rocha");
        printf("\n4. Nulo");
        printf("\n5. Branco");
        printf("\nEntre com o seu voto: ");
        scanf("%d", &voto);
        if(voto == 1)
        {
            c1++;
        }
        else if(voto == 2)
        {
            c2++;
        }
        else if(voto == 3)
        {
            c3++;
        }
        else if(voto == 4)
        {
            n++;
        }
        else if(voto == 5)
        {
            b++;
        }
        else{
            printf("\nNumero inserido invalido\n");
        }
    }
    while(voto != 6);
    if(voto ==6)
    {
        printf("Numero de votos do canditado Jair Rodrigues: %d", c1);
        printf("\nNumero de votos do canditado Carlos Luz: %d", c2);
        printf("\nNumero de votos do canditado Neves Rocha: %d", c3);
        printf("\nPorcentagem de votos nulos: %.2f%%", n/100);
        printf("\nPorcentagem de votos brancos: %.2f%%", b/100);
    }

    return 0;
}

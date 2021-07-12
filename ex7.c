#include <stdio.h>
#include <stdlib.h>
int dias_convert(int anos, int meses, int dias)
{
    int x;
    x = (anos*365)+(meses*30)+dias;
    return x;
}
int main()
{
    int anos, meses, dias, resultado;
    printf("Escreva os anos: ");
    scanf("%d", &anos);
    printf("Escreva os meses: ");
    scanf("%d", &meses);
    printf("Escreva os dias: ");
    scanf("%d", &dias);
    resultado = dias_convert(anos, meses, dias);
    printf("Sua idade em dias e: %d", resultado);
}

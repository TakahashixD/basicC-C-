#include <stdio.h>
#include <stdlib.h>

int main()
{
    float celsius[10], farenheit;
    for(int i = 0; i < 10; i++){
        printf("Entre com a temperatura em Farenheit:")/
        scanf("%f", &farenheit);
        float aux = (farenheit - 32)*5/9;
        celsius[i] = aux;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("\nTemperaturas em Celsius: %.4f", celsius[i]);
    }

}

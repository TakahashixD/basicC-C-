#include <stdio.h>
#include <stdlib.h>

float recebe3(float n1, float n2, float n3){
    float media;
    media = (n1+n2+n3)/3;
    return media;
}
int main()
{
    float n1, n2, n3;
    printf("Entre com a nota 1:");
    scanf("%f",&n1);
    printf("Entre com a nota 2:");
    scanf("%f",&n2);
    printf("Entre com a nota 3:");
    scanf("%f",&n3);
    if(recebe3(n1,n2,n3) >= 6){
        printf("Aprovado");
    }else{
        printf("Reprovado");
    }
    return 0;
}

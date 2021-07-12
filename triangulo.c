#include <stdio.h>

int main()
{
int x, y, z, aux;
printf("Digite os 3 lados de um triangulo:\n");
printf("lado 1: ");
scanf("%d", &x);
printf("lado 2: ");
scanf("%d", &y);
printf("lado 3: ");
scanf("%d", &z);

 if (y > x){
    aux = x;
    x = y;
    y = aux;
  }
 if (z > x){
    aux = x;
    x = z;
    z = aux;
  }
  
// verifica se y e z sao catetos de um triangulo com x de hipotenusa
if(x * x == y * y + z * z){
     printf("O triangulo é retangulo.");
//verifica se todos lados são iguais
}else if(x == y && x == z && y == z){
    printf("O triangulo é equilatero.");
//verifica se dois lados são iguais
}else if(x == y || x == z || y == z){
    printf("O triangulo é isosceles.");
//verifica se os lados são todos diferentes
}else if(x != y && x != z && y != z){
    printf("O trinagulo é escaleno.");
}
return 0;
}

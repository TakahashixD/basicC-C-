#include <stdio.h>

int main(void){
    float h, imc, peso;

    printf("Informe o seu peso em Kg:  ");
    scanf("%f", &peso);

    printf("Informe sua altura em M:  ");
    scanf("%f", &h);
   

imc = peso / (h*h); 

//1o    
    if(imc < 18.5){
        printf("Classificacao:\n %.2f: ABAIXO DO PESO.", imc);
    }

//2o    
    if(imc >= 18.6 && imc <= 24.9){
        printf("Classificacao:\n %.2f: NORMAL.", imc);
    }

//3o    
    if(imc >=25.0 && imc <= 29.9){
        printf("Classificacao:\n %.2f: SOBREPESO.", imc);
    }

//4o
    if(imc >= 30.0 && imc <= 39.9){
        printf("Classificacao:\n %.2f: OBESIDADE GRAU 1", imc);
    }    
   
//5o
    if(imc >= 40.0){
        printf("Classificacao:\n %.2f: OBESIDADE GRAU 3 [MORBIDA]", imc);
    }
    

return(0);
}
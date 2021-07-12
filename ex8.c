#include <stdio.h>
#include <stdlib.h>
int f1(int ano){
    int idade, categoria;
    idade = 2021 - ano;
    //sem categoria
    if(idade <= 4){
        categoria = 0;
        return categoria;
    }
    //Infantil A
    else if(idade >= 5 && idade <= 7){
        categoria = 1;
        return categoria;
    }
    //Infantil B
    else if(idade >= 8 && idade <= 10){
        categoria = 2;
        return categoria;
    }
    //Juvenil A
    else if(idade >= 11 && idade <= 13){
        categoria = 3;
        return categoria;
    }
    //Juvenil B
    else if(idade >= 14 && idade <= 17){
        categoria = 4;
        return categoria;
    }
    //Adulto
    else if(idade >= 18){
        categoria =5;
        return categoria;
    }
}
void f2(int categoria){
    if(categoria >= 4){
        printf("Pode participar do campeonato mundial de natacao.\n");
    }
    else{
        printf("Nao pode participar do campeonato mundial de natacao.\n");
    }

}
int main()
{
    int ano;
    printf("Entre com seu ano de nascimento: ");
    scanf("%d", &ano);
    f2(f1(ano));
}

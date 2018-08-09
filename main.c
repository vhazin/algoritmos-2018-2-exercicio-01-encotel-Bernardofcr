//
//  main.c
//  exercicioAug08
//
//  Created by Bernardo Russo on 08/08/18.
//  Copyright © 2018 Bernardo Russo. All rights reserved.
//

#include <stdio.h>
int main(void) {
    char telefone[20];
    printf("Digite o número de telefone usando codigo de characteres: ");
    scanf("%s", telefone);
    int i=0;
    printf("\nO telefone em código numérico é: \n");
    while (telefone[i]!='\0'){
        if (telefone[i]=='1'||telefone[i]=='0'||telefone[i]=='-'){
            printf("%c",telefone[i]);
        }
        if (telefone[i]>='A' && telefone[i]<='C'){
            printf("2");
        }
        if (telefone[i]>='D' && telefone[i]<='F'){
            printf("3");
        }
        if (telefone[i]>='G'&& telefone[i]<='I'){
            printf("4");
        }
        if (telefone[i]>='J' && telefone[i]<='L'){
            printf("5");
        }
        if (telefone[i]>='M' && telefone[i]<='O'){
            printf("6");
        }
        if (telefone[i]>='P' && telefone[i]<='S'){
            printf("7");
        }
        if (telefone[i]>='T' && telefone[i]<='V'){
            printf("8");
        }
        if (telefone[i]>='W' && telefone[i]<='Z'){
            printf("9");
        }
        i=i+1;
    }
    printf("\n");
    
    return 0;
}


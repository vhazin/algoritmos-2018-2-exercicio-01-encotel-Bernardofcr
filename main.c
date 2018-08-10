//
//  main.c
//  exercicioAug08
//
//  Created by Bernardo Russo on 08/08/18.
//  Copyright © 2018 Bernardo Russo. All rights reserved.
//

#include <stdio.h>
int main(void) {
    char telefone[31]="";
    char numero[31]="";
    int i;
    //printf("ENTRADA:\n");
    while (scanf("%s", telefone)!=EOF){
        i=0;
        while (telefone[i]!='\0'){
            if (telefone[i]=='1'||telefone[i]=='0'||telefone[i]=='-'){
                numero[i]=telefone[i];
            }
            else if (telefone[i]>='A' && telefone[i]<='C'){
                numero[i]=('2');
            }
            else if (telefone[i]>='D' && telefone[i]<='F'){
                numero[i]=('3');
            }
            else if (telefone[i]>='G'&& telefone[i]<='I'){
                numero[i]=('4');
            }
            else if (telefone[i]>='J' && telefone[i]<='L'){
                numero[i]=('5');
            }
            else if (telefone[i]>='M' && telefone[i]<='O'){
                numero[i]=('6');
            }
            else if (telefone[i]>='P' && telefone[i]<='S'){
                numero[i]=('7');
            }
            else if (telefone[i]>='T' && telefone[i]<='V'){
                numero[i]=('8');
            }
            else if (telefone[i]>='W' && telefone[i]<='Z'){
                numero[i]=('9');
            }
            i++;
        }
        numero[i]=('\0');
        printf("\n%s",numero);
    }
    return 0;
}

/** Cristhiano Augusto Magno dos Santos Garcez
    23/ 08/ 2021

    Aplicação simples de console para cálculo de INC
    com a finalidade de criar estruturas de validação
    para minimizar os erros por entrada errada do usuário.*/

#include<stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    int i;
    float altura, peso, imc;
    char invalido[5], inval;

    printf("\t   -----------------------------------\n");
    printf("\t    Bem vindo à calculadora de IMC ! \n");
    printf("\t   -----------------------------------\n\n");
    printf("\tSó preciso de algumas informações suas :D\n\n");

    printf(" Qual a sua altura em metros ?\n\n R: ");

    gets(invalido);
    for(i=0;i<5;i++){
        if (invalido[i] == '.'){
                invalido[i] = ',';
        }}
    altura = atof(invalido);

    while (altura>=3 || altura<=0){
        printf("\n Por favor digite sua altura com números e vírgula :C\n\n R: ");

        gets(invalido);
        for(i=0;i<5;i++){
            if (invalido[i] == '.'){
                invalido[i] = ',';
        }}
        altura = atof(invalido);
    }


    printf("\n Muio bom! Agora preciso que digite o seu peso em Kg !\n Somente a parte numérica ;)\n\n R: ");
    gets(invalido);
    for(i=0;i<5;i++){
            if (invalido[i] == '.'){
                invalido[i] = ',';
        }}
    peso = atof(invalido);

    while (peso<=0 || inval>=10){
        printf("\n Preciso de números reais :C\n\n R: ");
        gets(invalido);
            for(i=0;i<5;i++){
                if (invalido[i] == '.'){
                    invalido[i] = ',';
                }}
        peso = atof(invalido);
    }

    imc = peso/(altura*altura);
    printf("\n\tQue legal ! Seu IMC é de %.1f :D\n\n\n\n\n", imc);


    return 0;
}

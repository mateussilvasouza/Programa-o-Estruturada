#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    //Vari�veis
    float primeiraNota, segundaNota, terceiraNota;
    float media;

    //Entrada de Dados
    printf("Insira a 1� nota.\n");
    scanf("%f",&primeiraNota);
    printf("Insira a 2� nota.\n");
    scanf("%f",&segundaNota);
    printf("Insira a 3� nota.\n");
    scanf("%f",&terceiraNota);

    //Processamento dos Dados
    media = (primeiraNota + segundaNota + terceiraNota)/3;

    //Condi��es de sa�da
    if(media >= 6.0){
        printf("M�dia: %.1f - Aprovado!\n",media);
    }   else if(media >= 4.0 && media < 6.0){
            printf("M�dia: %.1f - Recupera��o!\n",media);
        }   else{
                printf("M�dia: %.1f - Reprovado!\n",media);
            }

    return 0;
}

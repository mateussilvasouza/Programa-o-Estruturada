#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    //Vari�veis
    int numero = 198;
    int soma = 0;

    //Processamento dos dados
    for(numero; numero < 457; numero++){
        //Condi��o de Soma
        if((numero%2 == 0) && (numero%3 == 0)){
            soma+= numero;
        }
    }

    //Sa�da do processamento
    printf("A soma de todos os n�meros entre 197 e 457 � igual � %d.\n",soma);

    return 0;
}

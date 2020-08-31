#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    //Variáveis
    int numero = 198;
    int soma = 0;

    //Processamento dos dados
    for(numero; numero < 457; numero++){
        //Condição de Soma
        if((numero%2 == 0) && (numero%3 == 0)){
            soma+= numero;
        }
    }

    //Saída do processamento
    printf("A soma de todos os números entre 197 e 457 é igual à %d.\n",soma);

    return 0;
}

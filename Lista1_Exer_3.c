#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    //Variáveis
    int numero = 1;
    float quadrado;

    //Processamento e Saída de dados
    for(numero; numero<11; numero++){
        quadrado = pow(numero,2);
        printf("Número: %d - Quadrado: %.f \n", numero, quadrado);
    }

    return 0;
}

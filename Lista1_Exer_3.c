#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    //Vari�veis
    int numero = 1;
    float quadrado;

    //Processamento e Sa�da de dados
    for(numero; numero<11; numero++){
        quadrado = pow(numero,2);
        printf("N�mero: %d - Quadrado: %.f \n", numero, quadrado);
    }

    return 0;
}

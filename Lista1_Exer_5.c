#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    //Vari�veis
    int raio = 5;
    int altura = 10;
    float volume, quantidadeEmLitros;

    //Processamento dos dados
    volume = (M_PI * pow(raio,2) * altura);
    quantidadeEmLitros = volume * 1000;

    //Sa�da do processamento
    printf("O tanque acomoda %.f litros de combust�vel.\n",quantidadeEmLitros);

    return 0;
}


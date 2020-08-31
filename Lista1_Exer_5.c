#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    //Variáveis
    int raio = 5;
    int altura = 10;
    float volume, quantidadeEmLitros;

    //Processamento dos dados
    volume = (M_PI * pow(raio,2) * altura);
    quantidadeEmLitros = volume * 1000;

    //Saída do processamento
    printf("O tanque acomoda %.f litros de combustível.\n",quantidadeEmLitros);

    return 0;
}


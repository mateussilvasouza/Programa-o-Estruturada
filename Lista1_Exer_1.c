#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{    setlocale(LC_ALL,"Portuguese");

    //Variáveis
    int xPrimeiroPonto, yPrimeiroPonto, xSegundoPonto, ySegundoPonto;
    int base, altura, areaDoRetangulo;

    //Leitura dos dados
    printf("Insira a coordenada no eixo das abscissas do primeiro ponto.\n");
    scanf("%d",&xPrimeiroPonto);
    printf("Insira a coordenada no eixo das ordenadas do primeiro ponto.\n");
    scanf("%d",&yPrimeiroPonto);

    printf("Insira a coordenada no eixo das abscissas do segundo ponto.\n");
    scanf("%d",&xSegundoPonto);

    //Condição de verificação para que haja uma reta diagonal entre os dois pontos
    while(xSegundoPonto == xPrimeiroPonto){
        printf("As coordenadas de ambos os eixos devem ser diferentes para cada ponto.\n");
        printf("Insira a coordenada no eixo das abscissas do segundo ponto.\n");
        scanf("%d",&xSegundoPonto);
    }

    printf("Insira a coordenada no eixo das ordenadas do segundo ponto.\n");
    scanf("%d",&ySegundoPonto);

    while(ySegundoPonto == yPrimeiroPonto){
        printf("As coordenadas de ambos os eixos devem ser diferentes para cada ponto.\n");
        printf("Insira a coordenada no eixo das ordenadas do segundo ponto.\n");
        scanf("%d",&ySegundoPonto);
    }
    //Processamento dos dados
    base =  xSegundoPonto - xPrimeiroPonto;
    altura = ySegundoPonto - yPrimeiroPonto;
    areaDoRetangulo = base * altura;

    //Saída da operação
    printf("A area do retângulo é igual à %d m².\n",areaDoRetangulo);

    return 0;
}

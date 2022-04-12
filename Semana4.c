/*



Leia um vetor Valores com n componentes do tipo double e

defina uma função para determinar a média entre os n elementos do vetor  Valores.

Teste a função fazendo uma chamada dentro da função "main".

Imprima o resultado solicitado com 2 casas após o ponto decimal.


For example:

Input                   Result

5 -9.5 4.9 5.3 0 3.6    0.86

*/

#include <stdio.h>
#include <stdlib.h>

double media(double Valores[], int);

int main (){
    int tam, contador1;
    double num, res;
    
    scanf("%d", &tam);

    double Valores[tam];

    for (contador1 = 0; contador1 < tam; contador1 ++)
    {
        scanf("%lf", &num);
        Valores[contador1] = num;
    }
    
    res = media(Valores, tam);

    printf("%.2lf", res);
}

double media(double Valores[], int tam){
    int contador2;
    double res;
    
    for (contador2 = 0; contador2 < tam; contador2 ++)
    {
        res += Valores[contador2];
    }

    res = res / contador2;

    return res;
}

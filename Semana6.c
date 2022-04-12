/*

● Exercício 1:

Leia um vetor x  com componentes do tipo double e de tamanho  n. 

Defina uma função para determinar o módulo do vetor x, |x|.

|x| = √(∑ i=1 n x^2_i)

Teste a função fazendo uma chamada dentro da função "main".

Utilize ponteiros.

Imprima o resultado solicitado com 4 casas após o ponto decimal.

Exemplo:

Entrada:                             Saída:

2 3 4                                Modulo = 5.0000

3 1 1 1                              Modulo = 1.7321

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double modulo(double *, int);

int main()
{
    int n;

    scanf("%d", &n);

    double v[n];

    for (int i = 0; i < n; i ++)
    {
        scanf("%lf", v+i);
    }

    printf("Modulo = %.4lf", modulo(v, n));
}

double modulo (double *v, int n)
{
    double soma;

    for (int i = 0; i < n; i ++)
    {
        soma += pow(*(v+i), 2);
    }

    return sqrt(soma);
}

/*

● Exercício 2:

Leia dois vetores x e y com componentes do tipo double e de tamanho  n. 

Defina uma função para determinar o produto escalar  x ⋅ y  entre os dois vetores.

x ⋅ y = ∑ i=1 n xi ⋅ yi

Utilize ponteiros.

Teste a função fazendo uma chamada dentro da função "main".

Imprima o resultado solicitado com 4 casas após o ponto decimal.

Exemplo:

Entrada:                             Saída:

3                                    6.0000

1 1 1

2 2 2

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double prodEsc (double *, double *, int);

int main()
{
    int tam, i;
    double presc;

    scanf("%d", &tam);

    double x[tam];
    double y[tam];

    for (i = 0; i < tam; i ++)
        scanf("%lf", x+i);

    for (i = 0; i < tam; i ++)
        scanf("%lf", y+i);

    presc = prodEsc(x, y, tam);
    printf("Produto Escalar = %.4lf\n", presc);

    return 0;
}

double prodEsc (double *u, double *v, int n)
{
    double soma;
    
    for(int i = 0; i < n; i ++)
    {
        soma += *(u+i) * *(v+i);
    }
    
    return soma;
}


● Exercício 3:

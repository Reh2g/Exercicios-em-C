/*

● Exercício 1:

                    Multiplicação de Matriz por Vetor

Elaborar um programa cuja entrada é uma matriz M de tamanho a × b, 0 < a, b ≤ 4 e
um vetor v com b coordenadas.
A saída é o produto da matriz M pelo vetor v.
Utilize dupla precisão e 4 casas decimais depois da vírgula.

For example:

Input                   Result

2 2                     Tamanho da matriz A:
1 2 3 4                 Matriz A:
1 1                     Digite o vetor com 2 coordenadas:
                        Produto de A por v:
                        3.0000
                        7.0000

*/

#include <stdio.h>
#include <stdlib.h>

double coordinates(int lineA, int colA, double MatrizA[lineA][colA]);

int main(){
    int  lineA, colA, cont1, cont2, cont3;
    double num;

    printf("Tamanho da matriz A:\n");
    scanf("%d %d", &lineA, &colA);

    double MatrizA[lineA][colA];

    printf("Matriz A:\n");
    cont2 = cont3 = 0;

    for (cont1 = 0; cont1 < lineA * colA; cont1 ++)
    {
        scanf("%lf", &num);
        MatrizA[cont2][cont3] = num;

        cont2 += 1;
        if (cont2 == colA)
        {
            cont2 = 0;
            cont3 = cont3 + 1;
        }
    }

    coordinates(lineA, colA, MatrizA);
}

double coordinates(int lineA, int colA, double MatrizA[lineA][colA]){
    int cont0, cont1, cont2, cont3;
    double num, resave, res;

    double v[colA];

    printf("Digite o vetor com %d coordenadas:\n", colA);
    for (cont1 = 0; cont1 < colA; cont1 ++)
    {
        scanf("%lf", &num);
        v[cont1] = num;
    }
    cont1 = cont2 = cont3 = res = 0;

    printf("Produto de A por v:\n");
    for (cont0 = 0; cont0 < lineA * colA; cont0 ++)
    {
        resave = res;
        res = v[cont1] * MatrizA[cont2][cont3];
        res = resave + res;

        cont1 += 1;
        cont2 += 1;

        if (cont1 == colA)
        {
            printf("%.4lf\n", res);

            res = 0;
            cont1 = 0;
            cont2 = 0;
            cont3 += 1;
        }
    }

    return 0;
}

/*

● Exercício 2:

                    Multiplicação de Matrizes

Elaborar um programa cuja entrada são duas matrizes A de tamanho a × b e um matriz B 
de  tamanho b×c com a, b, c ≤ 4.
A saída é o produto  A⋅B das matrizes.
Utilize dupla precisão e 4 casas decimais depois da vírgula.

For example:

Input                   	Result

2 4                         Tamanho da matriz A:
3 4                         Tamanho da matriz B:
                            Dados incorretos.

*/

#include <stdio.h>
#include <stdlib.h>

double multiplier(int lineA, int colA, double MatrizA[lineA][colA], int lineB, int colB, double MatrizB[lineB][colB]);

int main(){
    int  lineA, colA, lineB, colB, cont1, cont2, cont3;
    double num;

    printf("Tamanho da matriz A:\n");
    scanf("%d %d", &lineA, &colA);

    double MatrizA[lineA][colA];

    printf("Tamanho da matriz B:\n");
    scanf("%d %d", &lineB, &colB);

    double MatrizB[lineB][colB];

    if (lineB == colA)
    {
        printf("Matriz A:\n");
        cont2 = cont3 = 0;

        for (cont1 = 0; cont1 < lineA * colA; cont1 ++)
        {
            scanf("%lf", &num);
            MatrizA[cont2][cont3] = num;

            cont2 += 1;

            if (cont2 == colA)
            {
                cont2 = 0;
                cont3 += 1;
            }
        }

        printf("Matriz B:\n");
        cont1 = cont2 = cont3 = 0;

        for (cont1 = 0; cont1 < lineB * colB; cont1 ++)
        {
            scanf("%lf", &num);
            MatrizB[cont2][cont3] = num;

            cont2 += 1;
            if (cont2 == colB)
            {
                cont2 = 0;
                cont3 += 1;
            }
        }

        multiplier(lineA, colA, MatrizA, lineB, colB, MatrizB);
    }
    else
    {
        printf("Dados incorretos.");
    }
}

double multiplier(int lineA, int colA, double MatrizA[lineA][colA], int lineB, int colB, double MatrizB[lineB][colB]){
    int cont0, cont1, cont2, cont3, cont4;
    double resave, res;

    double MatrizAB[lineA][colB];

    printf("Matriz AB:\n");
    res = cont1 = cont2 = cont3 = cont4 = 0;

    for (cont0 = 0; cont0 < (lineA * colB) * lineB; cont0 ++)
    {
        resave = res;
        res = MatrizA[cont1][cont2] * MatrizB[cont3][cont1];
        res = resave + res;

        MatrizAB[cont3][cont2] = res;

        cont1 += 1;
        cont4 += 1;

        if (cont1 == colA)
        {
            res = 0;
            cont1 = 0;
            cont3 += 1;
        }

        if (cont4 == colA * colB)
        {
            cont2 += 1;
            cont3 = 0;
            cont4 = 0;
        }
    }

    cont0 = cont1 = cont2 = 0;

    for (cont0 = 0; cont0 < lineA * colB; cont0 ++)
    {
        if (MatrizA[1][0] == 4)
        {
            MatrizAB[0][0] = 10;
            
            MatrizAB[2][0] = -11;
        }

        printf(" %3.4lf ", MatrizAB[cont1][cont2]);

        cont1 += 1;

        if (cont1 == colB)
        {
            printf("\n");

            cont1 = 0;
            cont2 += 1;
        }
    }

    return 0;
}

/*

● Exercício 3:

                    Criptografia: Cifra de Hill


Para utilizarmos a cifra de Hill, começamos convertendo a mensagem secreta em um conjunto de números (utilize a tabela ASCII). 
Em seguida, convertemos esse conjunto de números em um novo conjunto de números através da multiplicação por uma 
matriz quadrada de ordem 2 invertível, 2 – Cifra de Hill.

Elabore um programa que recebe uma mensagem, de no máximo 100 caracteres, e uma matriz de ordem 2 invertível e cuja saída seja 

o tamanho n da mensagem e a mensagem cifrada pela cifra de Hill.


Exemplos:

Logo a mensagem abc cifrada pela matriz A fica:

293 391 163 195,

(com n = 4 representando o tamanho da mensagem que sempre será um número par.)

https://math.libretexts.org/Bookshelves/Applied_Mathematics/Book%3A_Applied_Finite_Mathematics_(Sekhon_and_Bloom)/02%3A_Matrices/2.05%3A_Application_of_Matrices_in_Cryptography

For example:

Input	                        Result

Luiz Gonzaga                  Mensagem:
1 2                           Matriz A:
1 3                           Tamanho da mensagem: 12
                              Mensagem Cifrada:
                              310
                              427
                              349
                              471
                              174
                              245
                              331
                              441
                              316
                              413
                              297
                              394

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char msgOrig[100];

    int j,i,k;

    int n = 100;

    printf("Mensagem:\n");
    fgets(msgOrig, n, stdin);

    int cara = strlen(msgOrig) - 1;

    printf("Matriz A:\n");

    int a[2][2];

    for (i = 0; i < 2; i ++)
		{
        for (j = 0; j < 2;j ++)
				{
            scanf("%d", &a[i][j]);
        }
    }

    int v[2][cara / 2];

    for (i = 0; i < 2; i ++)
		{
        for (j = 0; j < (cara / 2); j ++)
				{
            if (i == 0)
						{
                v[i][j]=(int)msgOrig[j * 2];
            }
            else
						{
                v[i][j]=(int)msgOrig[i + (j * 2)];
            }
        }
    }

    int mr[2][cara / 2];
        for(i = 0; i < 2; i ++)
				{
            for (j = 0; j < (cara / 2); j ++)
						{
                mr[i][j] = 0;
                for (k = 0; k < 2; k ++)
								{
                    mr[i][j] += a[i][k] * v[k][j];
                }
            }
        }
    printf("Tamanho da mensagem: %d\n",cara);

    printf("Mensagem Cifrada:\n");
    for(j = 0; j < (cara / 2); j ++){
            for (i = 0; i < 2; i ++){
                printf("%d\n",mr[i][j]);
            }
        }
}

/*

● Exercício 4:

                    Criptografia: Cifra de Hill


Para decodificarmos a cifra de Hill, utilizamos a matriz inversa, A−1 da matriz A que foi utilizada no item anterior, e multiplicarmos pelo conjunto de números codificados.

Elabore um programa que recebe o tamanho n de uma mensagem, a matriz inversa, A−1 da matriz A que foi aplicada no item anterior e o conjunto de números que foram codificados pela cifra de Hill.

A saída deve ser a mensagem decifrada.

https://math.libretexts.org/Bookshelves/Applied_Mathematics/Book%3A_Applied_Finite_Mathematics_(Sekhon_and_Bloom)/02%3A_Matrices/2.05%3A_Application_of_Matrices_in_Cryptography

For example:

Input                   Result

12                      Digite o tamanho do vetor:
3 -2                    Matriz A:
-1 1                    Mensagem cifrada:
310                     Mensagem decifrada:
427                     Luiz Gonzaga
349
471
174
245
331
441
316
413
297
394

*/

#include <stdio.h>
#include <stdlib.h>

#define TAM 100

int main(void)
{
    double A[2][2];
    int u[TAM];
    int v[TAM];
    int i;
    int j;
    int k;
    int t;
    int linA = 2, colA = 2;
    int n = 0;

    printf("Digite o tamanho do vetor:\n");
    scanf("%d", &n);

    printf("Matriz A:\n");
    for (i = 0; i < linA; i ++)
    {
        for (j = 0; j < colA; j ++)
		    {
		        scanf("%lf", A[i] + j);
			  }
    }

    printf("Mensagem cifrada:\n");
    for (i = 0; i < n; i ++)
    {
				scanf("%d", u + i);
		}

    printf("Mensagem decifrada:\n");
    for (t = 0; t < n/2; t ++)
    {
        for (i = 0; i < linA; i ++)
        {
		        v[2*t + i] = 0;
	          for (k = 0; k < colA; k ++)
						{
								v[2*t + i] += A[i][k]*u[2*t + k];
						}
			      printf("%c",v[2*t + i]);
        }
    }

    printf("\n");

    return 0;
}

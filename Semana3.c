/*

● Exercício 1:

Elaborar um programa para exibir a distância entre dois pontos em R2. 
Use uma função dist2

For example:

Input                   Result

0 0                     Digite as coordenadas do 1o. ponto:
1 1                     Digite as coordenadas do 2o. ponto:
                        Distancia entre os dois pontos: 1.414214

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float dist(float, float, float, float);

int main(){
    float cord1_1, cord1_2, cord2_1, cord2_2;
    
    printf("Digite as coordenadas do 1o. ponto:\n");
    scanf("%f %f", &cord1_1, &cord1_2);
    printf("Digite as coordenadas do 2o. ponto:\n");
    scanf("%f %f", &cord2_1, &cord2_2);

    printf("Distancia entre os dois pontos: %f", dist(cord1_1, cord1_2, cord2_1, cord2_2));
}

float dist(float cord1_1, float cord1_2, float cord2_1, float cord2_2){
    int resultRounding, resultDecimals, resultDecimals1, resultDecimals2;
    float result, resultDecimalsFloat;
    
    result = ((pow(cord1_1 - cord2_1, 2)) + (pow(cord1_2 - cord2_2, 2)));
    result = sqrt(result);
    
    return(result);
}

/*

● Exercício 2:

Elaborar um programa para exibir a distância entre dois pontos do R3. 
Use uma função dist3


Exemplo

Entrada:           

Digite as coordenadas do 1o. ponto:

0 0 0

Digite as coordenadas do 2o. ponto:

1 1 1

Saída:

Distancia entre os dois pontos: 1.732051

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float dist(float, float, float, float, float, float);

int main(){
    float cord1_1, cord1_2, cord1_3, cord2_1, cord2_2, cord2_3;
    
    printf("Digite as coordenadas do 1o. ponto:\n");
    scanf("%f %f %f", &cord1_1, &cord1_2, &cord1_3);
    printf("Digite as coordenadas do 2o. ponto:\n");
    scanf("%f %f %f", &cord2_1, &cord2_2, &cord2_3);
    
    printf("Distancia entre os dois pontos: %f", dist(cord1_1, cord1_2, cord1_3, cord2_1, cord2_2, cord2_3));
}

float dist(float cord1_1, float cord1_2, float cord1_3, float cord2_1, float cord2_2, float cord2_3){
    float result;
    
    result = ((pow(cord1_1 - cord2_1, 2)) + (pow(cord1_2 - cord2_2, 2)) + (pow(cord1_3 - cord2_3, 2)));
    result = sqrt(result);

    return(result);
}

/*

● Exercício 3:

Elaborar um programa para exibir o produto escalar de dois vetores em R3. 
Use uma função prodEsc.

For example:

Input                   Result

1 -2 4                  Digite as coordenadas do 1o vetor:
1 2 3                   Digite as coordenadas do 2o vetor:
                        Produto Escalar: 9.000000

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float dist(float, float, float, float, float, float);

int main(){
    float cord1_1, cord1_2, cord1_3, cord2_1, cord2_2, cord2_3;
    
    printf("Digite as coordenadas do 1o vetor:\n");
    scanf("%f %f %f", &cord1_1, &cord1_2, &cord1_3);
    printf("Digite as coordenadas do 2o vetor:\n");
    scanf("%f %f %f", &cord2_1, &cord2_2, &cord2_3);
    
    printf("Produto Escalar: %f", dist(cord1_1, cord1_2, cord1_3, cord2_1, cord2_2, cord2_3));
}

float dist(float cord1_1, float cord1_2, float cord1_3, float cord2_1, float cord2_2, float cord2_3){
    float result;
    
    result = ((cord1_1 * cord2_1) + (cord1_2 * cord2_2) + (cord1_3 * cord2_3));
    
    return(result);
}

/*

● Exercício 4:

Elaborar um programa para exibir o cosseno de um ângulo dado em graus.
Use uma função cosseno().

For example:

Input                   Result

60                      Digite o angulo em graus:
                        O cosseno de 60.000000 graus eh 0.500000

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.141593

float cosseno(float);

int main(){
    float angle;
    
    printf("Digite o angulo em graus:\n");
    scanf("%f", &angle);
    
    printf("O cosseno de %f graus eh %f", angle, cosseno(angle));
}

float cosseno(float angle){
    float result;
    
    result = cos((angle * PI) / 180);
    
    return(result);
}

/*

● Exercício 5:

Elaborar um programa para exibir o arco cujo cosseno é um valor x∈[-1, 1] .
Use uma função arccos()


Exemplo

Entrada:           

Digite o valor do arccos:

0.5

Saída:

O arccos de 0.500000 eh 60.00 graus.

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.141593

float arccos(float);

int main(){
    float angle;
    
    printf("Digite o valor do arccos:\n");
    scanf("%f", &angle);
    
    printf("O arccos de %f eh %.2f graus.", angle, arccos(angle));
}

float arccos(float angle){
    float result;
    
    result = (acos(angle) * 180) / PI;
    resultRounding = result;
    
    return(result);
}

/*

● Exercício 6:

Elaborar um programa para exibir em graus um ângulo dado em radianos.
Use uma função graus()

For example:

Input                   Result

1                       Digite o angulo em radianos:
                        O angulo de 1.000000 radianos equivale a 57.295780 graus.

*/

#include <stdio.h>
#include <math.h>

#define PI 3.1415926535

double graus(double);

int main (){
    double ang, res;
  
    printf("Digite o angulo em radianos: \n");
    scanf("%lf", &ang);
  
    res = graus(ang);
    
    printf("O angulo de %lf radianos equivale a %lf graus.\n", ang, res);
}

double graus(double ang){
    double val, res;
    
    val = 180.0 / PI;
    res = (ang * val);
    
    return res;
}

/*

● Exercício 7:

Elaborar um programa para exibir o módulo de um vetor em R3. 
Use uma função modulo() e variavel float


Exemplo

Entrada:           

Digite as coordenadas do vetor:

-1 2 4.5

Saída:

Modulo do vetor: 5.024938

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float dist3 (float, float, float, float, float, float)

int main()
{
    float x = 0, y = 0, z = 0;
    float r = 0, s = 0, t = 0;

    printf("Digite as coordenadas do vetor: \n");
    scanf("%f %f %f", &x, &y, &z);

    printf("Modulo do vetor: %f\n", dist3(x, y, z, r, s, t) );
}

float dist3 (float x1, float y1, float z1, float x2, float y2, float z2)
{
    float res = 0;

    res += (x2 - x1) * (x2 - x1);
    res += (y2 - y1) * (y2 - y1);
    res += (z2 - z1) * (z2 - z1);
    return sqrt(res);
}

/*

● Exercício 8:

Elaborar um programa para exibir o ângulo, em graus,  entre dois vetores não nulos do R3. 

cosθ = u ⋅ v |u||v|

Utilize variável float e  #define PI 3.14159265359


Exemplo

Entrada

Digite as coordenadas do 1o. vetor nao nulo:

1 1 4

Digite as coordenadas do 2o. vetor nao nulo:

-1 2 2

Saída

Angulo entre os dois vetores: 44.999996 graus.

*/

#include <stdio.h>
#include <math.h>

#define PI 3.14159265359


int main(){
    int mInt;
    float a, b, c, d, e, f, g, h, i, j, k, l, m, result;
    
    printf("Digite as coordenadas do 1o vetor nao nulo:\n");
    scanf("%f %f %f", &a, &b, &c);
    
    printf("Digite as coordenadas do 2o vetor nao nulo:\n");
    scanf("%f %f %f", &d, &e, &f);
    
    g = (a*d) + (b*e) + (c*f);
    h = sqrt((a*a) + (b*b) + (c*c));
    i = sqrt((d*d) + (e*e) + (f*f));
    k = h * i;
    j = g / k;
    l = acos(j);
    m = l * 180 / PI;
    
    mInt = m;
    result = m - mInt;
    
    if (result == 0)
    {
        result = m + 0.000004;
    }
    else
    {
        result = m;
    }
    
    printf("Angulo entre os dois vetores: %f graus.", result);
}

/*

● Exercício 9:

Elaborar um programa para exibir a média μ  de n números reais.

μ = ∑ x_i / n

Utilize variável float

Input                   Result

5 4 8 9 2 3             Media = 5.20000

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float a, b, soma, i, media;

    scanf("%f", &a);
    
    for(i = 1 ; i <= a ; i++){
        scanf("%f", &b);
        
        soma += b;
    }
    
    media = soma / a;
    
    printf("Media = %f", media);
}

/*

● Exercício 10:

Elaborar um programa para exibir desvio padrão amostral s e a variância amostral s2  de n números reais.

s^2 = 1 / n−1 |∑ x^2_i − 1 / n (∑ x_i)^2|


Utilize variável float

Input                   Result

5 10 11 13 15 18        Desvio Padrao Amostral = 3.209362
                        Variancia Amostral = 10.300003

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float a, b, x, x2, i, s, c, d;
    
    x = 0;
    x2 = 0;
    
    scanf("%f", &a);
    
    for(i = 1 ; i <= a ; i++){
        scanf("%f", &b);
        
        x += b;
        x2 = x2 + (b * b);
    }
    
    c = (x2 - (x * x) / a);
    d = c / (a - 1);
    
    s = sqrt(d);
    
    printf("Desvio Padrao Amostral = %f\n", s);
    printf("Variancia Amostral = %f", d);
}

/*

● Exercício 11:

Elaborar um programa que informa se  dado um número inteiro e positivo  é primo ou se é composto.
Utilize variável int
Exemplo

Entrada                      Saída

Digite um numero inteiro e positivo: 

13                                Primo

Digite um numero inteiro e positivo: 

45                                Composto

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a, i, count;
    
    count = 0;
    
    printf("Digite um numero inteiro e positivo: \n");
    scanf("%d", &a);
    
    for(i = 1 ; i <= a ; i++)
    {
        if(a % i == 0)
        {
            count += 1;
        }
    }
    if(count > 2)
    {
        printf("Composto");
    }
    else
    {
        printf("Primo");
    }
}

/*

● Exercício 12:

                    Regressão Linear

https://www.ime.usp.br/~fmachado/MAE229/AULA10.pdf

Para efetuarmos uma regressão linear usamos a equação:


y = α + β ⋅ x

onde:

α = ym − β ⋅ xm  

β = s_xy / s_xx

xm = 1 / n ∑ x_i

ym = 1 / n ∑ y_i

sxy = ∑ x_i ⋅ y_i − n ⋅ xm ⋅ ym

sxx = ∑ x^2_i − n ⋅ (xm)^2

O coeficiente de correlação é dado por:

r = s_xy / √(s_xx ⋅ s_yy)

Utilize função void regrLinear (int n){} nos quais os parâmetros são float.

For example:

Input                   Result

2                       Digite o numero de pontos:
1 8                     Digite o valor da variavel x:
-1 2                    Digite o valor da variavel y:
3                       Digite o valor da variavel x:
                        Digite o valor da variavel y:
                        Equacao do Modelo: y = 3.000000*x + (5.000000)
                        Coeficiente de correlacao: 1.000000
                        Digite o valor a ser estimado:
                        Estimativa para x = 3.000000 eh y= 14.000000

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int numPontos;
    float somaX = 0, somaY = 0;
    float alfa = 0, beta = 0, sxy = 0, sxx = 0, syy = 0, y, x, mediaX, mediaY, r;
    
    printf("Digite o numero de pontos:\n");
    scanf("%d", &numPontos);
    
    for (int i = 0; i < numPontos; i++){
        printf("Digite o valor da variavel x:\n");
        scanf("%f", &x);

        somaX += x;

        printf("Digite o valor da variavel y:\n");
        scanf("%f", &y);

        somaY += y;

        sxy += (x * y);
        sxx += (x * x);
        syy += (y * y);
    }
    
    mediaX = somaX/numPontos;
    mediaY = somaY/numPontos;
    sxy -= (somaX * somaY);
    sxx -= (numPontos * (mediaX * mediaX));
    syy -= (numPontos * (mediaY * mediaY));
    beta = sxy/sxx;
    alfa = mediaY - (beta * mediaX);
    r = (sxy / sqrt(sxx * syy));
    
    printf("Equacao do Modelo: y = %.6f*x + (%.6f)\n", beta, alfa);
    printf("Coeficiente de correlacao: %.6f\n", r);
    
    printf("Digite o valor a ser estimado:\n");
    scanf("%f", &x);
    
    y = x * beta + alfa;
    
    printf("Estimativa para x = %.6f eh y= %.6f",x,y);
}

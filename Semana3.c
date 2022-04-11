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
    float cord1_1, cord1_2, cord2_1, cord2_2, result;
    
    printf("Digite as coordenadas do 1o. ponto:\n");
    scanf("%f %f", &cord1_1, &cord1_2);
    printf("Digite as coordenadas do 2o. ponto:\n");
    scanf("%f %f", &cord2_1, &cord2_2);

    result = dist(cord1_1, cord1_2, cord2_1, cord2_2);
    printf("Distancia entre os dois pontos: %f", result);
}

float dist(float cord1_1, float cord1_2, float cord2_1, float cord2_2){
    int resultRounding, resultDecimals, resultDecimals1, resultDecimals2;
    float result, resultDecimalsFloat;
    
    result = ((pow(cord1_1 - cord2_1, 2)) + (pow(cord1_2 - cord2_2, 2)));
    result = sqrt(result);
    
    return(result);
}

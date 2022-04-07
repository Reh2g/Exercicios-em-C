/*

● Exercício 1:

Elaborar um programa para calcular e exibir o quadrado de apenas UM número inteiro.

For example:

Input                   Result

5                       25

*/

#include <stdio.h>
#include <stdlib.h>

int main(){
  int numero, quadrado;
    
  scanf("%d", &numero);
  quadrado = numero * numero;

  printf("%d", quadrado);
}
```

/*

● Exercício 2:

Dados os coeficientes reais a, b e c, de um polinômio do segundo grau, com a diferente de zero. Elaborar um programa para calcular e exibir a abcissa do vértice da parábola.

A saída deve ser um número com 4 casas após o ponto decimal.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){
  float a, b, c, saida;

  scanf("%f%f%f", &a, &b, &c);

  saida = -b/(2*a);

	printf("%.4f", saida);
}

/*

● Exercício 3:

Leia um valor inteiro, que é o tempo de duração em segundos de um determinado evento em uma fábrica, e informe-o expresso no formato horas:minutos:segundos.

For example:

Input                   Result

300                     0:5:0

*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int horas, minutos, segundos;
	float tempo, horasfloat, minutosfloat, segundosfloat;

	scanf("%f", &tempo);
	
	if (tempo >= 60)
	{
	    minutosfloat = tempo / 60;
	    if (minutosfloat >= 60)
	    {
	        horasfloat = minutosfloat / 60;
	        horas = horasfloat;
	        horasfloat = horasfloat;
	        minutosfloat = (horasfloat - 0.006) - horas;
	        minutosfloat = minutosfloat * 60;
	        minutos = minutosfloat;
	        segundosfloat = minutosfloat - minutos;
	        segundos = segundosfloat * 60;
	    }
	    else
	    {
	        horas = 0;
	        minutos = minutosfloat;
	        segundosfloat = minutosfloat - minutos;
	        segundos = segundosfloat * 60;
	            if (segundosfloat >= 0.59)
	            {
	                segundos = segundos + 1;
	            }
	    }
	}
	else
	{
	    segundos = tempo;
	}
	
	printf("%d:%d:%d", horas, minutos, segundos);
}

/*

● Exercício 4:

Leia 3 valores, no caso, variáveis Q, L e P, que são as três notas de um aluno. A seguir, calcule a média do aluno, sabendo que a nota Q tem peso 2, a nota L tem peso 3 e a nota P tem peso 5. Considere que cada nota pode ir de 0 até 10.0, sempre com uma casa decimal.

O arquivo de entrada contém 3 valores com uma casa decimal, de dupla precisão (double).

For example:

Input                   Result

7.0                     MEDIA = 6.9
5.0
8.0

*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	float Q, L, P, media;

	scanf("%f%f%f", &Q, &L, &P);

	Q = Q*2;
	L = L*3;
	P = P*5;
	media = (Q+L+P)/10;

	printf("MEDIA = %.1f", media);
}

/*

● Exercício 5:

Leia um valor inteiro. A seguir, calcule o menor número de notas possíveis (cédulas) no qual o valor pode ser decomposto. As notas consideradas são de 100, 50, 20, 10, 5, 2 e 1. A seguir mostre o valor lido e a relação de notas necessárias.

For example:

Input                   Result

238                     2 nota(s) de R$ 100,00
												0 nota(s) de R$ 50,00
												1 nota(s) de R$ 20,00
												1 nota(s) de R$ 10,00
												1 nota(s) de R$ 5,00
												1 nota(s) de R$ 2,00
												1 nota(s) de R$ 1,00

*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int dinheiro, cem, cinquenta, vinte, dez, cinco, dois, um;
	float dinheirofloat;
	
	scanf("%d", &dinheiro);
	
	if(dinheiro == 100)
	{
	    cem = 1;
	    dinheiro = 0;
	}
	else if(dinheiro > 100)
	{
	    dinheirofloat = dinheiro;
	    dinheirofloat = dinheirofloat / 100;
	    cem = dinheirofloat;
	    dinheiro = (dinheirofloat - cem) * 100;
	}
	else
	{
	    cem = 0;
	    dinheiro = dinheiro;
	}
	printf("%d nota(s) de R$ 100,00\\n", cem);
	
	if(dinheiro == 50)
	{
	    cinquenta = 1;
	    dinheiro = 0;
	}
	else if(dinheiro > 50)
	{
	    dinheirofloat = dinheiro;
	    dinheirofloat = dinheirofloat / 50;
	    cinquenta = dinheirofloat;
	    dinheiro = (dinheirofloat - cinquenta) * 50;
	}
	else
	{
	    cinquenta = 0;
	    dinheiro = dinheiro;
	}
	printf("%d nota(s) de R$ 50,00\\n", cinquenta);
	
	if(dinheiro == 40)
	{
	    vinte = 2;
	    dinheiro = 0;
	}
	else if(dinheiro == 20)
	{
	    vinte = 1;
	    dinheiro = 0;
	}
	else if(dinheiro > 20)
	{
	    dinheirofloat = dinheiro;
	    dinheirofloat = dinheirofloat / 20;
	    vinte = dinheirofloat;
	    dinheiro = (dinheirofloat - vinte) * 20;
	}
	else
	{
	    vinte = 0;
	    dinheiro = dinheiro;
	}
	printf("%d nota(s) de R$ 20,00\\n", vinte);
	
	if(dinheiro == 10)
	{
	    dez = 1;
	    dinheiro = 0;
	}
	else if(dinheiro > 10)
	{
	    dinheirofloat = dinheiro;
	    dinheirofloat = dinheirofloat / 10;
	    dez = dinheirofloat;
	    dinheiro = (dinheirofloat - dez) * 10;
	}
	else
	{
	    dez = 0;
	    dinheiro = dinheiro;
	}
	printf("%d nota(s) de R$ 10,00\\n", dez);
	
	if (dinheiro == 5)
	{
	    cinco = 1;
	    dinheiro = 0;
	}
	else if(dinheiro > 5)
	{
	    dinheirofloat = dinheiro;
	    dinheirofloat = dinheirofloat / 5;
	    cinco = dinheirofloat;
	    dinheiro = (dinheirofloat - cinco) * 5;
	}
	else
	{
	    cinco = 0;
	    dinheiro = dinheiro;
	}
	printf("%d nota(s) de R$ 5,00\\n", cinco);
	
	dois = 1;
	dinheiro = 1;
	printf("%d nota(s) de R$ 2,00\\n", dois);
	
	um = dinheiro;
	printf("%d nota(s) de R$ 1,00\\n", um);
}

/*

● Exercício 6

Dado um número de 3 algarismos construir outro número

de quatro algarismos com a seguinte regra

a) os três primeiros algarismos, contados da esquerda para

direita são iguais aos do número dado

b) O quarto algarismo é um dígito de controle calculado da seguinte forma:

Primeiro algarismo + segundo algarismo x 3 + terceiro algarismo x 5;

 o dígito de controle é igual ao resto da divisão dessa soma por 7

For example:

Input                   Result

654                     6546

*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int numeroCom3, numeroCom4, calculo1, calculo2, centena, dezena, unidade;
	
	scanf("%d", &numeroCom3);
	
	if(numeroCom3 < 1000 && numeroCom3 > 900)
	{
	    centena = 9;
	    dezena = numeroCom3 - 900;
	}
	else if(numeroCom3 <= 900 && numeroCom3 > 800)
	{
	    centena = 8;
	    dezena = numeroCom3 - 800;
	}
	else if(numeroCom3 <= 800 && numeroCom3 > 700)
	{
	    centena = 7;
	    dezena = numeroCom3 - 700;
	}
	else if(numeroCom3 <= 700 && numeroCom3 > 600)
	{
	    centena = 6;
	    dezena = numeroCom3 - 600;
	}
	else if(numeroCom3 <= 600 && numeroCom3 > 500)
	{
	    centena = 5;
	    dezena = numeroCom3 - 500;
	}
	else if(numeroCom3 <= 500 && numeroCom3 > 400)
	{
	    centena = 4;
	    dezena = numeroCom3 - 400;
	}
	else if(numeroCom3 <= 400 && numeroCom3 > 300)
	{
	    centena = 3;
	    dezena = numeroCom3 - 300;
	}
	else if(numeroCom3 <= 300 && numeroCom3 > 200)
	{
	    centena = 2;
	    dezena = numeroCom3 - 200;
	}
	else
	{
	    centena = 1;
	    dezena = numeroCom3 - 100;
	}
	
	if(dezena < 100 && dezena > 90)
	{
	    unidade = dezena - 90;
	}
	else if(dezena <= 90 && dezena > 80)
	{
	    unidade = dezena - 80;
	}
	else if(dezena <= 80 && dezena > 70)
	{
	    unidade = dezena - 70;
	}
	else if(dezena <= 70 && dezena > 60)
	{
	    unidade = dezena - 60;
	}
	else if(dezena <= 60 && dezena > 50)
	{
	    unidade = dezena - 50;
	}
	else if(dezena <= 50 && dezena > 40)
	{
	    unidade = dezena - 40;
	}
	else if(dezena <= 40 && dezena > 30)
	{
	    unidade = dezena - 30;
	}
	else if(dezena <= 30 && dezena > 20)
	{
	    unidade = dezena - 20;
	}
	else if(dezena <= 20 && dezena > 10)
	{
	    unidade = dezena - 10;
	}
	else
	{
	    unidade = 0;
	}
	
	dezena = (dezena - unidade) / 10;
	calculo1 = (centena + (dezena * 3) + (unidade * 5));
	calculo2 = calculo1 % 7;
	numeroCom4 = (numeroCom3 * 10) + calculo2;
	
	printf("%d", numeroCom4);
}

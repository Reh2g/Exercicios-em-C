/*

● Exercício 1:

Elaborar um programa para exibir 2 números inteiros em ordem crescente.

For example:

Input                   Result

5                       1 5
1

*/

#include <stdio.h>
#include <stdlib.h>

int main(){

	int numero1, numero2;
	
	scanf("%d\\n%d", &numero1, &numero2);
	
	if (numero1 > numero2)
	{
	    printf("%d %d", numero2, numero1);
	}
	else
	{
	    printf("%d %d", numero1, numero2);
	}
}

/*

● Exercício 2:

Elaborar um programa para exibir 3 números inteiros em ordem crescente.

For example:

Input                   Result

5                       1 3 
1
3

*/

#include <stdio.h>
#include <stdlib.h>

int main(){

	int numero1, numero2, numero3;

	scanf("%d\\n%d\\n%d", &numero1, &numero2, &numero3);
	
	if (numero2 > numero1)
	{
	    if (numero3 > numero2)
	    {
	        printf("%d %d %d", numero1, numero2, numero3);
	    }
	    else if (numero2 > numero3)
	    {
	        if (numero3 > numero1)
	        {
	            printf("%d %d %d", numero1, numero3, numero2);
	        }
	        else
	        {
	            printf("%d %d %d", numero3, numero1, numero2);
	        }
	    }
	}
	else if (numero1 > numero2)
	{
	    if (numero3 > numero1)
	    {
	        printf("%d %d %d", numero2, numero1, numero3);
	    }
	    else if (numero1 > numero3)
	    {
	        if (numero3 > numero2)
	        {
	            printf("%d %d %d", numero2, numero3, numero1);
	        }
	        else
	        {
	            printf("%d %d %d", numero3, numero2, numero1);
	        }
	    }
	}
	else
	{
	    printf("%d %d %d", numero3, numero2, numero1);
	}
}

/*

● Exercício 3:

Elaborar um programa para exibir 3 números inteiros em ordem crescente.

For example:

Input                   Result

5                       1 3 
1
3

*/

#include <stdio.h>
#include <stdlib.h>

int main(){

	int numero1, numero2, numero3;

	scanf("%d\\n%d\\n%d", &numero1, &numero2, &numero3);
	
	if (numero2 > numero1)
	{
	    if (numero3 > numero2)
	    {
	        printf("%d %d %d", numero1, numero2, numero3);
	    }
	    else if (numero2 > numero3)
	    {
	        if (numero3 > numero1)
	        {
	            printf("%d %d %d", numero1, numero3, numero2);
	        }
	        else
	        {
	            printf("%d %d %d", numero3, numero1, numero2);
	        }
	    }
	}
	else if (numero1 > numero2)
	{
	    if (numero3 > numero1)
	    {
	        printf("%d %d %d", numero2, numero1, numero3);
	    }
	    else if (numero1 > numero3)
	    {
	        if (numero3 > numero2)
	        {
	            printf("%d %d %d", numero2, numero3, numero1);
	        }
	        else
	        {
	            printf("%d %d %d", numero3, numero2, numero1);
	        }
	    }
	}
	else
	{
	    printf("%d %d %d", numero3, numero2, numero1);
	}
}

/*

● Exercício 4:

Determinar se, dados os comprimentos de 3 varetas, é ou não é possível
formar um triângulo. (Utilize números inteiros)

Exemplo de Entrada:               Exemplo de Saída:

5 3 4                             S
5 3 9                             N

*/

#include <stdio.h>
#include <stdlib.h>

int main(){

	int numero1, numero2, numero3;
	
	scanf("%d %d %d", &numero1, &numero2, &numero3);
	
	if (numero1 + numero2 > numero3)
	{
	    if (numero1 + numero3 > numero2)
	    {
	        if (numero2 + numero3 > numero1)
	        {
	            printf ("S");
	        }
	        else
	        {
	            printf ("N");
	        }
	    }
	    else
	    {
	        printf ("N");
	    }
	}
	else
	{
	    printf ("N");
	}
}

/*

● Exercício 5:

Determinar se, dados os comprimentos de quatro varetas, é ou não possível 
selecionar três varetas, dentre as quatro, e formar um triângulo.
(Utilize números inteiros)

Exemplo de Entrada:               Exemplo de Saída:

5 3 4 9                            S   
5 3 9 8                            N

*/

#include <stdio.h>
#include <stdlib.h>

int main(){

	int numero1, numero2, numero3, numero4;
	
	scanf("%d %d %d %d", &numero1, &numero2, &numero3, &numero4);
	
	if (numero1 > numero2 && numero1 > numero3 && numero1 > numero4)
	{
	    int passado = numero1;
	    numero1 = numero4;
	    numero4 = passado;
	}
	else if(numero2 > numero1 && numero2 > numero3 && numero2 > numero4)
	{
	    int passado = numero2;
	    numero2 = numero4;
	    numero4 = passado;
	}
	else if(numero3 > numero1 && numero3 > numero2 && numero3 > numero4)
	{
	    int passado = numero3;
	    numero3 = numero4;
	    numero4 = passado;
	}
	
	if (numero1 + numero2 > numero3)
	{
	    if (numero1 + numero3 > numero2)
	    {
	        if (numero2 + numero3 > numero1)
	        {
	            printf ("S");
	        }
	        else
	        {
	            printf ("N");
	        }
	    }
	    else
	    {
	        printf ("N");
	    }
	}
	else
	{
	    printf ("N");
	}
}

/*

● Exercício 6:

Elaborar um programa para exibir os múltiplos de um número compreendidos entre dois valores dados.

Exemplo de Entrada:               Exemplo de Saída:

5  9  20                          10 15 20
9  5  30                          9 18 27

*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int num_multip, num_min, num_max, count;

    scanf("%d", &num_multip);
    scanf("%d", &num_min);
    scanf("%d", &num_max);

    for (count = 0; count < 100; count ++)
    {
        if (count <= num_max && count >= num_min)
        {
            if (count % num_multip == 0)
            {
                printf("%d ", count);
            }
        }
    }
}

/*

● Exercício 7:

Elaborar um programa que gere o n-ésimo termo da sequência de Fibonacci.


Exemplo:

Entrada:             Saída:

1                         0
2                         1
3                         1
4                         2
6                         5

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int nesimo_fibonacci(int number) {
    if (number == 1)
    {
        return 0;
    }
    else
    {
        if (number == 2)
        {
            return 1;
        }
        else
        {
            return nesimo_fibonacci(number - 1) + nesimo_fibonacci(number - 2);
        }
    }
}

int main() {
    int number;

    scanf("%d", &number);

    printf("%d", nesimo_fibonacci(number));
}

/*

● Exercício 8:

Elaborar um programa que gere o n-ésimo termo da sequência de Fibonacci.


Exemplo:

Entrada:             Saída:

1                         0
2                         1
3                         1
4                         2
6                         5

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int nesimo_fibonacci(int number)
{
    if (number == 1)
    {
        return 0;
    }
    else
    {
        if (number == 2)
        {
            return 1;
        }
        else
        {
            return nesimo_fibonacci(number - 1) + nesimo_fibonacci(number - 2);
        }
    }
}

int main() {
    int number;

    scanf("%d", &number);

    printf("%d", nesimo_fibonacci(number));
}

/*

● Exercício 9:

Elaborar um programa para exibir máximo divisor comum de 2 números inteiros.

Entrada:             Saída:

8 12                 MDC = 4

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int num1, num2, count, higher, mdc;

    scanf("%d %d", &num1, &num2);

    count = 3;
    higher = 0;

    while (count < 999) {
        if (num1 % count == 0 && num2 % count == 0) {
            mdc = count;
            if (mdc > higher) {
                higher = mdc;
            }
        }
        count ++;
    }
    printf("MDC = %d", higher);
}

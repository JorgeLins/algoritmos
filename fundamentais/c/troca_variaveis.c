/*
 Algoritmo Fundamental N� 1
 Disciplina: Algoritmos e Programa��o de Computadores
 Professor : Gilson Pereira
 Descri��o : Troca dos valores de duas vari�veis
 Problema  : Dadas duas vari�veis, trocar os valores atribu�dos a elas.
 Aplica��es: Algoritmos de ordena��o.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declara��es das vari�veis
    int a, b, c;

    printf("Informe o valor de A: ");
    scanf("%d", &a);
    printf("Informe o valor de B: ");
    scanf("%d", &b);

    // Guardar em C o valor original de A
    c = a;

    // Atribuir a A o valor original de B
    a = b;

    // Atribuir a B o valor original de A, que est� armazenado em C
    b = c;

    printf("Novo valor de A: %d\n", a);
    printf("Novo valor de B: %d", b);

    return 0;
}

/*Leia dois valores inteiros, no caso para variáveis A e B.
 A seguir, calcule a soma entre elas e atribua à variável SOMA. 
 A seguir escrever o valor desta variável.*/

 #include <stdio.h>
 #include <stdlib.h>
 int main () {
     int a, b, soma;
    printf("Digite os Valores de A e B: \n");
    scanf("%d%d", &a, &b);
    soma=a+b;
    printf("SOMA = %d\n", soma);
    system("pause>>null");
    return 0;
 }
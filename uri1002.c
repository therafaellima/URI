/*A fórmula para calcular a área de uma circunferência é: area = π . raio2. 
Considerando para este problema que π = 3.14159:
- Efetue o cálculo da área, elevando o valor de raio ao quadrado e multiplicando por π.*/

#include <stdio.h>
#include <stdlib.h>
#define pi 3.14159
int main() {
    double area, raio;
    //printf("Digite o valor do raio: \n");
    scanf("%lf", &raio);
    area= pi * (raio * raio);
    printf("A=%.4lf\n", area);
    system("pause>>null");
    return 0;
}
#include <stdio.h>

int main () {
    int tempo, segundos, minutos, horas, hora_segundos;
    hora_segundos = 3600;
    /*Leia um valor inteiro, que é o tempo de duração em segundos
     de um determinado evento em uma fábrica*/
    scanf("%d", &tempo);
    //calculo de conversão de tempo
    horas = tempo / hora_segundos;
    minutos = (tempo - (hora_segundos * horas)) / 60;
    segundos = (tempo - (hora_segundos * horas) - (minutos * 60));
    //informe-o expresso no formato horas:minutos:segundos.
    printf("%d:%d:%d\n", horas, minutos, segundos);
    return 0;
}
#include <stdio.h>

int main () {
    float num;
   //ler um valor qualquer.
   //printf("Digite um valor qualquer: ");
   scanf("%f", &num);
   /*apresente uma mensagem dizendo em qual dos seguintes intervalos 
   ([0,25], (25,50], (50,75], (75,100]) este valor se encontra.*/
    if (num >= 0 && num <=25) {
        printf("Intervalo [0,25]\n");
    }
    else if (num > 25 && num <= 50) {
        printf("Intervalo (25,50]\n");
    }
    else if (num >50 && num <=75) {
         printf("Intervalo (50,75]\n");
    }
    else if (num >75 && num <=100) {
        printf("Intervalo (75,100]\n");
    }
    /*Obviamente se o valor não estiver em nenhum destes intervalos, 
    deverá ser impressa a mensagem “Fora de intervalo”.*/
    else {
        printf("Fora de intervalo\n");
    }
    return 0;
}
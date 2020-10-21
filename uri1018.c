#include <stdio.h>

int main () {
    int total, sobra, cem, cinq, vint, dez, cinco, dois, um;
    //Ler um valor inteiro.
    scanf("%d", &total);
    /*calcular o menor número de notas possíveis (cédulas) 
    no qual o valor pode ser decomposto.*/
    sobra = total;
    cem = sobra/100;
    sobra = sobra - (cem * 100);
    cinq = sobra / 50;
    sobra = sobra - (cinq * 50);
    vint = sobra / 20;
    sobra = sobra - (vint * 20);
    dez = sobra / 10;
    sobra = sobra - (dez * 10);
    cinco = sobra / 5;
    sobra = sobra - (cinco * 5);
    dois = sobra / 2;
    sobra = sobra - (dois * 2);
    //mostrar o valor lido e a relação de notas necessárias.
    printf("%d\n",total);
    printf("%d nota(s) de R$ 100,00\n",cem);
    printf("%d nota(s) de R$ 50,00\n",cinq);
    printf("%d nota(s) de R$ 20,00\n",vint);
    printf("%d nota(s) de R$ 10,00\n",dez);
    printf("%d nota(s) de R$ 5,00\n",cinco);
    printf("%d nota(s) de R$ 2,00\n",dois);
    printf("%d nota(s) de R$ 1,00\n",sobra);
    return 0;
}
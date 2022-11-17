#include <stdio.h>
#include <stdlib.h>

int main(){

    int n1, n2, n3, n4, operador;
    char resposta;
    do{
        printf("\nInforme os dois valores: ");
        scanf("%d%d", &n1,&n2);
        system("clear");
        printf ("\t----------MENU----------\n\tEscolha uma operação: \n\t1 - Adição \n\t2 - Subtração \n\t3 - Divisão \n\t4 - Multiplicação \n\t0 - Sair\n\nSua escolha: ");
        scanf(" %d", &operador);
        system("clear");
    switch (operador)
  {
    case 1:
    printf ("%d + %d = %d",n1,n2,n1 + n2);
    break;

    case 2:
    printf ("%d - %d = %d",n1,n2,n1 - n2);
    break;

    case 3:
    printf ("%d / %d = %d",n1,n2,n1 / n2);
    break;

    case 4:
    printf ("%d * %d = %d",n1,n2,n1 * n2);
    break;

    case 0:
    printf ("Obrigado por usar nossa calculadora\n");

   }
        printf("\n\tDeseja continua? (S/N)\n");
    scanf(" %c",&resposta);
    if (resposta == 'N' ||resposta == 'n'){
        printf("\tEncerrado!\nObrigado por usar nossa calculadora.");
        return 0;
    }

    }
    while(operador!=0);


    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main(){

    int num;
    int dec_to_bin;    //variavel usada na converssao de decimalpara binario
    int bin_to_dec;    //variavel usada no conversao de binario para decimal
    int count;

    printf("Digite um numero 0 a 32 quando desejar sair, digite '-1':\n");

    num = 0;
    dec_to_bin = 0;
    bin_to_dec = 0; 
    count = 0;

    while (num > -1 && num < 32){   //Esse while faz a verificação se o numero digitado é maior que -1 e menor que 32    
        scanf("%d", & num);    //fazendoa leitura dos dados digitados
        if (num > -1 && num < 32){    //determinando condicional, nesse caso se o numero digitado acima for maior que -1 e menor que 32, o programa continua, caso contrario o programa e encerrado.      
            dec_to_bin = 1 << num;    //esse sinal '<<' faz o deslocamento bit-a-bit para a esquerda, e esta deslocando o valor de variavel 'num'.
            bin_to_dec = bin_to_dec | dec_to_bin;    //O operador OR inclusivo bit a bit compara cada bit do primeiro operando com o bit correspondente de seu segundo operando.
        }
    }

    // impreção
    for (int count = 0; count < 32; count++){    //condição para execultar o codigo abaixo se o 'i' igual a '0' ou menor que '32'.
        if (bin_to_dec & 1)    //checa se ainda ha casas a esquerdapara delocar
            printf("%d ", count);    //mostra na tela o count, que correspode ao numero decimal digitado pelo usuario.
        bin_to_dec = bin_to_dec >> 1;    //convertendo o numero binario para decimal, a converção é feita da seguite forma, desloca o bit uma vez pra esquerda em cada loop
                                         //quando acabar as cassas a esquerda a quantidade de loops ussado correspode ou numero decimal digitado pelo usuario no inicio.
    }

    printf("\n");

    return 0;
}
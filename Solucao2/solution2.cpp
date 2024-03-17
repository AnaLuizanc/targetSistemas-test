#include <iostream>
#include <cstdio>
using namespace std;
#define TAMANHO_MAX 100

/**
2) Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor sempre será a soma dos 2 valores anteriores (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), escreva um programa na linguagem que desejar onde, informado um número, ele calcule a sequência de Fibonacci e retorne uma mensagem avisando se o número informado pertence ou não a sequência.
IMPORTANTE:
Esse número pode ser informado através de qualquer entrada de sua preferência ou pode ser previamente definido no código;
*/

void calculaFibonacci(int vetor[TAMANHO_MAX]){
    vetor[0] = 0;
    vetor[1] = 1;
    for(int i = 2; i<TAMANHO_MAX; i++)
        vetor[i] = vetor[i-1] + vetor[i-2];
}

int pertenceFibonacci(int vetor[TAMANHO_MAX], int valor){
    for(int i = 0; i<TAMANHO_MAX; i++){
        if(vetor[i] == valor)
            return valor;
    }
    return -1;
}

void mensagem(int retorno){
    if(retorno == -1)
        cout << "O número não pertence a sequência de Fibonacci." << endl;
    else
        cout << "O número pertence a sequÊncia de Fibonacci." << endl;
}

int main(){
    int fibonacci[TAMANHO_MAX];
    int retorno;
    calculaFibonacci(fibonacci);
    
    return 0;
}
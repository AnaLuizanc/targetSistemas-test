#include <iostream>
#include <cstring>
#define CARACTERES_MAX 100
using namespace std;

int tamanhoString(string myString){
    return myString.length();
}

void imprimeInverso(string myString, int tamanho){
    for(int i = tamanho; i>=0; i--)
        cout << myString[i];
    cout << endl;
}

int main(){

    cout << tamanhoString("testando") << endl;

    return 0;
}
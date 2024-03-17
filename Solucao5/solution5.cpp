#include <iostream>
#include <cstring>
#define CARACTERES_MAX 100
using namespace std;

int tamanhoString(string myString){
    return myString.length();
}

int main(){

    cout << tamanhoString("testando") << endl;

    return 0;
}
#include <iostream>
#include <string.h>
//ponteiros invertendo o nome
using namespace std;

int main(){
    char nome[100];
    int tam;
    char* p;
    char* pini;


    cout << "Digite um nome: " << endl;
    cin >> nome;
    
    tam = strlen(nome);
    p = &nome[tam - 1];
    pini = &nome[0];

    while (true)
    {
        cout << *p;
        if(p == pini)
            break;
        p--;
    }
    cout << endl;
    return 0;
}
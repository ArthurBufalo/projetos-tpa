#include <iostream>
using namespace std;

int main() {
    int index = 0;
    int idade = 0;
    int peso = 0;
    while (index < 7) { //Faz um loop perguntando a idade e peso das 7 pessoas
        // Bloco perguntando idade, atribuindo o valor pra variavel "a"
        cout << "Insira a idade: ";
        int a;
        cin >> a;
        idade += a;
        /* */
        // Bloco perguntando peso, atribuindo o valor pra variavel "b"
        cout << "Insira o peso: ";
        int b;
        cin >> b;
        /* */
        if (b > 90) { //Se "b" for maior que 90, incrementa o valor da variavel peso em 1
            peso++;
        }
        cout << "Idade: " << a << "  Peso: " << b << "Kg\n";
        index++; //Incrementa o valor de "index" em 1, com proposito de repetir o loop apenas 7 vezes
    }
    int media = idade/7; //Após o loop, a variavel "media" faz... a média
    cout << peso << " pessoas tem mais de 90Kg\n";
    cout << "A media de idade das 7 pessoas são " << media << " anos\n";
    return 0; //Finaliza o programa
}
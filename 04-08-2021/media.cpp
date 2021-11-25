#include <iostream>
#include <sstream>
using namespace std;

int main() {
    //Declaração de variaveis pra fazer a média
    int index = 0;
    int nums = 0;
    while (true) { //Um loop perguntando os numeros para incluir na média
        cout << "Type a number or type 'done': ";
        string s; //Declarando uma string para aceitar o valor "done"
        cin >> s;
        if (s == "done") { //Se o valor escrito for "done", finaliza o programa, printando os resultados no terminal
            cout << "printing results\n";
            cout << "Total sum: " << nums << '\n';
            cout << "Numbers entered: "<< index << '\n';
            cout << "Average: " << nums / index << '\n';
            return 0; //Finaliza o programa
        }
        else { //Caso contrario, executa o bloco abaixo
            stringstream sint(s); //Converte a variavel "s" para um int
            int i;
            sint >> i; //Atribui a conversão para "i" (infelizmente necessário, eu tenter só usar o sint 😔)
            if (i > 13 && i < 73) { //Verifica se "i" é maior que 13 ou menor que 73, caso ambos retornem verdadeiros, executa o bloco abaixo
                nums += i; //Acrescenta o valor de "i" no valor de "nums"
                index++; //Aumenta o valor de "index" em 1 (Necessário pra fazer a media)
            }
            else { //Caso o numero seja menor que 13 ou maior que 73, ignora o numero e recomeça o loop
                cout << "Number smaller than 13 or greater than 73. Ignoring...\n";
            }
        }
        
    }
}
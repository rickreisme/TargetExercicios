//Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor sempre será a soma dos 2 valores anteriores (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), escreva um programa na linguagem que desejar onde, informado um número, ele calcule a sequência de Fibonacci e retorne uma mensagem avisando se o número informado pertence ou não a sequência.

#include <iostream>
using namespace std;

int main() {

  int ult = 1;
  int penult = 0;
  int n = 10;
  
  int i = 0;
  int temp = 0;
  int num = 0;
  int controle = 0;

  int vet[n];
  vet[0] = 0;
  vet[1] = 1;

    cout << "Digite um número: ";
    cin >> num;

    cout << "\nSequencia: "<< penult << ","<< ult << ",";

    for(i=3 ; i<=n ; i++){
        vet[i] = ult+penult;

        cout << vet[i]  << ",";

        temp = penult;
        penult = ult;
        ult = ult + temp;
    }
    for(i=3 ; i<=n ; i++){
        if(num == vet[i]){
          cout << endl << "\nO número " << num << " está na sequência!"<< endl;
          controle = 1;
        }
    }
    if(controle != 1){
          cout << endl << "\nO número " << num << " não está na sequência!"<< endl;
    }
  
  
  return 0;
}
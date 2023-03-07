//Escreva um programa que inverta os caracteres de um string.

#include <iostream>
#include <string>
using namespace std;

int main() {

  string palavra;

  cout << "Digite uma palavara: ";
  cin >> palavra;
  cout << "Esta palavra escrita de forma invertida é: ";

  for(int i = palavra.size() - 1; i >= 0; i--){
    cout << palavra[i];
  }
  
  return 0;
}
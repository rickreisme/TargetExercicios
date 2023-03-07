#include <iostream>
using namespace std;

int main() {
  int indice = 13;
  int soma = 0;
  int k = 0;

  do{
    k+= 1;
    soma = soma + k;
  }while(k<indice);

  cout << endl << soma;
  return 0;
}
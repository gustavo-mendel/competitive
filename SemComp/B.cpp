#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  //inserir qtd_monstros e forca
  long long int qtd_monstros, forca;
  cin>>qtd_monstros>>forca;

  //criar vetor de monstros e inserir cada ponto
  long long int monstros[qtd_monstros];

  for (long long int i=0; i<qtd_monstros; i++) {
    cin>>monstros[i];
  }
  sort (monstros, monstros+qtd_monstros);

  //analisar cada caso
  int abatidos=0;
  for (long long int i=0; i<qtd_monstros; i++) {
    //se forca é maior ou igual a monstros[i]
    if (forca > monstros[i]) {
      abatidos++;
      forca += monstros[i]/2;
    }
  }

  cout<<abatidos<<endl;
  return 0;
} 
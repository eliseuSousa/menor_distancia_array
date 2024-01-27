#include <stdio.h>


int distanciaEntreNumeros(int num1, int num2) {
  int distancia = num2 - num1;
  if(distancia < 0) {
    distancia = -1*distancia;
  }
  return distancia;
}

int main() {

  int array1[] = {15, 32, 7, 48, 23, 40, 12, 26, 37, 5};
  int array2[] = {9, 30, 42, 50, 16, 33, 21, 38, 11, 27};

  int sizeArray1 = sizeof(array1)/sizeof(array1[0]);
  int sizeArray2 = sizeof(array2)/sizeof(array2[0]);

  int numArray1;
  int numArray2;

  int menorDistancia;
  int distanciaAtual;

  for(int i = 0; i < sizeArray1; i++) {
    for(int j = 0; j < sizeArray2; j++) {
      distanciaAtual = distanciaEntreNumeros(array2[j], array1[i]);
      if(i == 0 && j == 0) {
        menorDistancia = distanciaAtual;
        numArray1 = array1[0];
        numArray2 = array2[0];
      } else {
        if (distanciaAtual < menorDistancia) {
          menorDistancia = distanciaAtual;
          numArray1 = array1[i];
          numArray2 = array2[j];
        }
      }
    }
  }

  printf("A menor distância é a combinação do número %i do array 1 com o número %i do array 2, que seria %i de distância.", numArray1, numArray2, menorDistancia);

}
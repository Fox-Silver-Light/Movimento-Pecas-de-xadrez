#include <stdio.h>
  int main(){


  int Torrecasas = 5;
    printf("Movimento da torre 5 casas para a direita\n"); 
  //utilizar estrutura for 
  for (int i = 1; i <= Torrecasas; i++)
  {
  printf("Direita\n");
  }

  //agora usar estrutura while para bispo para movimento condicional 

  int Bispocasas = 5;
  int contadorcasas = 1;
    printf("Movimento do bispo 5 casas (para cima e direita)\n");
  while (contadorcasas <= Bispocasas)
  {
    printf("Cima, Direita\n");
    contadorcasas++;
  }
  //linha só para separar da rainha estrutura do while e to gostando de entender como funciona está divertido o unico que nao entendi muito bem é o do while mas agora vou aprender

  int Rainhacasas = 8;
  int Rainhacontador = 1;
  printf("Movimento da rainha 8 casas para esquerda\n");
  do {
  printf("Esquerda\n");
    Rainhacontador++;
  }while (Rainhacontador <= Rainhacasas);
  //entendi tudo completamente esse desafio foi facil até bem simples só demora na hora de aprender a sintaxe da estrutura pelo menos pra mim foi o mais demorado
  return 0;

}

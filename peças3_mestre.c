#include <stdio.h>
  void movertorre(int casas)
  {
    if (casas == 0) return;
    printf("Direita \n");
    movertorre(casas - 1);
  }
  
  void moverrainha(int casas)
  {
    if (casas == 0) return;
    printf("Esquerda \n");
    moverrainha(casas - 1);
  }
    
  void moverbispo(int casas)
  {
    if (casas == 0) return;
    for (int i = 1; i <= 1; i++)
    {
      for(int j = 1; j <=1; j++)
      {
        printf("Cima, Direita\n");
      } 
    }
      moverbispo(casas - 1);
  } 
  
void movercavalo() 
{

  int cima = 2;
  int direita = 1;
    
    for (int cima2 = 1; cima2 <= cima; cima2++) 
    {

      printf("Cima\n");

        for (int direita2 = 1; direita2 <= direita + 1; direita2++) 
        {

          if (cima2 < cima) 
            {
              continue;
            }

          if (direita2 > direita) 
            {
              break;
            }

            printf("Direita\n");
        }
    }
}


  int main(){

    printf("Movimento da torre:\n");
    movertorre(5);
    printf("\n");

    printf("Movimento do bispo:\n");
    moverbispo(5);
    printf("\n");

    printf("Movimento da rainha\n");
    moverrainha(8);
    printf("\n");
    
    printf("Movimento do cavalo\n");
    movercavalo();
    printf("\n");

  return 0;
}

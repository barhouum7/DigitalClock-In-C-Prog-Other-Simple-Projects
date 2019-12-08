/*=========== Preprocessor Part ============*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/*============ Constant Part ===============*/
#define MAX 50


int main(void){
  printf("\n\n\t\t\t\t\t ||||  WELCOME!  ||||");
  /* Remplissage de la Matrice.. */
  char consAb[MAX][MAX];
  int i,j,n;
  //int cons,ref;
  do{
    printf("\n\n\t\t\t Entrer Le nombre dAbonnes : ");
    scanf("%d",&n);
  }while(n<0 || n>MAX);

  // Remplissage des consommations des Abonnes ...
  printf("\n\n\n\t\t /============= Remplissage des consommations des Abonnes ==============/");
  for(i=0;i<n;i++){
    for(j=0;j<2*n-1;j++){
      if(j > n-(i-1) && j < n+(i-1))
        consAb[i][j] = '*';
      else
        consAb[i][j] = ' ';
    }
  }

  // Affichage de la Matrice Pour l'utisateur ....
  printf("\n\n\n\t\t /============= Affichage de la Matrice Pour l'utisateur .... ==============/\n\n");
  // printf("\n\n\t\t\t ConsAb[][] = \n");
  //printf("\n\n\n\t\t      Reference  |  Trimestre (1) |  Trimestre (2) |  Trimestre (3) |  Trimestre (4) |");
  printf("\n\t\t");
  for(i=0;i<n;i++){
    for(j=0;j<2*n-1;j++){
      printf("%c",consAb[i][j]);
    }
    printf("\n\n\t\t");
  }


  printf("\n\n\n\n\n\t\t\t\t\t ||||  Good By!   ||||\n\n");
  system("PAUSE");
  return 0;
}

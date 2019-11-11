#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//#include<math.h>

int testLength(int motj1){
  char testing[100];
  sprintf(testing,"%d",motj1);
  return strlen(testing);
}

int main(void){
  //WELCOME Part ...
  printf("\n\n\t\t\t        <<<<<   Hello World ! :) >>>>>\n\n\n");
  //Declaration Part ...
  int motj1,motj2,essai;
  do{
    printf("\n\n\t\t\t **** Joueur 1 ****\n\n\t\t Saisir un entier de trois chiffres : ");
    scanf("%d",&motj1);
  }while(testLength(motj1) != 3);
  printf("\n\n\t\t\t **** Joueur 2 ****\n\n\t\t Deviner quel est le nombre qui saisie par le joueur 1 ?");
  essai = 0;
  while(essai<3){
    printf("\n\t\t\t Essai %d :",essai+1);
    scanf("%d",&motj2);
    essai++;
    if((motj1%10 == motj2%10)&&((motj1/10)%10 != (motj2/10)%10)&&(motj1/100 != motj2/100))
      printf("\n\n\t\t\t --%d",motj1%10);
    else
    if((motj1%10 == motj2%10)&&((motj1/10)%10 == (motj2/10)%10)&&(motj1/100 != motj2/100))
      printf("\n\n\t\t\t -%d%d",(motj1/10)%10,motj1%10);
    else
    if((motj1%10 == motj2%10)&&((motj1/10)%10 != (motj2/10)%10)&&(motj1/100 == motj2/100))
      printf("\n\n\t\t\t %d-%d",motj1/100,motj1%10);
    else
    if((motj1%10 != motj2%10)&&((motj1/10)%10 == (motj2/10)%10)&&(motj1/100 != motj2/100))
      printf("\n\n\t\t\t -%d-",(motj1/10)%10);
    else
    if((motj1%10 != motj2%10)&&((motj1/10)%10 == (motj2/10)%10)&&(motj1/100 == motj2/100))
      printf("\n\n\t\t\t %d%d-",motj1/100,(motj1/10)%10);
    else
    if((motj1%10 == motj2%10)&&((motj1/10)%10 == (motj2/10)%10)&&(motj1/100 != motj2/100))
      printf("\n\n\t\t\t -%d%d",(motj1/10)%10,motj1%10);
    else
    if((motj1%10 != motj2%10)&&((motj1/10)%10 != (motj2/10)%10)&&(motj1/100 == motj2/100))
      printf("\n\n\t\t\t %d--",motj1/100);
    else
    if((motj1%10 == motj2%10)&&((motj1/10)%10 != (motj2/10)%10)&&(motj1/100 == motj2/100))
      printf("\n\n\t\t\t %d-%d",motj1/100,motj1%10);
    else
    if((motj1%10 != motj2%10)&&((motj1/10)%10 == (motj2/10)%10)&&(motj1/100 == motj2/100))
      printf("\n\n\t\t\t %d%d-",motj1/100,(motj1/10)%10);
    else
    if(motj1 == motj2){
      printf("\n\n\t\t\t %d",motj1);
      printf("\n\n\t\t\t Congrats ! ");
      break;
    }else
    if(essai == 3){
      printf("\n\n\t\t\t ---");
      printf("\n\n\t\t\t Game Over ! ");
    }else{
      if(essai == 3)
        printf("\n\n\t\t\t Game Over ! ");
      else
        printf("\n\t\t\t ---");
    }


  }

  printf("\n\n\n\n\t\t\t            <<<<<<  Good By Sir ! :)  >>>>>>\n\n");
  system("PAUSE\n\n");
  return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//#include<math.h>

// int testLength(int motj1){
//   char testing[100];
//   sprintf(testing,"%d",motj1);
//   return strlen(testing);
// }

 int main(void){
//   //WELCOME Part ...
//   printf("\n\n\t\t\t        <<<<<   Hello World ! :) >>>>>\n\n\n");
//   //Declaration Part ...
//   int motj1,motj2,essai;
//   do{
//     printf("\n\n\t\t\t **** Joueur 1 ****\n\n\t\t Saisir un entier de trois chiffres : ");
//     scanf("%d",&motj1);
//   //}while(testLength(motj1) != 3);
// }while(motj1<100 || motj1>999);
//   printf("\n\n\t\t\t **** Joueur 2 ****\n\n\t\t Deviner quel est le nombre qui saisie par le joueur 1 ?");
//   essai = 0;
//   while(essai<3){
//     printf("\n\t\t\t Essai %d :",essai+1);
//     scanf("%d",&motj2);
//     essai++;
//     if((motj1%10 == motj2%10)&&((motj1/10)%10 != (motj2/10)%10)&&(motj1/100 != motj2/100))
//       printf("\n\n\t\t\t --%d",motj1%10);
//     else
//     if((motj1%10 == motj2%10)&&((motj1/10)%10 == (motj2/10)%10)&&(motj1/100 != motj2/100))
//       printf("\n\n\t\t\t -%d%d",(motj1/10)%10,motj1%10);
//     else
//     if((motj1%10 == motj2%10)&&((motj1/10)%10 != (motj2/10)%10)&&(motj1/100 == motj2/100))
//       printf("\n\n\t\t\t %d-%d",motj1/100,motj1%10);
//     else
//     if((motj1%10 != motj2%10)&&((motj1/10)%10 == (motj2/10)%10)&&(motj1/100 != motj2/100))
//       printf("\n\n\t\t\t -%d-",(motj1/10)%10);
//     else
//     if((motj1%10 != motj2%10)&&((motj1/10)%10 == (motj2/10)%10)&&(motj1/100 == motj2/100))
//       printf("\n\n\t\t\t %d%d-",motj1/100,(motj1/10)%10);
//     else
//     if((motj1%10 == motj2%10)&&((motj1/10)%10 == (motj2/10)%10)&&(motj1/100 != motj2/100))
//       printf("\n\n\t\t\t -%d%d",(motj1/10)%10,motj1%10);
//     else
//     if((motj1%10 != motj2%10)&&((motj1/10)%10 != (motj2/10)%10)&&(motj1/100 == motj2/100))
//       printf("\n\n\t\t\t %d--",motj1/100);
//     else
//     if((motj1%10 == motj2%10)&&((motj1/10)%10 != (motj2/10)%10)&&(motj1/100 == motj2/100))
//       printf("\n\n\t\t\t %d-%d",motj1/100,motj1%10);
//     else
//     if((motj1%10 != motj2%10)&&((motj1/10)%10 == (motj2/10)%10)&&(motj1/100 == motj2/100))
//       printf("\n\n\t\t\t %d%d-",motj1/100,(motj1/10)%10);
//     else
//     if(motj1 == motj2){
//       printf("\n\n\t\t\t %d",motj1);
//       printf("\n\n\t\t\t Congrats ! ");
//       break;
//     }else
//     if(essai == 3){
//       printf("\n\n\t\t\t ---");
//       printf("\n\n\t\t\t Game Over ! ");
//     }else{
//       if(essai == 3)
//         printf("\n\n\t\t\t Game Over ! ");
//       else
//         printf("\n\t\t\t ---");
//     }
//
//   }

  /*-----------------------------------------------------------------------------------------------------------------------------*/


    // char Phrase[]="salut tout le monde";
    // char NewPhrase[]="";
    // int i;
    // int a = strlen(Phrase);
    // for(i=0;i<a;i++){
    //     if(Phrase[i]!=" ")
    //     {
    //        strcat(NewPhrase,Phrase[i]);
    //     }
    //
    // }
    //  printf("%s\n",NewPhrase);

  /* ----------------------------------------------------------------------------------------------------------------------- */

//   char chaine[100];
//   printf("\n\n\t\t Entrer Votre chaine : ");
//   gets(chaine);
//   printf("\n\t%s\n", chaine);
//
//   //char whiteSpace[1] = " ";
//
//   int j;
//   int posK;
//   int len = strlen(chaine);
// int k = 0;
// do{
//   if((chaine[k] != ' ')){
//     j = k;
//     printf("\n\n\t\t %d",j);
//     //do{
//       chaine[j] = chaine[k];
//       j++;
//     //}while(!((chaine[k] != ' ') && (chaine[k+1] == ' ')));
//   }
//   // if((chaine[k] != ' ') && (chaine[k+1] == ' ')){
//   //   //chaine[j] = ' ';
//   //   j = k;
//   //   while(!((chaine[k] != ' ' && chaine[k+1] == ' ') || (k<=len && chaine[k+1] != ' '))){
//   //     chaine[j] = chaine[k];
//   //     j++;
//   //   }
//   // }
//   // if((chaine[k] != ' ') && (chaine[k+1] == ' ') || (k<=len) && (chaine[k+1] != ' '))
//   //   j = k;
//
//   k++;
// }while(!(k<=len)||(!((chaine[k] != ' ') && (chaine[k+1] == ' '))));
// chaine[j+1] = '_';
// printf("\n\t\t%s", chaine);
//   printf("\n\n\t\t %d",j);
//   printf("\n\n\t\t %d",k);
//   posK = j+2;
//   printf("\n\n\t\t %d",posK);
//   int i = posK;
//   do{
//     printf("\n\n\t\t %d",posK);
//     if((chaine[posK] != ' ')){
//       //printf("\n\n\t\t %d",posK);
//       //printf("\n\n\t\t %d",i);
//       //do{
//         chaine[i] = chaine[posK];
//         i++;
//       //}while(!((chaine[posK] != ' ') && (chaine[posK+1] == ' ')));
//     }
//
//     posK++;
//   }while(!(posK<=len));
//   chaine[i+1] = '\0';
//   printf("\n\n\t\t %d",i);
//
//   printf("\n\t\t%s", chaine);



  /* ----------------------------------------------------------------------------------------------------------------------- */

  // int x = 2;
  // int *pi = &x;
  // printf("\n\n\t\t %d",x);
  // printf("\n\n\t\t %p",pi);
  // printf("\n\n\t\t %d",*pi);
  // printf("\n\n\t\t %d",*&x);
  // printf("\n\n\t\t %x",&x);

  /* ----------------------------------------------------------------------------------------------------------------------- */

  // char chaine[100];
  // printf("\n\n\t\t Entrer une chaine de caracteres : ");
  // // gets(chaine);
  // scanf("%[^\n]", &chaine);   //scanning the whole string, including the white spaces
  // printf("\n\n\t\t %s",chaine);
  // strrev(chaine);
  // printf("\n\n\t\t %s",chaine);

  /* ----------------------------------------------------------------------------------------------------------------------- */

  // int j;
  // j = strcmp("study", "ztudy");
  // printf("%d",j);

  /* ----------------------------------------------------------------------------------------------------------------------- */





  printf("\n\n\n\n\t\t\t            <<<<<<  Good By Sir ! :)  >>>>>>\n\n");
  system("PAUSE\n\n");
  return 0;
}

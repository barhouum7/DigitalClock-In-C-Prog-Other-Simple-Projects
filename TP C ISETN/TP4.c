#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include <windows.h>
//#define NMAX 8


/* Change console text color, then restore it back to normal. */
void niceColorFulRed();
void niceColorFulBlue();
void originalColor();
// _Bool locationI_Left(char gameTable[8][8]);
// _Bool locationI_Right(char gameTable[8][8]);
// _Bool locationJ_Top(char gameTable[8][8]);
// _Bool locationJ_Bottom(char gameTable[8][8]);

int main(void){

//   // /*
//   //     Cette programme nous donne les 100
//   //     premiers nombres premiers .
//   //
//   // */
//   // int n,i,nbrDiviseurs;
//   // printf("\n\n\tLes 100 Premiers nombres Premiers sont : \n");
//   // for(n=1; n<100; n++){
//   //   nbrDiviseurs = 0;
//   //   for(i=1; i<=n; i++){
//   //     if(n%i == 0){
//   //       nbrDiviseurs++;
//   //     }
//   //   }
//   //   if(nbrDiviseurs <= 2)
//   //   printf("%d  est premier.\n",n);
//   // }
//
// /*------------------------------- Exercice 2 -------------------------------------------------------------*/
//
//   // int a,b,i,n,maxDiviseur,diviseur1;
//   // printf("\n\n\t Entrez l'interval qui vous voulez => [a,b]");
//   // do{
//   //   printf("\n\t Saisir la valeur de a : ");
//   //   scanf("%d",&a);
//   //   printf("\n\t Saisir la valeur de b : ");
//   //   scanf("%d",&b);
//   // }while(((a<2)||(a>b))||(b>10));
//   // do{
//   //   printf("\n\n\t Entrez le Nombre qui vous voulez cherchez a son diviseurs : ");
//   //   scanf("%d",&n);
//   // }while((n<=20)||(n>=50));
//   // i=a;
//   // do{
//   //   if(n%i == 0)
//   //     diviseur1 = i;
//   //   i++;
//   // }while(i>b);
//   // for(i=a; i<=b; i++){
//   //   if(n%i == 0){
//   //     if(i>diviseur1)
//   //       maxDiviseur = i;
//   //   }
//   // }
//   // printf("\n\n\t Le Plus grand diviseur de %d de [%d,%d] = %d",n,a,b,maxDiviseur);
//
//   /*------------------------------- Exercice 3 -------------------------------------------------------------*/\
//
//   // int n;
//   // do{
//   //   printf("\n\n\t Entrez le Nombre des etudiants d'une Classe : ");
//   //   scanf("%d",&n);
//   // }while((n<5)||(n>20));
//   // printf("\n\n\t Saisir Les Moyennes Generale de %d Etudiants : ",n);
//   // //int i;
//   // float etudMoyenne;
//   // float sommeMoyenneClasse = 0;
//   // //for(i=1; i<=n; i++){
//   //   int i=0;
//   //   int nbrEtudAdmis = 0;
//   //   int nbrEtudElim = 0;
//   //   int nbrEtudMention = 0;
//   //   while((etudMoyenne<0)||(etudMoyenne>20)){
//   //     while((i<=n-1)){
//   //       printf("\n\t La Moyenne Generale de l'etudiant n.%d : ",i+1);
//   //       scanf("%f",&etudMoyenne);
//   //       if(!((etudMoyenne<0)||(etudMoyenne>20))|| (i<=n-1))
//   //       sommeMoyenneClasse += etudMoyenne;
//   //       if(etudMoyenne>=10){
//   //         nbrEtudAdmis++;
//   //       }
//   //       if(etudMoyenne<6){
//   //         nbrEtudElim++;
//   //       }
//   //       if(etudMoyenne>=12){
//   //         nbrEtudMention++;
//   //       }
//   //       i++;
//   //       if(i>=n){
//   //         if(etudMoyenne>=10){
//   //           printf("\n\n\t Le Nombre des Etudiants Admis est : %d",nbrEtudAdmis);
//   //         }
//   //         if(etudMoyenne<6){
//   //           printf("\n\n\t Le Nombre des Etudiants Eliminer est : %d",nbrEtudElim);
//   //         }
//   //         if(etudMoyenne>=12){
//   //             printf("\n\n\t Le Nombre des Etudiants Mentionne est : %d",nbrEtudMention);
//   //         }
//   //       }
//   //   }
//   // }
//   // printf("\n\n\t La Moyenne de la Classe est : %2.f",sommeMoyenneClasse/n);
//
//   /*------------------------------- Exercice 3 -------------------------------------------------------------*/
//
// //   int tab1[4],tab2[2];
// //   int i,j;
// //   for(i=0; i<=3; i++){
// //     printf("\n\n\t Tab1[%d] = ",i+1);
// //     scanf("%d",&tab1[i]);
// //   }
// //   printf("\n\n *--------------------------------------------------------------------------*");
// //   for(i=0; i<=1; i++){
// //     printf("\n\n\t Tab2[%d] = ",i+1);
// //     scanf("%d",&tab2[i]);
// //   }
// //   int somme=0;
// //   for(i=0; i<=1; i++){
// //     for(j=0; j<=3; j++)
// //       somme += (tab2[i]*tab1[j]);
// //
// //       printf("\n\n%d",somme);
// // }
// //   printf("\n\n\t Le schroumpf sera : %d",somme);

/*------------------------------- Game of damme.. -------------------------------------------------------------*/

  //AFFICHAGE INITIAL
      niceColorFulRed();
      printf("\n\n\t     =============================================================================================");
      printf("\n\t     ||                                                                                           ||");
      printf("\n\t     ||====================================WELCOME TO THE GAME====================================||");
      printf("\n\t     ||                                                                                           ||");
      printf("\n\t     ==============================================================================================");
      char gameTable[8][8];
      int ligneCase,colonneCase;
      //int depi,depj;
      //_Bool depOk;
      /* I initialize the table game to the player by 'O' caractere*/

      originalColor();
      for(ligneCase=0; ligneCase<=7; ligneCase++){
        for(colonneCase=0; colonneCase<=7; colonneCase++){
          gameTable[ligneCase][colonneCase] = 'O';
        }
      }

      printf("\n\n\t\t\t\tSalut Mon Frere,\n\t\t\t\t Your Game table is ready now.\n\t\t\t\t And the game will be started. ;)\n\n\t\t\t");
      /* Desplaying the table game to the player */

      for(ligneCase=0; ligneCase<=7; ligneCase++){
        for(colonneCase=0; colonneCase<=7; colonneCase++){
          printf("\t%c",gameTable[ligneCase][colonneCase]);
        }
        printf("\n\n\t\t\t");
      }

      /* I read the cases from the player */

      do{
        printf("\n\n\t\t\t\tDans quelle case se trouve son pion?");
        printf("\n\t\t\t\t\t  Quelle ligne? ");
        scanf("%d",&ligneCase);
        printf("\n\t\t\t\t\t Quelle Colonne? ");
        scanf("%d",&colonneCase);
      }while((ligneCase<1 || ligneCase>8)||(colonneCase<1 || colonneCase>8));
      gameTable[ligneCase-1][colonneCase-1] = 'X';

      /* Desplaying the table game to the player */
      printf("\n\t\t\t");
      for(ligneCase=0; ligneCase<=7; ligneCase++){
        for(colonneCase=0; colonneCase<=7; colonneCase++){
          if(gameTable[ligneCase][colonneCase] == 'O'){
            niceColorFulBlue();
            printf("\t%c",gameTable[ligneCase][colonneCase]);
          }else{
            niceColorFulRed();
            printf("\t%c",gameTable[ligneCase][colonneCase]);
          }
        }
        printf("\n\n\t\t\t");
      }
      originalColor();
      int depChoice;
      do{
        printf("\n\n\t\t\t  :: Quel Mouvement qui veut effectuer?");
        printf("\n\t\t\t    => 0 (en haut a gauche)");
        printf("\n\t\t\t    => 1 (en haut a droite)");
        printf("\n\t\t\t    => 2 (en bas a gauche)");
        printf("\n\t\t\t    => 3 (en bas a droite)");
        printf("\n\t\t\t    => 4 (If You Want To Exit The Game !)");
        printf("\n\t\t\t   :: Saisir votre choix : ");
        scanf("%d",&depChoice);
      }while(depChoice<0 || depChoice>4);

      /* ----------------- Verif Corners Case ------------------------------- */
    //   switch(depChoice){
    //     case 0:
    //       depi = ligneCase-1 ;
    //       depj = colonneCase-1 ;
    //     break;
    //     case 1:
    //       depi = ligneCase-1 ;
    //       depj = colonneCase+1 ;
    //     break;
    //     case 2:
    //       depi = ligneCase+1 ;
    //       depj = colonneCase-1 ;
    //     break;
    //     case 3:
    //       depi = ligneCase+1 ;
    //       depj = colonneCase+1 ;
    //     break;
    //     default :
    //         printf("\n\n\t\t Vous avez tape un mauvais choix, recommencez\n");
    //         //system("pause");
    //     break;
    // }
    // depOk = (depi<=8 && depj<=8)&&(depi>=1 && depj>=1);
    // printf("\n\n\t\t ========>   %d",depOk);
    // if(depOk==0){
    //   gameTable[ligneCase][colonneCase] = 'O';
    //   gameTable[depi][depj] = 'X';
    //   /* Desplaying the table game to the player */
    //           printf("\n\t\t\t");
    //           for(colonneCase=0; colonneCase<=7; colonneCase++){
    //             for(ligneCase=0; ligneCase<=7; ligneCase++){
    //
    //               //for(ligneCase=0; ligneCase<=7; ligneCase++){
    //                 //for(colonneCase=0; colonneCase<=7; colonneCase++){
    //                   if(gameTable[ligneCase][colonneCase] == 'O'){
    //                     niceColorFulBlue();
    //                     printf("\t%c",gameTable[ligneCase][colonneCase]);
    //                   }else{
    //                     niceColorFulRed();
    //                     printf("\t%c",gameTable[ligneCase][colonneCase]);
    //                   }
    //                   //}
    //                   //}
    //                 }
    //                 printf("\n\n\t\t\t");
    //               }
    // }else{
    //               niceColorFulRed();
    //               printf("\n\n\t\t\t\t *------------------ Invalid Deplacement ! ------------------*");
    //               printf("\n\n\t\t\t\t      *------------------ Game Over ! ------------------*");
    //               originalColor();
    // }


        /*  ========================================================================================================================================================= */
        /*  =================================================== Fin Methode de Mr. Nidhal ============================================================================ */
        /*  ========================================================================================================================================================= */
do{

      switch(depChoice){
        case 0:
        {
            int i,j;
            if((ligneCase==1 && colonneCase==1)||(ligneCase==1 && colonneCase==8)||(ligneCase==8 && colonneCase==1)||(ligneCase==8 && colonneCase==8)){
              //if(depChoice==0 || depChoice==1 || depChoice==2){
                  niceColorFulRed();
                  printf("\n\n\t\t\t\t *------------------ Invalid Deplacement ! ------------------*");
                  //printf("\n\n\t\t\t\t      *------------------ Game Over ! ------------------*");
                  originalColor();
                  // do{
                  //   printf("\n\n\t\t\t  :: Quel Mouvement qui veut effectuer?");
                  //   printf("\n\t\t\t    => 0 (en haut a gauche)");
                  //   printf("\n\t\t\t    => 1 (en haut a droite)");
                  //   printf("\n\t\t\t    => 2 (en bas a gauche)");
                  //   printf("\n\t\t\t    => 3 (en bas a droite)");
                  //   printf("\n\t\t\t   :: Saisir votre choix : ");
                  //   scanf("%d",&depChoice);
                  // }while(depChoice<0 || depChoice>3);
              }else
              if((ligneCase>=1 && ligneCase<=7)&&(colonneCase==1)){
              //   //printf("\n\n\t\t\t Okay !! 0\n");
                 for(i=0; i<=7; i++){
                   for(j=0; j<=7; j++){
              //       if(depChoice == 0)
                     gameTable[ligneCase-1][colonneCase-1] = 'X';
              //       else
              //       if(depChoice == 1)
              //       gameTable[ligneCase-1][colonneCase+1] = 'X';
              //       else
              //       if(depChoice == 2)
              //       gameTable[ligneCase+1][colonneCase-1] = 'X';
              //       else
              //       if(depChoice == 3)
              //       gameTable[ligneCase+1][colonneCase+1] = 'X';
              //       else
              //       gameTable[i][j] = 'O';
                   }
                 }
                //printf("\n\n\t\t\t Okay !! 5\n");

            /* Fin Verif All Cases .... */
            /* Desplaying the table game to the player */
            printf("\n\t\t\t");
            for(colonneCase=0; colonneCase<=7; colonneCase++){
              for(ligneCase=0; ligneCase<=7; ligneCase++){

                //for(ligneCase=0; ligneCase<=7; ligneCase++){
                  //for(colonneCase=0; colonneCase<=7; colonneCase++){
                    if(gameTable[ligneCase][colonneCase] == 'O'){
                      niceColorFulBlue();
                      printf("\t%c",gameTable[ligneCase][colonneCase]);
                    }else{
                      niceColorFulRed();
                      printf("\t%c",gameTable[ligneCase][colonneCase]);
                    }
                    //}
                    //}
                  }
                  printf("\n\n\t\t\t");
                }
              }else
              if((ligneCase>=1 && ligneCase<=7)&&(colonneCase==8)){
                niceColorFulRed();
                printf("\n\n\t\t\t\t *------------------ Invalid Deplacement ! ------------------*");
                //printf("\n\n\t\t\t\t      *------------------ Game Over ! ------------------*");
                originalColor();

               /* Fin Verif All Cases .... */
               /* Desplaying the table game to the player */
               printf("\n\t\t\t");
               for(colonneCase=0; colonneCase<=7; colonneCase++){
                 for(ligneCase=0; ligneCase<=7; ligneCase++){

                   //for(ligneCase=0; ligneCase<=7; ligneCase++){
                     //for(colonneCase=0; colonneCase<=7; colonneCase++){
                       if(gameTable[ligneCase][colonneCase] == 'O'){
                         niceColorFulBlue();
                         printf("\t%c",gameTable[ligneCase][colonneCase]);
                       }else{
                         niceColorFulRed();
                         printf("\t%c",gameTable[ligneCase][colonneCase]);
                       }
                       //}
                       //}
                     }
                     printf("\n\n\t\t\t");
                   }
              }else
              if((colonneCase>=1 && colonneCase<=7)&&(ligneCase==1)){
                niceColorFulRed();
                printf("\n\n\t\t\t\t *------------------ Invalid Deplacement ! ------------------*");
                //printf("\n\n\t\t\t\t      *------------------ Game Over ! ------------------*");
                originalColor();

               /* Fin Verif All Cases .... */
               /* Desplaying the table game to the player */
               printf("\n\t\t\t");
               for(colonneCase=0; colonneCase<=7; colonneCase++){
                 for(ligneCase=0; ligneCase<=7; ligneCase++){

                   //for(ligneCase=0; ligneCase<=7; ligneCase++){
                     //for(colonneCase=0; colonneCase<=7; colonneCase++){
                       if(gameTable[ligneCase][colonneCase] == 'O'){
                         niceColorFulBlue();
                         printf("\t%c",gameTable[ligneCase][colonneCase]);
                       }else{
                         niceColorFulRed();
                         printf("\t%c",gameTable[ligneCase][colonneCase]);
                       }
                       //}
                       //}
                     }
                     printf("\n\n\t\t\t");
                   }
              }else
              if((colonneCase>=1 && colonneCase<=7)&&(ligneCase==8)){
                for(i=0; i<=7; i++){
                  for(j=0; j<=7; j++){
             //       if(depChoice == 0)
                    gameTable[ligneCase-1][colonneCase-1] = 'X';
             //       else
             //       if(depChoice == 1)
             //       gameTable[ligneCase-1][colonneCase+1] = 'X';
             //       else
             //       if(depChoice == 2)
             //       gameTable[ligneCase+1][colonneCase-1] = 'X';
             //       else
             //       if(depChoice == 3)
             //       gameTable[ligneCase+1][colonneCase+1] = 'X';
             //       else
             //       gameTable[i][j] = 'O';
                  }
                }
               //printf("\n\n\t\t\t Okay !! 5\n");

           /* Fin Verif All Cases .... */
           /* Desplaying the table game to the player */
           printf("\n\t\t\t");
           for(colonneCase=0; colonneCase<=7; colonneCase++){
             for(ligneCase=0; ligneCase<=7; ligneCase++){

               //for(ligneCase=0; ligneCase<=7; ligneCase++){
                 //for(colonneCase=0; colonneCase<=7; colonneCase++){
                   if(gameTable[ligneCase][colonneCase] == 'O'){
                     niceColorFulBlue();
                     printf("\t%c",gameTable[ligneCase][colonneCase]);
                   }else{
                     niceColorFulRed();
                     printf("\t%c",gameTable[ligneCase][colonneCase]);
                   }
                   //}
                   //}
                 }
                 printf("\n\n\t\t\t");
               }
              }else{
                for(i=0; i<=7; i++){
                  for(j=0; j<=7; j++){
             //       if(depChoice == 0)
                    gameTable[ligneCase-1][colonneCase-1] = 'X';
             //       else
             //       if(depChoice == 1)
             //       gameTable[ligneCase-1][colonneCase+1] = 'X';
             //       else
             //       if(depChoice == 2)
             //       gameTable[ligneCase+1][colonneCase-1] = 'X';
             //       else
             //       if(depChoice == 3)
             //       gameTable[ligneCase+1][colonneCase+1] = 'X';
             //       else
             //       gameTable[i][j] = 'O';
                  }
                }
               //printf("\n\n\t\t\t Okay !! 5\n");

           /* Fin Verif All Cases .... */
           /* Desplaying the table game to the player */
           printf("\n\t\t\t");
           for(colonneCase=0; colonneCase<=7; colonneCase++){
             for(ligneCase=0; ligneCase<=7; ligneCase++){

               //for(ligneCase=0; ligneCase<=7; ligneCase++){
                 //for(colonneCase=0; colonneCase<=7; colonneCase++){
                   if(gameTable[ligneCase][colonneCase] == 'O'){
                     niceColorFulBlue();
                     printf("\t%c",gameTable[ligneCase][colonneCase]);
                   }else{
                     niceColorFulRed();
                     printf("\t%c",gameTable[ligneCase][colonneCase]);
                   }
                   //}
                   //}
                 }
                 printf("\n\n\t\t\t");
               }
              }
                system("\n\nPAUSE\n");
        }
        break;
        case 1:{

          int i,j;
          if((ligneCase==1 && colonneCase==1)||(ligneCase==1 && colonneCase==8)||(ligneCase==8 && colonneCase==8)){
            //if(depChoice==0 || depChoice==1 || depChoice==2){
                niceColorFulRed();
                printf("\n\n\t\t\t\t *------------------ Invalid Deplacement ! ------------------*");
                //printf("\n\n\t\t\t\t      *------------------ Game Over ! ------------------*");
                originalColor();
                // do{
                //   printf("\n\n\t\t\t  :: Quel Mouvement qui veut effectuer?");
                //   printf("\n\t\t\t    => 0 (en haut a gauche)");
                //   printf("\n\t\t\t    => 1 (en haut a droite)");
                //   printf("\n\t\t\t    => 2 (en bas a gauche)");
                //   printf("\n\t\t\t    => 3 (en bas a droite)");
                //   printf("\n\t\t\t   :: Saisir votre choix : ");
                //   scanf("%d",&depChoice);
                // }while(depChoice<0 || depChoice>3);
            }else
            if((ligneCase>=1 && ligneCase<=7)&&(colonneCase==1)){
            //   //printf("\n\n\t\t\t Okay !! 0\n");
               for(i=0; i<=7; i++){
                 for(j=0; j<=7; j++){
            //       if(depChoice == 0)
            //       gameTable[ligneCase-1][colonneCase-1] = 'X';
            //       else
            //       if(depChoice == 1)
                   gameTable[ligneCase-1][colonneCase+1] = 'X';
            //       else
            //       if(depChoice == 2)
            //       gameTable[ligneCase+1][colonneCase-1] = 'X';
            //       else
            //       if(depChoice == 3)
            //       gameTable[ligneCase+1][colonneCase+1] = 'X';
            //       else
            //       gameTable[i][j] = 'O';
                 }
               }
              //printf("\n\n\t\t\t Okay !! 5\n");

          /* Fin Verif All Cases .... */
          /* Desplaying the table game to the player */
          printf("\n\t\t\t");
          for(colonneCase=0; colonneCase<=7; colonneCase++){
            for(ligneCase=0; ligneCase<=7; ligneCase++){

              //for(ligneCase=0; ligneCase<=7; ligneCase++){
                //for(colonneCase=0; colonneCase<=7; colonneCase++){
                  if(gameTable[ligneCase][colonneCase] == 'O'){
                    niceColorFulBlue();
                    printf("\t%c",gameTable[ligneCase][colonneCase]);
                  }else{
                    niceColorFulRed();
                    printf("\t%c",gameTable[ligneCase][colonneCase]);
                  }
                  //}
                  //}
                }
                printf("\n\n\t\t\t");
              }
            }else
            if((ligneCase>=1 && ligneCase<=7)&&(colonneCase==8)){
              niceColorFulRed();
              printf("\n\n\t\t\t\t *------------------ Invalid Deplacement ! ------------------*");
              //printf("\n\n\t\t\t\t      *------------------ Game Over ! ------------------*");
              originalColor();

             /* Fin Verif All Cases .... */
             /* Desplaying the table game to the player */
             printf("\n\t\t\t");
             for(colonneCase=0; colonneCase<=7; colonneCase++){
               for(ligneCase=0; ligneCase<=7; ligneCase++){

                 //for(ligneCase=0; ligneCase<=7; ligneCase++){
                   //for(colonneCase=0; colonneCase<=7; colonneCase++){
                     if(gameTable[ligneCase][colonneCase] == 'O'){
                       niceColorFulBlue();
                       printf("\t%c",gameTable[ligneCase][colonneCase]);
                     }else{
                       niceColorFulRed();
                       printf("\t%c",gameTable[ligneCase][colonneCase]);
                     }
                     //}
                     //}
                   }
                   printf("\n\n\t\t\t");
                 }
            }else
            if((colonneCase>=1 && colonneCase<=7)&&(ligneCase==1)){
              niceColorFulRed();
              printf("\n\n\t\t\t\t *------------------ Invalid Deplacement ! ------------------*");
              //printf("\n\n\t\t\t\t      *------------------ Game Over ! ------------------*");
              originalColor();

             /* Fin Verif All Cases .... */
             /* Desplaying the table game to the player */
             printf("\n\t\t\t");
             for(colonneCase=0; colonneCase<=7; colonneCase++){
               for(ligneCase=0; ligneCase<=7; ligneCase++){

                 //for(ligneCase=0; ligneCase<=7; ligneCase++){
                   //for(colonneCase=0; colonneCase<=7; colonneCase++){
                     if(gameTable[ligneCase][colonneCase] == 'O'){
                       niceColorFulBlue();
                       printf("\t%c",gameTable[ligneCase][colonneCase]);
                     }else{
                       niceColorFulRed();
                       printf("\t%c",gameTable[ligneCase][colonneCase]);
                     }
                     //}
                     //}
                   }
                   printf("\n\n\t\t\t");
                 }
            }else
            if((colonneCase>=1 && colonneCase<=7)&&(ligneCase==8)){
              for(i=0; i<=7; i++){
                for(j=0; j<=7; j++){
           //       if(depChoice == 0)
          //        gameTable[ligneCase-1][colonneCase-1] = 'X';
           //       else
           //       if(depChoice == 1)
                  gameTable[ligneCase-1][colonneCase+1] = 'X';
           //       else
           //       if(depChoice == 2)
           //       gameTable[ligneCase+1][colonneCase-1] = 'X';
           //       else
           //       if(depChoice == 3)
           //       gameTable[ligneCase+1][colonneCase+1] = 'X';
           //       else
           //       gameTable[i][j] = 'O';
                }
              }
             //printf("\n\n\t\t\t Okay !! 5\n");

         /* Fin Verif All Cases .... */
         /* Desplaying the table game to the player */
         printf("\n\t\t\t");
         for(colonneCase=0; colonneCase<=7; colonneCase++){
           for(ligneCase=0; ligneCase<=7; ligneCase++){

             //for(ligneCase=0; ligneCase<=7; ligneCase++){
               //for(colonneCase=0; colonneCase<=7; colonneCase++){
                 if(gameTable[ligneCase][colonneCase] == 'O'){
                   niceColorFulBlue();
                   printf("\t%c",gameTable[ligneCase][colonneCase]);
                 }else{
                   niceColorFulRed();
                   printf("\t%c",gameTable[ligneCase][colonneCase]);
                 }
                 //}
                 //}
               }
               printf("\n\n\t\t\t");
             }
           }else
           if(ligneCase==8 && colonneCase==1){
              for(i=0; i<=7; i++){
                for(j=0; j<=7; j++){
           //       if(depChoice == 0)
          //        gameTable[ligneCase-1][colonneCase-1] = 'X';
           //       else
           //       if(depChoice == 1)
                    gameTable[ligneCase-1][colonneCase+1] = 'X';
           //       else
           //       if(depChoice == 2)
           //       gameTable[ligneCase+1][colonneCase-1] = 'X';
           //       else
           //       if(depChoice == 3)
           //       gameTable[ligneCase+1][colonneCase+1] = 'X';
           //       else
           //       gameTable[i][j] = 'O';
                }
              }
             //printf("\n\n\t\t\t Okay !! 5\n");

         /* Fin Verif All Cases .... */
         /* Desplaying the table game to the player */
         printf("\n\t\t\t");
         for(colonneCase=0; colonneCase<=7; colonneCase++){
           for(ligneCase=0; ligneCase<=7; ligneCase++){

             //for(ligneCase=0; ligneCase<=7; ligneCase++){
               //for(colonneCase=0; colonneCase<=7; colonneCase++){
                 if(gameTable[ligneCase][colonneCase] == 'O'){
                   niceColorFulBlue();
                   printf("\t%c",gameTable[ligneCase][colonneCase]);
                 }else{
                   niceColorFulRed();
                   printf("\t%c",gameTable[ligneCase][colonneCase]);
                 }
                 //}
                 //}
               }
               printf("\n\n\t\t\t");
             }
           }else{
             for(i=0; i<=7; i++){
               for(j=0; j<=7; j++){
          //       if(depChoice == 0)
          //       gameTable[ligneCase-1][colonneCase-1] = 'X';
          //       else
          //       if(depChoice == 1)
                 gameTable[ligneCase-1][colonneCase+1] = 'X';
          //       else
          //       if(depChoice == 2)
          //       gameTable[ligneCase+1][colonneCase-1] = 'X';
          //       else
          //       if(depChoice == 3)
          //       gameTable[ligneCase+1][colonneCase+1] = 'X';
          //       else
          //       gameTable[i][j] = 'O';
               }
             }
            //printf("\n\n\t\t\t Okay !! 5\n");

        /* Fin Verif All Cases .... */
        /* Desplaying the table game to the player */
        printf("\n\t\t\t");
        for(colonneCase=0; colonneCase<=7; colonneCase++){
          for(ligneCase=0; ligneCase<=7; ligneCase++){

            //for(ligneCase=0; ligneCase<=7; ligneCase++){
              //for(colonneCase=0; colonneCase<=7; colonneCase++){
                if(gameTable[ligneCase][colonneCase] == 'O'){
                  niceColorFulBlue();
                  printf("\t%c",gameTable[ligneCase][colonneCase]);
                }else{
                  niceColorFulRed();
                  printf("\t%c",gameTable[ligneCase][colonneCase]);
                }
                //}
                //}
              }
              printf("\n\n\t\t\t");
            }
           }
          system("\n\nPAUSE\n");
        }
        break;
        case 2:{

          int i,j;
          if((ligneCase==1 && colonneCase==1)||(ligneCase==8 && colonneCase==1)||(ligneCase==8 && colonneCase==8)){
            //if(depChoice==0 || depChoice==1 || depChoice==2){
                niceColorFulRed();
                printf("\n\n\t\t\t\t *------------------ Invalid Deplacement ! ------------------*");
                //printf("\n\n\t\t\t\t      *------------------ Game Over ! ------------------*");
                originalColor();
                // do{
                //   printf("\n\n\t\t\t  :: Quel Mouvement qui veut effectuer?");
                //   printf("\n\t\t\t    => 0 (en haut a gauche)");
                //   printf("\n\t\t\t    => 1 (en haut a droite)");
                //   printf("\n\t\t\t    => 2 (en bas a gauche)");
                //   printf("\n\t\t\t    => 3 (en bas a droite)");
                //   printf("\n\t\t\t   :: Saisir votre choix : ");
                //   scanf("%d",&depChoice);
                // }while(depChoice<0 || depChoice>3);
            }else
            if((ligneCase>=1 && ligneCase<=7)&&(colonneCase==1)){
              niceColorFulRed();
              printf("\n\n\t\t\t\t *------------------ Invalid Deplacement ! ------------------*");
              //printf("\n\n\t\t\t\t      *------------------ Game Over ! ------------------*");
              originalColor();

             /* Fin Verif All Cases .... */
             /* Desplaying the table game to the player */
             printf("\n\t\t\t");
             for(colonneCase=0; colonneCase<=7; colonneCase++){
               for(ligneCase=0; ligneCase<=7; ligneCase++){

                 //for(ligneCase=0; ligneCase<=7; ligneCase++){
                   //for(colonneCase=0; colonneCase<=7; colonneCase++){
                     if(gameTable[ligneCase][colonneCase] == 'O'){
                       niceColorFulBlue();
                       printf("\t%c",gameTable[ligneCase][colonneCase]);
                     }else{
                       niceColorFulRed();
                       printf("\t%c",gameTable[ligneCase][colonneCase]);
                     }
                     //}
                     //}
                   }
                   printf("\n\n\t\t\t");
                 }
            }else
            if((ligneCase>=1 && ligneCase<=7)&&(colonneCase==8)){
              //   //printf("\n\n\t\t\t Okay !! 0\n");
                 for(i=0; i<=7; i++){
                   for(j=0; j<=7; j++){
              //       if(depChoice == 0)
              //       gameTable[ligneCase-1][colonneCase-1] = 'X';
              //       else
              //       if(depChoice == 1)
              //       gameTable[ligneCase-1][colonneCase+1] = 'X';
              //       else
              //       if(depChoice == 2)
                     gameTable[ligneCase+1][colonneCase-1] = 'X';
              //       else
              //       if(depChoice == 3)
              //       gameTable[ligneCase+1][colonneCase+1] = 'X';
              //       else
              //       gameTable[i][j] = 'O';
                   }
                 }
                //printf("\n\n\t\t\t Okay !! 5\n");

            /* Fin Verif All Cases .... */
            /* Desplaying the table game to the player */
            printf("\n\t\t\t");
            for(colonneCase=0; colonneCase<=7; colonneCase++){
              for(ligneCase=0; ligneCase<=7; ligneCase++){

                //for(ligneCase=0; ligneCase<=7; ligneCase++){
                  //for(colonneCase=0; colonneCase<=7; colonneCase++){
                    if(gameTable[ligneCase][colonneCase] == 'O'){
                      niceColorFulBlue();
                      printf("\t%c",gameTable[ligneCase][colonneCase]);
                    }else{
                      niceColorFulRed();
                      printf("\t%c",gameTable[ligneCase][colonneCase]);
                    }
                    //}
                    //}
                  }
                  printf("\n\n\t\t\t");
                }
            }else
            if((colonneCase>=1 && colonneCase<=7)&&(ligneCase==1)){
              //   //printf("\n\n\t\t\t Okay !! 0\n");
                 for(i=0; i<=7; i++){
                   for(j=0; j<=7; j++){
              //       if(depChoice == 0)
              //       gameTable[ligneCase-1][colonneCase-1] = 'X';
              //       else
              //       if(depChoice == 1)
              //       gameTable[ligneCase-1][colonneCase+1] = 'X';
              //       else
              //       if(depChoice == 2)
                     gameTable[ligneCase+1][colonneCase-1] = 'X';
              //       else
              //       if(depChoice == 3)
              //       gameTable[ligneCase+1][colonneCase+1] = 'X';
              //       else
              //       gameTable[i][j] = 'O';
                   }
                 }
                //printf("\n\n\t\t\t Okay !! 5\n");

            /* Fin Verif All Cases .... */
            /* Desplaying the table game to the player */
            printf("\n\t\t\t");
            for(colonneCase=0; colonneCase<=7; colonneCase++){
              for(ligneCase=0; ligneCase<=7; ligneCase++){

                //for(ligneCase=0; ligneCase<=7; ligneCase++){
                  //for(colonneCase=0; colonneCase<=7; colonneCase++){
                    if(gameTable[ligneCase][colonneCase] == 'O'){
                      niceColorFulBlue();
                      printf("\t%c",gameTable[ligneCase][colonneCase]);
                    }else{
                      niceColorFulRed();
                      printf("\t%c",gameTable[ligneCase][colonneCase]);
                    }
                    //}
                    //}
                  }
                  printf("\n\n\t\t\t");
                }
            }else
            if((colonneCase>=1 && colonneCase<=7)&&(ligneCase==8)){
              niceColorFulRed();
              printf("\n\n\t\t\t\t *------------------ Invalid Deplacement ! ------------------*");
              //printf("\n\n\t\t\t\t      *------------------ Game Over ! ------------------*");
              originalColor();

             /* Fin Verif All Cases .... */
             /* Desplaying the table game to the player */
             printf("\n\t\t\t");
             for(colonneCase=0; colonneCase<=7; colonneCase++){
               for(ligneCase=0; ligneCase<=7; ligneCase++){

                 //for(ligneCase=0; ligneCase<=7; ligneCase++){
                   //for(colonneCase=0; colonneCase<=7; colonneCase++){
                     if(gameTable[ligneCase][colonneCase] == 'O'){
                       niceColorFulBlue();
                       printf("\t%c",gameTable[ligneCase][colonneCase]);
                     }else{
                       niceColorFulRed();
                       printf("\t%c",gameTable[ligneCase][colonneCase]);
                     }
                     //}
                     //}
                   }
                   printf("\n\n\t\t\t");
                 }
           }else
           if(ligneCase==1 && colonneCase==8){
              for(i=0; i<=7; i++){
                for(j=0; j<=7; j++){
           //       if(depChoice == 0)
          //        gameTable[ligneCase-1][colonneCase-1] = 'X';
           //       else
           //       if(depChoice == 1)
          //        gameTable[ligneCase-1][colonneCase+1] = 'X';
           //       else
           //       if(depChoice == 2)
                  gameTable[ligneCase+1][colonneCase-1] = 'X';
           //       else
           //       if(depChoice == 3)
           //       gameTable[ligneCase+1][colonneCase+1] = 'X';
           //       else
           //       gameTable[i][j] = 'O';
                }
              }
             //printf("\n\n\t\t\t Okay !! 5\n");

         /* Fin Verif All Cases .... */
         /* Desplaying the table game to the player */
         printf("\n\t\t\t");
         for(colonneCase=0; colonneCase<=7; colonneCase++){
           for(ligneCase=0; ligneCase<=7; ligneCase++){

             //for(ligneCase=0; ligneCase<=7; ligneCase++){
               //for(colonneCase=0; colonneCase<=7; colonneCase++){
                 if(gameTable[ligneCase][colonneCase] == 'O'){
                   niceColorFulBlue();
                   printf("\t%c",gameTable[ligneCase][colonneCase]);
                 }else{
                   niceColorFulRed();
                   printf("\t%c",gameTable[ligneCase][colonneCase]);
                 }
                 //}
                 //}
               }
               printf("\n\n\t\t\t");
             }
           }else{
             for(i=0; i<=7; i++){
               for(j=0; j<=7; j++){
          //       if(depChoice == 0)
          //       gameTable[ligneCase-1][colonneCase-1] = 'X';
          //       else
          //       if(depChoice == 1)
          //       gameTable[ligneCase-1][colonneCase+1] = 'X';
          //       else
          //       if(depChoice == 2)
                 gameTable[ligneCase+1][colonneCase-1] = 'X';
          //       else
          //       if(depChoice == 3)
          //       gameTable[ligneCase+1][colonneCase+1] = 'X';
          //       else
          //       gameTable[i][j] = 'O';
               }
             }
            //printf("\n\n\t\t\t Okay !! 5\n");

        /* Fin Verif All Cases .... */
        /* Desplaying the table game to the player */
        printf("\n\t\t\t");
        for(colonneCase=0; colonneCase<=7; colonneCase++){
          for(ligneCase=0; ligneCase<=7; ligneCase++){

            //for(ligneCase=0; ligneCase<=7; ligneCase++){
              //for(colonneCase=0; colonneCase<=7; colonneCase++){
                if(gameTable[ligneCase][colonneCase] == 'O'){
                  niceColorFulBlue();
                  printf("\t%c",gameTable[ligneCase][colonneCase]);
                }else{
                  niceColorFulRed();
                  printf("\t%c",gameTable[ligneCase][colonneCase]);
                }
                //}
                //}
              }
              printf("\n\n\t\t\t");
            }
           }
          system("\n\nPAUSE\n");
        }
        break;
        case 3:{

          int i,j;
          if((ligneCase==1 && colonneCase==8)||(ligneCase==8 && colonneCase==1)||(ligneCase==8 && colonneCase==8)){
            //if(depChoice==0 || depChoice==1 || depChoice==2){
                niceColorFulRed();
                printf("\n\n\t\t\t\t *------------------ Invalid Deplacement ! ------------------*");
                //printf("\n\n\t\t\t\t      *------------------ Game Over ! ------------------*");
                originalColor();
                // do{
                //   printf("\n\n\t\t\t  :: Quel Mouvement qui veut effectuer?");
                //   printf("\n\t\t\t    => 0 (en haut a gauche)");
                //   printf("\n\t\t\t    => 1 (en haut a droite)");
                //   printf("\n\t\t\t    => 2 (en bas a gauche)");
                //   printf("\n\t\t\t    => 3 (en bas a droite)");
                //   printf("\n\t\t\t   :: Saisir votre choix : ");
                //   scanf("%d",&depChoice);
                // }while(depChoice<0 || depChoice>3);
                break;
            }else
            if((ligneCase>=1 && ligneCase<=7)&&(colonneCase==1)){
              //   //printf("\n\n\t\t\t Okay !! 0\n");
                 for(i=0; i<=7; i++){
                   for(j=0; j<=7; j++){
              //       if(depChoice == 0)
              //       gameTable[ligneCase-1][colonneCase-1] = 'X';
              //       else
              //       if(depChoice == 1)
              //       gameTable[ligneCase-1][colonneCase+1] = 'X';
              //       else
              //       if(depChoice == 2)
              //       gameTable[ligneCase+1][colonneCase-1] = 'X';
              //       else
              //       if(depChoice == 3)
                     gameTable[ligneCase+1][colonneCase+1] = 'X';
              //       else
              //       gameTable[i][j] = 'O';
                   }
                 }
                //printf("\n\n\t\t\t Okay !! 5\n");

            /* Fin Verif All Cases .... */
            /* Desplaying the table game to the player */
            printf("\n\t\t\t");
            for(colonneCase=0; colonneCase<=7; colonneCase++){
              for(ligneCase=0; ligneCase<=7; ligneCase++){

                //for(ligneCase=0; ligneCase<=7; ligneCase++){
                  //for(colonneCase=0; colonneCase<=7; colonneCase++){
                    if(gameTable[ligneCase][colonneCase] == 'O'){
                      niceColorFulBlue();
                      printf("\t%c",gameTable[ligneCase][colonneCase]);
                    }else{
                      niceColorFulRed();
                      printf("\t%c",gameTable[ligneCase][colonneCase]);
                    }
                    //}
                    //}
                  }
                  printf("\n\n\t\t\t");
                }
            }else
            if((ligneCase>=1 && ligneCase<=7)&&(colonneCase==8)){
                niceColorFulRed();
                printf("\n\n\t\t\t\t *------------------ Invalid Deplacement ! ------------------*");
                //printf("\n\n\t\t\t\t      *------------------ Game Over ! ------------------*");
                originalColor();

               /* Fin Verif All Cases .... */
               /* Desplaying the table game to the player */
               printf("\n\t\t\t");
               for(colonneCase=0; colonneCase<=7; colonneCase++){
                 for(ligneCase=0; ligneCase<=7; ligneCase++){

                   //for(ligneCase=0; ligneCase<=7; ligneCase++){
                     //for(colonneCase=0; colonneCase<=7; colonneCase++){
                       if(gameTable[ligneCase][colonneCase] == 'O'){
                         niceColorFulBlue();
                         printf("\t%c",gameTable[ligneCase][colonneCase]);
                       }else{
                         niceColorFulRed();
                         printf("\t%c",gameTable[ligneCase][colonneCase]);
                       }
                       //}
                       //}
                     }
                     printf("\n\n\t\t\t");
                   }
            }else
            if((colonneCase>=1 && colonneCase<=7)&&(ligneCase==1)){
              //   //printf("\n\n\t\t\t Okay !! 0\n");
                 for(i=0; i<=7; i++){
                   for(j=0; j<=7; j++){
              //       if(depChoice == 0)
              //       gameTable[ligneCase-1][colonneCase-1] = 'X';
              //       else
              //       if(depChoice == 1)
              //       gameTable[ligneCase-1][colonneCase+1] = 'X';
              //       else
              //       if(depChoice == 2)
              //       gameTable[ligneCase+1][colonneCase-1] = 'X';
              //       else
              //       if(depChoice == 3)
                     gameTable[ligneCase+1][colonneCase+1] = 'X';
              //       else
              //       gameTable[i][j] = 'O';
                   }
                 }
                //printf("\n\n\t\t\t Okay !! 5\n");

            /* Fin Verif All Cases .... */
            /* Desplaying the table game to the player */
            printf("\n\t\t\t");
            for(colonneCase=0; colonneCase<=7; colonneCase++){
              for(ligneCase=0; ligneCase<=7; ligneCase++){

                //for(ligneCase=0; ligneCase<=7; ligneCase++){
                  //for(colonneCase=0; colonneCase<=7; colonneCase++){
                    if(gameTable[ligneCase][colonneCase] == 'O'){
                      niceColorFulBlue();
                      printf("\t%c",gameTable[ligneCase][colonneCase]);
                    }else{
                      niceColorFulRed();
                      printf("\t%c",gameTable[ligneCase][colonneCase]);
                    }
                    //}
                    //}
                  }
                  printf("\n\n\t\t\t");
                }
            }else
            if((colonneCase>=1 && colonneCase<=7)&&(ligneCase==8)){
              niceColorFulRed();
              printf("\n\n\t\t\t\t *------------------ Invalid Deplacement ! ------------------*");
              //printf("\n\n\t\t\t\t      *------------------ Game Over ! ------------------*");
              originalColor();

             /* Fin Verif All Cases .... */
             /* Desplaying the table game to the player */
             printf("\n\t\t\t");
             for(colonneCase=0; colonneCase<=7; colonneCase++){
               for(ligneCase=0; ligneCase<=7; ligneCase++){

                 //for(ligneCase=0; ligneCase<=7; ligneCase++){
                   //for(colonneCase=0; colonneCase<=7; colonneCase++){
                     if(gameTable[ligneCase][colonneCase] == 'O'){
                       niceColorFulBlue();
                       printf("\t%c",gameTable[ligneCase][colonneCase]);
                     }else{
                       niceColorFulRed();
                       printf("\t%c",gameTable[ligneCase][colonneCase]);
                     }
                     //}
                     //}
                   }
                   printf("\n\n\t\t\t");
                 }
           }else
           if(ligneCase==1 && colonneCase==1){
              for(i=0; i<=7; i++){
                for(j=0; j<=7; j++){
           //       if(depChoice == 0)
          //        gameTable[ligneCase-1][colonneCase-1] = 'X';
           //       else
           //       if(depChoice == 1)
          //        gameTable[ligneCase-1][colonneCase+1] = 'X';
           //       else
           //       if(depChoice == 2)
           //       gameTable[ligneCase+1][colonneCase-1] = 'X';
           //       else
           //       if(depChoice == 3)
                  gameTable[ligneCase+1][colonneCase+1] = 'X';
           //       else
           //       gameTable[i][j] = 'O';
                }
              }
             //printf("\n\n\t\t\t Okay !! 5\n");

         /* Fin Verif All Cases .... */
         /* Desplaying the table game to the player */
         printf("\n\t\t\t");
         for(colonneCase=0; colonneCase<=7; colonneCase++){
           for(ligneCase=0; ligneCase<=7; ligneCase++){

             //for(ligneCase=0; ligneCase<=7; ligneCase++){
               //for(colonneCase=0; colonneCase<=7; colonneCase++){
                 if(gameTable[ligneCase][colonneCase] == 'O'){
                   niceColorFulBlue();
                   printf("\t%c",gameTable[ligneCase][colonneCase]);
                 }else{
                   niceColorFulRed();
                   printf("\t%c",gameTable[ligneCase][colonneCase]);
                 }
                 //}
                 //}
               }
               printf("\n\n\t\t\t");
             }
           }else{
             for(i=0; i<=7; i++){
               for(j=0; j<=7; j++){
          //       if(depChoice == 0)
          //       gameTable[ligneCase-1][colonneCase-1] = 'X';
          //       else
          //       if(depChoice == 1)
          //       gameTable[ligneCase-1][colonneCase+1] = 'X';
          //       else
          //       if(depChoice == 2)
          //       gameTable[ligneCase+1][colonneCase-1] = 'X';
          //       else
          //       if(depChoice == 3)
                 gameTable[ligneCase+1][colonneCase+1] = 'X';
          //       else
          //       gameTable[i][j] = 'O';
               }
             }
            //printf("\n\n\t\t\t Okay !! 5\n");

        /* Fin Verif All Cases .... */
        /* Desplaying the table game to the player */
        printf("\n\t\t\t");
        for(colonneCase=0; colonneCase<=7; colonneCase++){
          for(ligneCase=0; ligneCase<=7; ligneCase++){

            //for(ligneCase=0; ligneCase<=7; ligneCase++){
              //for(colonneCase=0; colonneCase<=7; colonneCase++){
                if(gameTable[ligneCase][colonneCase] == 'O'){
                  niceColorFulBlue();
                  printf("\t%c",gameTable[ligneCase][colonneCase]);
                }else{
                  niceColorFulRed();
                  printf("\t%c",gameTable[ligneCase][colonneCase]);
                }
                //}
                //}
              }
              printf("\n\n\t\t\t");
            }
           }
          //system("\n\nPAUSE\n");
        }
        break;
        case 4:{
          printf("\n\n You choosed to exit the game. \n\n\n");
          system("pause");
        }
        break;
        default:{
            printf("\n\n\t\t Vous avez tape un mauvais choix, recommencez\n");
            system("\nPAUSE\n");
        }
        break;
      }
    }while(depChoice != 4);



    /*  ========================================================================================================================================================= */
    /*  ====================================================== My First Method ...... ============================================================================ */
    /*  ========================================================================================================================================================= */



      /* ----------------- End 1st Corener --------------------- */
      // do{
      //     do{
      //         niceColorFulRed();
      //         printf("\n\n\t\t\t\t *------------------ Invalid Deplacement ! ------------------*");
      //         //printf("\n\n\t\t\t\t      *------------------ Game Over ! ------------------*");
      //         originalColor();
      //         do{
      //           printf("\n\n\t\t\t  :: Quel Mouvement qui veut effectuer?");
      //           printf("\n\t\t\t    => 0 (en haut a gauche)");
      //           printf("\n\t\t\t    => 1 (en haut a droite)");
      //           printf("\n\t\t\t    => 2 (en bas a gauche)");
      //           printf("\n\t\t\t    => 3 (en bas a droite)");
      //           printf("\n\t\t\t   :: Saisir votre choix : ");
      //           scanf("%d",&depChoice);
      //         }while(depChoice<0 || depChoice>3);
      //     }while(((ligneCase==0 && colonneCase==7) || (depChoice==0 || depChoice==1 || depChoice==3)));
      //     printf("\n\n\t\t\t Okay !! 1\n");
      // }while(!(ligneCase==0 && colonneCase==7));
      // /* ----------------- End 2st Corener --------------------- */
      // do{
      //     do{
      //         niceColorFulRed();
      //         printf("\n\n\t\t\t\t *------------------ Invalid Deplacement ! ------------------*");
      //         //printf("\n\n\t\t\t\t      *------------------ Game Over ! ------------------*");
      //         originalColor();
      //         do{
      //           printf("\n\n\t\t\t  :: Quel Mouvement qui veut effectuer?");
      //           printf("\n\t\t\t    => 0 (en haut a gauche)");
      //           printf("\n\t\t\t    => 1 (en haut a droite)");
      //           printf("\n\t\t\t    => 2 (en bas a gauche)");
      //           printf("\n\t\t\t    => 3 (en bas a droite)");
      //           printf("\n\t\t\t   :: Saisir votre choix : ");
      //           scanf("%d",&depChoice);
      //         }while(depChoice<0 || depChoice>3);
      //     }while(((ligneCase==7 && colonneCase==7) || (depChoice==1 || depChoice==2 || depChoice==3)));
      //     printf("\n\n\t\t\t Okay !! 2\n");
      // }while(!(ligneCase==7 && colonneCase==7));
      // /* ----------------- End 3th Corener --------------------- */
      // do{
      //     do{
      //         niceColorFulRed();
      //         printf("\n\n\t\t\t\t *------------------ Invalid Deplacement ! ------------------*");
      //         //printf("\n\n\t\t\t\t      *------------------ Game Over ! ------------------*");
      //         originalColor();
      //         do{
      //           printf("\n\n\t\t\t  :: Quel Mouvement qui veut effectuer?");
      //           printf("\n\t\t\t    => 0 (en haut a gauche)");
      //           printf("\n\t\t\t    => 1 (en haut a droite)");
      //           printf("\n\t\t\t    => 2 (en bas a gauche)");
      //           printf("\n\t\t\t    => 3 (en bas a droite)");
      //           printf("\n\t\t\t   :: Saisir votre choix : ");
      //           scanf("%d",&depChoice);
      //         }while(depChoice<0 || depChoice>3);
      //     }while(((ligneCase==7 && colonneCase==0) || (depChoice==0 || depChoice==2 || depChoice==3)));
      //     printf("\n\n\t\t\t Okay !! 3\n");
      // }while(!(ligneCase==7 && colonneCase==0));
      // /* ----------------- End 4th Corener --------------------- */
      //   printf("\n\n\t\t\t Okay !! ------\n");
      //     //if(!(ligneCase==1 && colonneCase==1)||(!(ligneCase==1 && colonneCase==8))||(!(ligneCase==8 && colonneCase==8))||(!(ligneCase==8 && colonneCase==1))){
      //       // niceColorFulRed();
      //       // printf("\n\n\t\t\t\t *------------------ Invalid Deplacement ! ------------------*");
      //       // printf("\n\n\t\t\t\t      *------------------ Game Over ! ------------------*");
      //       /* Verif Top and Bottom Lines... *//* And Verif Left and Right Colomns ... */
      // //int i,j;
      //         for(i=1; i<=6; i++){
      //             if((ligneCase==i && colonneCase==0) && (depChoice==0 || depChoice==2)){
      //               niceColorFulRed();
      //               printf("\n\n\t\t\t\t *------------------ Invalid Deplacement ! ------------------*");
      //               //printf("\n\n\t\t\t\t      *------------------ Game Over ! ------------------*");
      //             }
      //             if((ligneCase==i && colonneCase==7) && (depChoice==1 || depChoice==3)){
      //               niceColorFulRed();
      //               printf("\n\n\t\t\t\t *------------------ Invalid Deplacement ! ------------------*");
      //               //printf("\n\n\t\t\t\t      *------------------ Game Over ! ------------------*");
      //             }
      //         }
      //         printf("\n\n\t\t\t Okay !! 2\n");
      //
      //         for(j=1; j<=6; j++){
      //           if((ligneCase==0 && colonneCase==j) && (depChoice==0 || depChoice==1)){
      //             niceColorFulRed();
      //             printf("\n\n\t\t\t\t *------------------ Invalid Deplacement ! ------------------*");
      //             //printf("\n\n\t\t\t\t      *------------------ Game Over ! ------------------*");
      //           }
      //           if((ligneCase==7 && colonneCase==j) && (depChoice==2 || depChoice==3)){
      //             niceColorFulRed();
      //             printf("\n\n\t\t\t\t *------------------ Invalid Deplacement ! ------------------*");
      //             //printf("\n\n\t\t\t\t      *------------------ Game Over ! ------------------*");
      //           }
      //         }
      //         printf("\n\n\t\t\t Okay !! 4\n");
      //
      //             //printf("\n\n\t\t\t Okay !! ;)");
      //             //for(ligneCase=0; ligneCase<=7; ligneCase++){
      //               //for(colonneCase=0; colonneCase<=7; colonneCase++){
      //               //}
      //             //}
      // for(i=0; i<=7; i++){
      //   for(j=0; j<=7; j++){
      //     if(depChoice == 0)
      //     gameTable[ligneCase-1][colonneCase-1] = 'X';
      //     else
      //     if(depChoice == 1)
      //     gameTable[ligneCase-1][colonneCase+1] = 'X';
      //     else
      //     if(depChoice == 2)
      //     gameTable[ligneCase+1][colonneCase-1] = 'X';
      //     else
      //     if(depChoice == 3)
      //     gameTable[ligneCase+1][colonneCase+1] = 'X';
      //     else
      //     gameTable[i][j] = 'O';
      //   }
      // }
      // printf("\n\n\t\t\t Okay !! 5\n");
      //
      //
      //   /* Fin Verif All Cases .... */
      //   /* Desplaying the table game to the player */
      //   printf("\n\t\t\t");
      // for(colonneCase=0; colonneCase<=7; colonneCase++){
      //   for(ligneCase=0; ligneCase<=7; ligneCase++){
      //
      //       //for(ligneCase=0; ligneCase<=7; ligneCase++){
      //         //for(colonneCase=0; colonneCase<=7; colonneCase++){
      //           if(gameTable[ligneCase][colonneCase] == 'O'){
      //             niceColorFulBlue();
      //             printf("\t%c",gameTable[ligneCase][colonneCase]);
      //           }else{
      //             niceColorFulRed();
      //             printf("\t%c",gameTable[ligneCase][colonneCase]);
      //           }
      //         //}
      //       //}
      //   }
      //   printf("\n\n\t\t\t");
      // }
      originalColor();
        printf("\n\n");
        getch();
        return 0;
      }

      /* ------------------------ Made Consol text to RED Color --------------------------------------- */
      void niceColorFulRed(){
          HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
          CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
          WORD saved_attributes;

          /* Save current attributes */
          GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
          saved_attributes = consoleInfo.wAttributes;

          SetConsoleTextAttribute(hConsole, FOREGROUND_RED);

          // /* Restore original attributes */
          // SetConsoleTextAttribute(hConsole, saved_attributes);
          // printf("Back to normal");

      }

      /* ------------------------ Made Consol text to BLUE Color --------------------------------------- */

      void niceColorFulBlue(){
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
        WORD saved_attributes;

        /* Save current attributes */
        GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
        saved_attributes = consoleInfo.wAttributes;
        SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);

      }

      /* ------------------- Restore the original Color ----------------------------- */
      void originalColor(){
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
        WORD saved_attributes;

        /* Save current attributes */
        GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
        saved_attributes = consoleInfo.wAttributes;
        SetConsoleTextAttribute(hConsole, FOREGROUND_INTENSITY);

      }
 /* ----------------- Verification for diagonals of the table Game... ------------------------------------------------------ */

 // _Bool locationI_Left(char gameTable[8][8]){
 //   int i,j;
 //
 // }
 // _Bool locationI_Right(char gameTable[8][8]){
 //
 // }
 // _Bool locationJ_Top(char gameTable[8][8]){
 //
 // }
 // _Bool locationJ_Bottom(char gameTable[8][8]){
 //
 // }

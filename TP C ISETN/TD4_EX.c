// #include<stdio.h>
// #include<stdlib.h>
// //#include<string.h>
// #include<conio.h>
// //#include <windows.h>
// //int main(int argc, char *argv[]){
//
//
// int main(void){
//
//   /*-------------------------------- Exercice 1 ----------------------------------------*/
//   // int a;
//   //
//   // do{
//   //    printf("\n\n  :: Donnez un entier compris entre 1 et 3 : ");
//   //    scanf("%d",&a);
//   //  }while(a<=1 || a>=3);
//   //  printf("\n\n  Filicitation, Votre entier est valide. \n");
//
//   /*-------------------------------- Game of sound ----------------------------------------*/
//
// // Beep(262, 1000);
// // Beep(294, 1000);
// // Beep(330, 1000);
// // Beep(349, 1000);
// // Beep(392, 1000);
// // Beep(440, 1000);
// // Beep(494, 1000);
//
// /*-------------------------------- Exercice 2 ----------------------------------------*/
// // int number;
// // do{
// //   printf("\n\n  :: Enter a number please : ");
// //   scanf("%d",&number);
// //   if(number>=20)
// //     printf("\n\n Plus Petit SVP ! ");
// //   else if(number<=10)
// //           printf("\n\n Plus grand SVP !");
// // }while(number<=10 || number>=20);
// // //if(number>10 && number<20)
// //   printf("\n\n\t\t\t ====== Input Number SUCCESS! ====== ");
//
// /*-------------------------------- Exercice 3 ----------------------------------------*/
// // int departNumber,i;
// // printf("\n\n\t :: Enter your depart number here : ");
// // scanf("%d",&departNumber);
// // i = departNumber;
// // printf("\n\n\t Numbers after your depart number is : \n");
// // do{
// //   i++;
// //   printf("%d\t",i);
// // }while(i<departNumber+10);
//
// /*-------------------------------- Exercice 4 ----------------------------------------*/
//
// //.............
//
// /*-------------------------------- Exercice 7 ----------------------------------------*/
// // int userInputNumber,userInputNumber1,i,max,pmax;
// // printf("\n\n\t ======== Hi there, I'm here to help you.\n\t\t\tOkay, for now we need to put your numbers. ========\n");
// // printf("\n\t :: Enter 1st number : ");
// // scanf("%d",&userInputNumber1);
// // max = userInputNumber1;
// // i = 1;
// // while(i<5){
// //   i++;
// //   printf("\n\t :: Enter %d number : ",i);
// //   scanf("%d",&userInputNumber);
// //   if(max<userInputNumber){
// //     max = userInputNumber;
// //     pmax = i;
// //   }
// // }
// // printf("\n\n\t ====== The greatest one of your numbers is %d , in position number %d ======",max,pmax);
//
// /*-------------------------------- Exercice 8 ----------------------------------------*/
//
// // int userInputNumber,userInputNumber1,i,max,pmax=1;
// // printf("\n\n\t ======== Hi there, I'm here to help you.\n\t\t\tOkay, for now we need to put your numbers. ========\n");
// // do{
// // printf("\n\t :: Enter 1st number : ");
// // scanf("%d",&userInputNumber1);
// // }while(userInputNumber1==0);
// // max = userInputNumber1;
// // i = 1;
// // do{
// //   i++;
// //   printf("\n\t :: Enter %d number : ",i);
// //   scanf("%d",&userInputNumber);
// //   if(max<userInputNumber){
// //     max = userInputNumber;
// //     pmax = i;
// //   }
// // }while(userInputNumber!=0);
// // printf("\n\n\t ====== The greatest one of your numbers is %d , in position number %d ======",max,pmax);
//
// /*-------------------------------- Exercice 9 ----------------------------------------*/
//
// // int achatsDunClient,sommePaye;
// // int sommeDachats = 0;
// // _Bool choice;
// // char userRep;
// // do
// // {
// //   while(!(achatsDunClient<=0 && (achatsDunClient%10)!=0))
// //   {
// //     if(achatsDunClient>0 && (achatsDunClient%10)==0)
// //     {
// //       sommeDachats += achatsDunClient;
// //       printf("\n\n\n\t\t Do you want to add another buying prices? y/n");
// //       scanf("%s",&userRep);
// //       if(userRep == 'y')
// //       choice = 1;
// //       else choice = 0;
// //
// //       break;
// //     }
// //
// //       printf("\n\n\t ======== Hi dear client, I'm here to help you.\n\t\t\tOkay, for now we need to put your purchases in euros ending by zero ========\n");
// //       scanf("%ld",&achatsDunClient);
// //       if(!(achatsDunClient>0 && (achatsDunClient%10)==0))
// //         printf("\n\n\t\t\t [!] Price is invalide !");
// //   }
// // }while(choice == 1);
// // printf("\n\n\t La somme de vos achats est : %d ",sommeDachats);
//
// /*-------------------------------- Tic Tac Game ----------------------------------------*/
// printf("\n\n\t\t     =============================================================");
// printf("\n\t\t     ||====================WELCOME TO THE GAME===================||");
// printf("\n\t\t     =============================================================");
//
// printf("\n\n\n\t\t\t ||==================== MENU ===================||");
//
//
//   getch();
//   printf("\n\n");
//   return 0;
// }

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <time.h>



    // PROTOTYPES




int main()
{
    //VARIABLES GLOBALES

    int choix=0;
    char joueur1[20];
    char joueur2[20];
    char couleur_joueur1[5];
    char couleur_joueur2[5];
    int plateau[11][11];
    int ligne=0;
    int colonne;
    int taille_ligne =11;
    int taille_colonne =11;

    char case_blanche=219;







    do
    {


    system("cls");

     //AFFICHAGE INITIAL

    printf("\n\n ***********************************************************************\n\n\n");
    printf("\t\t      Bienvenue dans Jeu de dames\n\n");
    printf("\t                                                             \n");
    printf("\n\n ***********************************************************************\n\n");


    //MENU ET CHOIX DU MENU

    printf("\n\t               ***MENU***");
    printf("\n\t 1 : Nouvelle partie (contre humain)");
    printf("\n\t 2 : Nouvelle partie (contre IA)");
    printf("\n\t 3 : Charger une partie");
    printf("\n\t 4 : Regles du jeu");
    printf("\n\t 5 : Quitter");
    printf("\n\n Faites votre choix : ");
    scanf("%d",&choix);

    switch (choix)
      {

           case 1 :
           {
               printf("\n Vous avez choisi de commencer une nouvelle partie (contre humain)\n");
               printf("\n Quel est votre nom joueur 1 ? \n");
               scanf("%s",&joueur1);
               printf("\n Quel est votre nom joueur 2 ? \n");
               scanf("%s",&joueur2);

               printf("\n%s, voulez-vous choisir les blancs et les noirs ? (blancs/noirs)\n",joueur1);
               scanf("%s",&couleur_joueur1);

               printf("%s a pris les %s\n\n\n\n",joueur1,couleur_joueur1);

               system("cls");
               printf("Chargement du damier en cours\n");
               Sleep(1000);
               system("cls");



               // affichage du damier

               printf("    A   B   C   D   E   F   G   H   I   J\n");

               for (ligne = 0 ; ligne<taille_ligne-1 ; ligne++)
               {
                    for (colonne = 0 ; colonne<taille_colonne-1 ; colonne++)
                    {
                        plateau[ligne][colonne]=(ligne+colonne) %2;
                    }
               }



               for (ligne = 0 ; ligne<taille_ligne-1 ; ligne++)
               {

                    printf("%2.i",ligne+1);
                    for (colonne = 0 ; colonne<taille_colonne-1 ; colonne++)
                    {
                        if (plateau[ligne][colonne]==0)
                        {

                           printf("    ");
                        }
                        else
                        {
                           printf("%c%c%c%c",case_blanche,case_blanche,case_blanche,case_blanche);
                        }
                    }
                    printf("\n");

                    printf("  ");
                    for (colonne = 0 ; colonne<taille_colonne-1 ; colonne++)
                    {
                        if (plateau[ligne][colonne]==0)
                        {
                           printf("    ");
                        }
                       else
                        {
                           printf("%c%c%c%c",case_blanche,case_blanche,case_blanche,case_blanche);
                        }
                    }
                    printf("\n");
               }

               //gotoxy(500,-500);
               printf("Je suis ici");







               system("pause");
           }
           break;

           case 2 :
           {
               printf("\n Vous avez choisi de commencer une nouvelle partie (contre IA)");
           }
           break;

           case 3 :
           {
               printf("\n Vous avez choisi de charger une partie");
           }
           break;

           case 4 :
           {
               system("cls");
               printf("\n Vous avez choisi de voir les regles du jeu\n\n");
               printf(" Generalites :\n");
               printf(" Le jeu s effectue sur un damier 10*10, et la case en bas a gauche est foncee.\n");
               printf(" Les pions sont places sur les cases foncees et chaque joueur debute avec vingt  pions.\n");
               printf(" Le joueur qui commence la partie est celui qui a les pions blancs.\n");
               printf(" Les pions ne peuvent avancer que d une seule case et ne peuvent pas reculer.\n");
               printf(" Quand c est le tour d un joueur, il a pour obligation de jouer un pion (ou une  dame) si il ne peut pas, il perd la partie.\n");
               system("\n\n pause\n");

               printf("\n Conditions de prise :\n");
               printf(" Le pion prend en sautant par-dessus le pion adverse, on ne peut pas sauter deux pions colles.\n");
               printf(" Par contre, un pion peut manger plusieurs pions, s il y a toujours une case lib re entre chaque pion, c est une rafle.\n");
               printf(" On peut aussi priser en arriere.\n");
               printf(" Une prise est obligatoire.\n");
               system("\n\n pause\n");

               printf("\n Conditions pour obtenir une dame et ses deplacements :\n");
               printf(" Un pion ne devient une dame que s il s’arrete sur la dernière ligne adverse.\n");
               printf(" Une dame peut se deplacer sur la ligne entiere en avant ou en arriere.\n");
               printf(" La prise obligatoire est valable aussi pour la dame, mais la dame peut se mettr e a n importe quelle case apres le pion mange. \n\n");
               system("\n\n pause\n");

               printf("\n Conditions de victoire :\n");
               printf(" Le joueur gagne la partie si son adversaire :\n");
               printf(" -Ne peut plus bouger de pions (ou de dames).\n");
               printf(" -Abandonne.\n");
               printf(" -Depasse son temps de jeu\n");
               printf(" -Ne possede plus de pions.\n");
               printf(" Il peut y avoir match nul, si les deux joueurs se mettent d accord.\n");
               system("\n\n pause\n");


           }
           break;

           case 5 :
           {
               printf("\n Vous avez choisi de quitter le jeu");

           }
           break;

           default :
           {
               printf("\n Vous avez tape un mauvais choix, recommencez\n");
               system("pause");
           }
           break;

      }


    }while(choix!=5);

     return 0;


}

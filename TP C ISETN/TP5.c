/* This Program is to :
Ecrire un algorithme permettant de
 saisir les dimensions de la matrice A,
 saisir les éléments de la matrice A de dimension (M, N) et
 chercher et afficher tous les COLS de la matrice A.

::  © Created By GitHub@barhouum7
*/

#include<stdio.h>
#include<stdlib.h>
//#include<string.h>
//#include<math.h>


int main(void){
  //WELCOME Part ...
  printf("\n\n\t\t\t        <<<<<   Hello World ! :) >>>>>\n\n\n");

  /* ============================================================================================ */
  /* ===================================  1eme Solution... | EX6 | =============================== */
  /* ============================================================================================ */

//   //Declaration Part...
//   int colMat[20][20];
//   int lines,columns,i,j;
//   printf("\n\n\t\t\t Enter the number of lines ( MAX 50 ) : ");
//   scanf("%d",&lines);
//   printf("\n\n\t\t\t Enter the number of columns ( MAX 50 ) : ");
//   scanf("%d",&columns);
//
//   for(i=0; i<=lines-1; i++){
//     for(j=0; j<=columns-1; j++){
//       printf("\n\n\t\t\t Enter the element - Array[%d][%d] : ",i+1,j+1);
//       scanf("%d",&colMat[i][j]);
//     }
//   }
//   int transferMinMax;
//   int max[20][20];
//   int min[20][20];
//
//     for(i=0; i<lines; i++){
//       transferMinMax = colMat[i][0];
//       for(j=1; j<columns; j++){
//           if(colMat[i][j]<transferMinMax)
//             transferMinMax = colMat[i][j];
//       }
//       for(j=0; j<columns; j++){
//         if(colMat[i][j] == transferMinMax)
//           min[i][j] = 1;
//         else min[i][j] = 0;
//       }
//     }
//     for(j=0; j<columns; j++){
//       transferMinMax = colMat[0][j];
//       for(i=1; i<lines; i++){
//           if(colMat[i][j]>transferMinMax)
//             transferMinMax = colMat[i][j];
//       }
//       for(i=0; i<lines; i++){
//         if(colMat[i][j] == transferMinMax)
//           max[i][j] = 1;
//           else  max[i][j] = 0;
//       }
//
//     }
//     /* Verfing My results from both of max[][] and min[][] */
//     int k = 0;
//     for(i=0; i<lines; i++){
//       for(j=0; j<columns; j++){
//         if((max[i][j]&&min[i][j])){
//           k++;
//           printf("\n\n\t\t\t A(%d,%d) = %d est un point COL.",i+1,j+1,colMat[i][j]);
//       }
//     }
//   }
// if(k==0)
//   printf("\n\n\t\t\tLe tableau ne contient pas de points-cols.\n");


/* ============================================================================================ */
/* ===================================  2eme Solution... | EX6 | =============================== */
/* ============================================================================================ */
//  /* Déclarations */
//  int a[50][50];  /* matrice donnée */
//  int max[50][50];/* matrice indiquant les maxima des colonnes   */
//  int min[50][50];/* matrice indiquant les minima des lignes */
//  int n, m;    /* dimensions des matrices */
//  int i, j;    /* indices courants */
//  int aide;    /* pour la détection des extréma */
//  int c;       /* compteur des points-cols */
//
//  /* Saisie des données */
//  printf("\n\n\t\t\tNombre de lignes  (max.50) : ");
//  scanf("%d",&n);
//  printf("\n\n\t\t\tNombre de colonnes (max.50) : ");
//  scanf("%d",&m);
//  for(i=0; i<n; i++){
//     for(j=0; j<m; j++){
//        printf("\n\n\t\t\tElement[%d][%d] : ",i,j);
//        scanf("%d",&a[i][j]);
//     }
//   }
//  /* Affichage de la matrice */
//  printf("\n\n\t\t\tMatrice donnee :\n");
// printf("\n\n\t\t\t");
//  for(i=0; i<n; i++){
//      for(j=0; j<m; j++)
//           printf("%7d",a[i][j]);
//      printf("\n\n\t\t\t");
//   }
//
//  /* Construction de la matrice d'aide MAX */
//  /* qui indique les positions de tous les */
//  /* maxima sur une colonnes. */
//  for(i=0; i<n; i++){
//       /* Recherche du maximum sur la colonne J */
//       aide=a[i][0];
//       for(j=1; j<m; j++){
//         if(a[i][j]<aide)
//           aide=a[i][j];
//       }
//       /* Marquage de tous les maxima sur la colonne */
//       for(j=0; j<m; j++){
//         if(a[i][j]==aide)  /* ou bien :                   */
//              max[i][j]=1;   /* MIN[I][J] = (A[I][J]==AIDE) */
//         else
//              max[i][j]=0;
//       }
// }
//  /* Construction de la matrice d'aide MIN */
//  /* qui indique les positions de tous les */
//  /* minima sur une lignes. */
//  for(j=0; j<m; j++){
//       /* Recherche du minimum sur le ligne I */
//       aide=a[0][j];
//       for(i=1; i<n; i++){
//           if(a[i][j]>aide)
//             aide=a[i][j];
//       }
//       /* Marquage de tous les minima sur le ligne I */
//       for(i=0; i<n; i++){
//                 if(a[i][j]==aide)  /* ou bien :                   */
//                      min[i][j]=1;   /* MAX[I][J] = (A[I][J]==AIDE) */
//                 else
//                      min[i][j]=0;
//       }
// }
//
//  /* Edition du résultat */
//  /* Les composantes qui sont marquées comme extréma */
//  /* dans MAX et dans MIN sont des points-cols. */
//  printf("\n\n\t\t\tPoints - cols :\n");
//  for(c=0, i=0; i<n; i++){
//     for(j=0; j<m; j++){
//        if(max[i][j]&&min[i][j]){
//           c++;
//           printf("\n\n\t\t\tA(%d,%d) = %d est un point COL .\n", i, j, a[i][j]);
//         }
//     }
// }
//  if(c==0)
//      printf("\n\n\t\t\tLe tableau ne contient pas de points-cols.\n");

     /* ============================================================================================ */
     /* ===================================  1eme Solution... | EX2 | =============================== */
     /* ============================================================================================ */

     // /* Declartion Part ... */
     // int tab[50];
     // int i,j,sizeTab;
     //
     // /* Reading the elements of the table ... */
     // do{
     //   printf("\n\n\t\t\tEnter the size of the table : ");
     //   scanf("%d",&sizeTab);
     // }while(sizeTab>50);
     //
     // for(i=0; i<sizeTab; i++){
     //       printf("\n\n\t\t\tElement[%d] : ",i+1);
     //       scanf("%d",&tab[i]);
     //  }
     // /* Displaying the table for the user ,.. */
     // printf("\n\n\t\t\tYour table is ready! \n");
     // printf("\n\n\t\t\t");
     // printf("Tab[]  =  ");
     // for(i=0; i<sizeTab; i++)
     //   printf("\t%5d",tab[i]);
     //
     //  /* Search for the zeros in the table  */
     //  for(j=0, i=0; i<sizeTab; i++){
     //    if(tab[i] != 0){
     //      tab[j] = tab[i];
     //      j++;
     //    }
     //  }
     //  sizeTab = j;
     //
     //
     //  /* Displaying the table for the user ,.. */
     //  printf("\n\n\t\t\tThe new table is ready! \n");
     //  printf("\n\n\t\t\t");
     //  printf("Tab[]  =  ");
     //  for(i=0; i<sizeTab; i++)
     //    printf("\t%5d",tab[i]);

     /* ============================================================================================ */
     /* ===================================  1eme Solution... | EX3 | =============================== */
     /* ============================================================================================ */

     // /* Declartion Part ... */
     // int tab[50];
     // int i,j,sizeTab;
     //
     // /* Reading the elements of the table ... */
     // do{
     //   printf("\n\n\t\t\tEnter the size of the table : ");
     //   scanf("%d",&sizeTab);
     // }while(sizeTab>50);
     //
     // for(i=0; i<sizeTab; i++){
     //       printf("\n\n\t\t\tElement[%d] : ",i+1);
     //       scanf("%d",&tab[i]);
     //  }
     // /* Displaying the table for the user ,.. */
     // printf("\n\n\t\t\tYour table is ready! \n");
     // printf("\n\n\t\t\t");
     // printf("Tab[]  =  ");
     // for(i=0; i<sizeTab; i++)
     //   printf("\t%5d",tab[i]);
     //
     //  /* Inversing the table  */
     //  j=sizeTab-1;
     //  i=0;
     //  int aux;
     //    do{
     //      if(j!=sizeTab/2){
     //        aux = tab[j];
     //        tab[j] = tab[i];
     //        tab[i] = aux;
     //        j--;
     //        i++;
     //      }
     //    }while(j!=i);
     //
     //
     //  /* Displaying the table for the user ,.. */
     //  printf("\n\n\t\t\tThe new table is ready! \n");
     //  printf("\n\n\t\t\t");
     //  printf("Tab[]  =  ");
     //  for(i=0; i<sizeTab; i++)
     //    printf("\t%5d",tab[i]);

     /* ============================================================================================ */
     /* ===================================  1eme Solution... | EX4 | =============================== */
     /* ============================================================================================ */

     // /* Declartion Part ... */
     // int tab[50];
     // int tPos[50],tNeg[50];
     // int i,j,sizeTab;
     //
     // /* Reading the elements of the table ... */
     // do{
     //   printf("\n\n\t\t\tEnter the size of the table : ");
     //   scanf("%d",&sizeTab);
     // }while(sizeTab>50);
     //
     // for(i=0; i<sizeTab; i++){
     //       printf("\n\n\t\t\tElement[%d] : ",i+1);
     //       scanf("%d",&tab[i]);
     //  }
     // /* Displaying the table for the user ,.. */
     // printf("\n\n\t\t\tYour table is ready! \n");
     // printf("\n\n\t\t\t");
     // printf("Tab[]  =  ");
     // for(i=0; i<sizeTab; i++)
     //   printf("\t%5d",tab[i]);
     //
     //  /* transfering the positve values to tPos[]
     //  and the negative values to tNeg[], from the tab[] intial table...  */
     //  int k = 0;
     //    for(j=0,i=0; i<sizeTab; i++){
     //      if(tab[i] < 0){
     //        tNeg[j] = tab[i];
     //        j++;
     //      }else{
     //        tPos[k] = tab[i];
     //        k++;
     //      }
     //    }
     //
     //
     //
     //  /* Displaying the tPos[] table for the user ,.. */
     //  printf("\n\n\t\t\tThe new table is ready! \n");
     //  printf("\n\n\t\t\t");
     //  printf("Tab[]  =  ");
     //  for(i=0; i<k; i++)
     //    printf("\t%5d",tPos[i]);
     //
     //
     //  /* Displaying the tPos[] table for the user ,.. */
     //  printf("\n\n\t\t\tThe new table is ready! \n");
     //  printf("\n\n\t\t\t");
     //  printf("Tab[]  =  ");
     //  for(i=0; i<j; i++)
     //    printf("\t%5d",tNeg[i]);

     /* ============================================================================================ */
     /* ===================================  1eme Solution... | EX5 | =============================== */
     /* ============================================================================================ */

     //   //Declaration Part...
     //   int colMat[20][20];
     //   int lines,columns,i,j;
     //   printf("\n\n\t\t\t Enter the number of lines ( MAX 50 ) : ");
     //   scanf("%d",&lines);
     //   printf("\n\n\t\t\t Enter the number of columns ( MAX 50 ) : ");
     //   scanf("%d",&columns);
     //
     //   for(i=0; i<=lines-1; i++){
     //     for(j=0; j<=columns-1; j++){
     //       printf("\n\n\t\t\t Enter the element - Array[%d][%d] : ",i+1,j+1);
     //       scanf("%d",&colMat[i][j]);
     //     }
     //   }
     //   int transferMinMax;
     //   int max[20][20];
     //   int min[20][20];
     //
     //     for(i=0; i<lines; i++){
     //       transferMinMax = colMat[i][0];
     //       for(j=1; j<columns; j++){
     //           if(colMat[i][j]<transferMinMax)
     //             transferMinMax = colMat[i][j];
     //       }
     //       for(j=0; j<columns; j++){
     //         if(colMat[i][j] == transferMinMax)
     //           min[i][j] = 1;
     //         else min[i][j] = 0;
     //       }
     //     }
     //     for(j=0; j<columns; j++){
     //       transferMinMax = colMat[0][j];
     //       for(i=1; i<lines; i++){
     //           if(colMat[i][j]>transferMinMax)
     //             transferMinMax = colMat[i][j];
     //       }
     //       for(i=0; i<lines; i++){
     //         if(colMat[i][j] == transferMinMax)
     //           max[i][j] = 1;
     //           else  max[i][j] = 0;
     //       }
     //
     //     }
     //     /* Verfing My results from both of max[][] and min[][] */
     //     int k = 0;
     //     for(i=0; i<lines; i++){
     //       for(j=0; j<columns; j++){
     //         if((max[i][j]&&min[i][j])){
     //           k++;
     //           printf("\n\n\t\t\t A(%d,%d) = %d est un point COL.",i+1,j+1,colMat[i][j]);
     //       }
     //     }
     //   }
     // if(k==0)
     //   printf("\n\n\t\t\tLe tableau ne contient pas de points-cols.\n");


     /* ============================================================================================ */
     /* =========  1eme Solution... tiee une matrice donnee d'apres l'utilisateur | EX | =========== */
     /* ============================================================================================ */

    //   /* Déclarations */
    //   int mat[50][50];  /* Initial Matrix */
    //   int l, c;    /* Dimensions of the matrix */
    //   int i, j;    /* indices courants */
    //
    //   /* Saisie des données */
    //   do{
    //     printf("\n\n\t\t\tNombre de lignes  (max.50) : ");
    //     scanf("%d",&l);
    //     printf("\n\n\t\t\tNombre de colonnes (max.50) : ");
    //     scanf("%d",&c);
    //   }while((c<=0 || c>50)||(l<=0 || l>50));
    //
    //   for(i=0; i<l; i++){
    //      for(j=0; j<c; j++){
    //         printf("\n\n\t\t\tElement[%d][%d] : ",i,j);
    //         scanf("%d",&mat[i][j]);
    //      }
    //    }
    //    system("cls");
    //   /* Affichage de la matrice */
    //   printf("\n\n\t\t\tMatrice donnee :\n");
    //  printf("\n\n\t\t\t");
    //   for(i=0; i<l; i++){
    //       for(j=0; j<c; j++)
    //            printf("%7d",mat[i][j]);
    //       printf("\n\n\t\t\t");
    //    }
    //
    //   /* Je transfere les valeurs du matrice dans le tableau aide[]*/
    //   printf("\n\n\t\t\t");
    //   int aide[l*c];
    //   int k=0;
    //   for(i=0; i<l; i++){
    //     for(j=0; j<c; j++){
    //         aide[k] = mat[i][j];
    //         k++;
    //     }
    //    }
    //
    //    /* Affichage du tableau aide[] */
    //    printf("\n\n\t\t\t");
    //    for(i=0;i<(l*c);i++)
    //     printf("%7d",aide[i]);
    //
    // /* Tri la Matrice d'apres le aide[] */
    //     /* Je fais le tri de tableau aide[]
    //       pour transferer ses valeurs dans la Matrice...*/
    //       int n = l*c;
    //       int m = n;
    //       int posMax,max;
    //       printf("\n\n\t\t\t *========== [!] The debugging Mode [!] ==========*");
    //       while(n>0){
    //         /* Affichage du tableau aide[] */
    //         printf("\n\n\t\t The table now is ==> ");
    //         for(i=0;i<m;i++)
    //         printf("%7d",aide[i]);
    //         max = aide[0];
    //         posMax = 0;
    //         for(i=1;i<n;i++){
    //           if(aide[i]>max){
    //             max = aide[i];
    //             posMax = i;
    //           }
    //         }
    //         printf("\n\n\t\t\t=====> max = %d",max);
    //         printf("\n\n\t\t\t=====> posMax = %d",posMax);
    //         printf("\n\n\t\t\t=====> n = %d",n);
    //         for(i=posMax;i<n;i++)
    //           aide[i] = aide[i+1];
    //
    //
    //         aide[n-1] = max;
    //         n--;
    //       }
    //
    //
    //       /* Affichage du tableau aide[] */
    //       printf("\n\n\t\t\t");
    //       printf("\n\n\t    Voici le tableau aide[] est triee ==> ");
    //       for(i=0;i<m;i++)
    //        printf("%5d",aide[i]);
    //
    //        /* Affichage de la matrice */
    //       printf("\n\n\t\t\tMatrice donnee :\n");
    //       printf("\n\n\t\t\t");
    //        for(i=0; i<l; i++){
    //            for(j=0; j<c; j++)
    //                 printf("%7d",mat[i][j]);
    //            printf("\n\n\t\t\t");
    //         }
    //
    //         /* Transfere le tableau aide[] triee dans notre matrice */
    //         int kAide=0;
    //         for(i=0;i<l;i++){
    //           for(j=0;j<c;j++){
    //             mat[i][j] = aide[kAide];
    //             kAide++;
    //           }
    //         }
    //
    //
    //   /* Affichage de la matrice trier */
    //     printf("\n\n\t\t\t Et voila ! Voici votre Matrice trier ! :\n");
    //     printf("\n\n\t\t\t");
    //     for(i=0; i<l; i++){
    //       for(j=0; j<c; j++)
    //         printf("%7d",mat[i][j]);
    //
    //       printf("\n\n\t\t\t");
    //     }

    /* ============================================================================================ */
    /* =======================================  | TEST | ========================================== */
    /* ============================================================================================ */

    // int i=1;
    // int j=4;
    // printf("\n\n\t\t\t a)  %f",(float)i/j);
    // printf("\n\n\t\t\t b)  %f",(float)(i/j));
    // printf("\n\n\t\t\t c)  %f",(float)i/(float)j);

    /* ============================================================================================ */
    /* =======  1eme Solution... Addition(+) de deux matrices donnee d'apres l'utilisateur ======== */
    /* ============================================================================================ */



    /* ----------------------------------------------------------------------------------------------------------------------- */
  printf("\n\n\n\n\n              |    Mind Hackers ! - Some Exercises  .   ^,^    |");
  printf("\n\n                         ----------------------------------------\n\n\n\n");
    system("PAUSE\n\n");
    return 0;
  }

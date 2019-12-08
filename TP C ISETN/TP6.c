/* This Program is to do:

/=====/ Exercise number 1 /======/
Read a string from user and
converte all the UpperCase Characters
to a lowerCase and vice-versa !
/=====/ Exercise number 2 /======/
 This program accepts a string
  and checks whether a given string is plandrome.

/=====/ Exercise number 3 /======/

::  © Created By GitHub@barhouum7
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
//#include<conio.h>
//#include<math.h>


int main(void){
  //WELCOME Part ...
  printf("\n\n\t\t\t        <<<<<   Hello World ! :) >>>>>\n\n\n");

  /* ============================================================================================ */
  /* ===================================  1st Solution... | EX1 | =============================== */
  /* ============================================================================================ */

  // //Declaration Part...
  // char str[100];
  // int i, count, ch ;
  // printf("\n\n\t\t\t Enter a string : ");
  // for(i=0;(str[i] = getchar()) != '\n';i++);
  // str[i] = '\0';
  // /* Shows the number of chars accepted in a string ( Saving the string length ) */
  // count = i;
  // printf("\n\n\t\t\t The Given string is : %s",str);
  // printf("\n\n\t\t\t Case changed string is : ");
  // for(i=0;i<count;i++){
  //   ch = islower(str[i])? toupper(str[i]):tolower(str[i]);
  //   putchar(ch);
  //
  // }


/* ============================================================================================ */
/* ===============================  1st Solution... | EX2 | =================================== */
/* ============================================================================================ */
/* This program accepts a string
  and checks whether a given string is plandrome  */

//Declaration Part ...
// char string[50], temporaryStr[50];
//
// int i, test;
// printf("\n\n\t\t\t Enter a string here : ");
// for(i=0;(string[i] = getchar())!='\n';i++);
// string[i] = '\0';
// printf("\n\n\t\t\t The Given String is : %s",string);
// /*
//   * I use the built in function strrev()
//     to reverse the given string..
//   * I put the reverse string in other array variable of chars..
// */
// strrev(string);
// for(i=0;string[i] != '\0';i++)
//   temporaryStr[i] = string[i];
//
// temporaryStr[i] = '\0';
// printf("\n\n\t\t\t The given String after reverses it : %s",temporaryStr);
//   /*
//    * Compare the given string and its reverse. If both are equal
//    * then the given string is palindrome.
//    */
//   for(i=0;string[i] != '\0';i++)
//     if(toupper(temporaryStr[i]) == toupper(string[i]))
//       test = 1;
//     else test = 0;
//
//   if( test == 1 )
//     printf("\n\n\t\t\t %s is a Palandrome. || Correct ! ||");
//   else
//     printf("\n\n\t\t\t %s is not a Palandrome. || Wrong ! ||");


/* ============================================================================================ */
/* ===============================  1st Solution... | EX3 | =================================== */
/* ============================================================================================ */
  // i=0;
  // do{
  //   do{
  //     printf("\n\n\t\t\t U1[%d] = ",i+1);
  //     scanf("%d",&elemU1);
  //   }while((elemU1 <= 0));
  //   u1[i] = elemU1;
  //   i++;
  // }while(i!=7);

  // i=0;
  //   do{
  //     printf("\n\n\t\t\t U1[%d] = ",i+1);
  //     scanf("%d",&elemU1);
  //     if((elemU1 != 0))
  //       u1[i] = elemU1;
  //
  //     i++;
  //   }while((i != 7));

  /*===============================*//*===============================*/
    /*
      * This program is for do compression of a given verctor
          according to another given vector..
          and the compression result saved into another vector.
      * ISET Nabeul TI13 , TD7 - Exercise 7.8
    */
  /*===============================*//*===============================*/

  // int u1[20],u2[50],l[20];
  // int i;
  //
  // for(i=0;i<7;i++){
  //     do{
  //       printf("\n\n\t\t\t U1[%d] = ",i+1);
  //       scanf("%d",&u1[i]);
  //     }while(u1[i] == 0);
  // }
  //
  // /*===============================*/
  // printf("\n\n\t\t\t U1[] =  ");
  // for(i=0;i<7;i++)
  //   printf("\t%d",u1[i]);
  // /*==============================*/
  // for(i=0;i<7;i++){
  //   printf("\n\n\t\t\t L[%d] = ",i+1);
  //   do{
  //     scanf("%d",&l[i]);
  //   }while(l[i]<0 || l[i]>1);
  // }
  // /*===============================*/
  // printf("\n\n\t\t\t L[] =  ");
  // for(i=0;i<7;i++)
  //   printf("\t%d",l[i]);
  //
  // /*===============================*/
  // for(i=0;i<7;i++)
  //   u2[i] = 0;
  // /*===============================*/
  // int j=0,nU2;
  // for(i=0;i<7;i++)
  //   if(l[i] == 1)
  //     u2[j++] = u1[i];
  //
  // nU2 =j;
  //
  // /*===============================*/
  //
  // int temp;
  // for(i=0;i<nU2-1;i++){
  //   if(u2[i] > u2[i+1]){
  //     temp = u2[i+1];
  //     u2[i+1] = u2[i];
  //     u2[i] = temp;
  //   }
  // }
  // /*===============================*/
  // printf("\n\n\t\t\t U2[] =  ");
  // for(i=0;i<7;i++)
  //   printf("\t%d",u2[i]);


  /* ============================================================================================ */
  /* ===============================  1st Solution... | EX | =================================== */
  /* ============================================================================================ */

  //   /*
  //     * C Program To Print Smallest and Biggest
  //      possible Word which is Palindrome in a given String..
  //     * Solution without Functions ..
  //   */
  // //Declaration Part ...
  // char string[100];
  // int i;
  // printf("\n\n\t\t\t Enter a string here : ");
  // for(i=0;(string[i] = getchar()) != '\n';i++);
  //
  // for(i=0;string[i];i++){
  //
  // }


  /* ============================================================================================ */
  /* ===============================  1st Solution... | EX 7.9 | =================================== */
  /* ============================================================================================ */

  int tab[20][20];
  int i,j,ligne,colonne;

  for(i=0;i<8;i++){
    for(j=0;j<8;j++){
        tab[i][j] = 0;
    }
  }
  /*============= Affichage Tab ==================*/
  printf("\n\n\t\t\t Tab[][] =  \n\n");
  for(i=0;i<8;i++){
    for(j=0;j<8;j++){
        printf("%d\t",tab[i][j]);
    }
    printf("\n\n");
  }
  /*============= Traitement ==================*/
  do{
    printf("\n\n\t\t\t Enter ligne : ");
    scanf("%d",&ligne);
  }while(ligne<0 || ligne>8);
  do{
    printf("\n\n\t\t\t Enter Colonne : ");
    scanf("%d",&colonne);
  }while(colonne<0 || colonne>8);

  for(i=0;i<8;i++){
    tab[i][colonne] = 1;
    tab[ligne][i] = 1;
  }
  /*============= Affichage Tab ==================*/
  printf("\n\n\t\t\t Tab[][] =  \n\n");
  for(i=0;i<8;i++){
    for(j=0;j<8;j++){
        printf("%d\t",tab[i][j]);
    }
    printf("\n\n");
  }

  /* ----------------------------------------------------------------------------------------------------------------------- */
printf("\n\n\n\n\n              |    Mind Hackers ! - Some Exercises on Strings.   ^,^    |");
printf("\n\n                         ----------------------------------------\n\n\n\n");
system("PAUSE\n\n");
return 0;
}

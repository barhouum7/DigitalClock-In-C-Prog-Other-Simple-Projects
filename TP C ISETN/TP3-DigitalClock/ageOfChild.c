/*
This Program is to asks
the age of a child to the user.
Then he informs him of his category

::  © Created By GitHub@barhouum7
*/

#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<math.h>
#include<conio.h>

int main(){
  //WELCOME Part ...
  printf("\n\n                        <<<<< Hello World ! :) >>>>>\n");
  //Declaration Part...
  int age;
  printf("\n\n  :: Enter Your Age Please : ");
  scanf("%d",&age);
  /*
  if(age>=6 && age<=7)
    printf("\n\n  :: You are a `Poussin`\n");
  else{ if(age>=8 && age<=9)
    printf("\n\n  :: You are a `Pupille`\n");
  else if(age>=10 && age<=11)
    printf("\n\n  :: You are a `Minime`\n");
  else if(age>=12)
    printf("\n\n  :: You are a `Cadet`\n");
    else
    printf("\n\n  :: You don't have a category !\n");
  }
  *///This is the first way ...
  switch (age) {
    case 6: case 7:printf("\n\n  :: You are a `Poussin`\n");
    break;
    case 8: case 9:printf("\n\n  :: You are a `Pupille`\n");
    break;
    case 10: case 11:printf("\n\n  :: You are a `Minime`\n");
    break;
    case 12:printf("\n\n  :: You are a `Cadet`\n");

    default: printf("\n\n  :: You don't have a category !\n");
  }//And this is the second way ...
  printf("\n\n                        <<<<< Good By Sir ! :) >>>>>\n");
  getch();
  return 0;
}

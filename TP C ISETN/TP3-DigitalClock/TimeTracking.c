/*
(Graphic Digital Clock)

This Program is to tracking
the time system
in c programming language

::  © Created By GitHub@barhouum7
*/

#include<stdio.h>
#include<stdlib.h>
//#include<string.h>
//#include<math.h>
#include<conio.h>
#include<windows.h>

int main(){
  //WELCOME Part ...
  printf("\n\n        <<<<<   Hello World ! :) >>>>>\n\n\n");
  system("cls");//Clear The Screen
  //Declaration Part...
  int hour=0,min=0,second=0;

  //Task is to tracking the time system (Graphic Digital Clock)...
  printf("\n\n  :: Enter Your Current Time HH:MM:SS  : ");
  scanf("%d:%d:%d",&hour,&min,&second);
  start:;
  for(hour;hour<24;hour++){
    for(min;min<60;min++){
      for(second;second<60;second++){
        system("cls");//Clear The Screen ...
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t%d:%d:%d  \n",hour,min,second);
        Sleep(1000);
      }
      second = 0;
     }
    min = 0;
  }
hour = 0;
 printf("\n\n            <<<<<<  Good By Sir ! :)  >>>>>>\n\n");
 goto start;
 getch();
 return 0;
}

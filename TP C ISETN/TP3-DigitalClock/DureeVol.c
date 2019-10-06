/* This Program is to calculate
the duration of an airplane flight
in c programming language

::  © Created By GitHub@barhouum7
*/

#include<stdio.h>
#include<stdlib.h>
//#include<string.h>
//#include<math.h>

int main(){
  //Declaration Part...
  int hour1,hour2,min1,min2,h_Duree,min_Duree;
  //WELCOME Part ...
  printf("\n\n        <<<<<   Hello World ! :) >>>>>\n\n\n");

  //Task is to calculate the duration of an airplane flight...
  //I read the departure time...
  printf("\n  ::  Enter the departure time : HH:MM ");
  scanf("%d:%d",&hour1,&min1);
  //I read the arrival time...
  printf("\n  ::  Enter arrival time : HH:MM ");
  scanf("%d:%d",&hour2,&min2);
    if(hour2>hour1){
      if(min2>min1){
        h_Duree = hour2-hour1;
        min_Duree = min2-min1;
        printf("\n\n  :: The duration of an airplane flight is : %d:%d ",h_Duree,min_Duree);
     }else{
       h_Duree = hour2-hour1-1;
       min_Duree = min2+60-min1;
       printf("\n\n  :: The duration of an airplane flight is : %d:%d ",h_Duree,min_Duree);
    }
  }else if(min2>min1){
        h_Duree = hour2-hour1+24;
        min_Duree = min2-min1;
        printf("\n\n  :: The duration of an airplane flight is : %d:%d ",h_Duree,min_Duree);
  }else{
    h_Duree = hour2-hour1+24-1;
    min_Duree = min2+60-min1;
    printf("\n\n  :: The duration of an airplane flight is : %d:%d ",h_Duree,min_Duree);
  }//The End of Testing...


 printf("\n\n            <<<<<<  Good By Sir ! :)  >>>>>>\n\n");
  system("PAUSE\n\n");
  return 0;
}

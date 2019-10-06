/* This Program
is to calculating
the sum of 4 numbers

::  © Created By GitHub@barhouum7
*/

#include<stdio.h>
#include<stdlib.h>
//#include<string.h>
//#include<math.h>

int main(){
  //WELCOME Part ...
  printf("\n\n        <<<<<   Hello World ! :) >>>>>\n\n\n");
  //Declaration Part...
  int a,x;

  printf("\n\n  :: Enter the First Number : ");
  scanf("%d",&a);
  x = a;
  printf("\n\n  :: Enter the second Number : ");
  scanf("%d",&a);
  x = x+a;
  printf("\n\n  :: Enter the third Number : ");
  scanf("%d",&a);
  x = x+a;
  printf("\n\n  :: Enter the forth Number : ");
  scanf("%d",&a);
  x = x+a;
  printf("\n\n  :: The Sum of forth Numbers is : %d \n\n",x);

  printf("\n\n            <<<<<<  Good By Sir ! :)  >>>>>>\n\n");
  system("PAUSE\n\n");
  return 0;
}

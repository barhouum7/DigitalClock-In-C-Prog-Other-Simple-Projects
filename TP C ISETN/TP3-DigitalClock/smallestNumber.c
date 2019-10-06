/* This Program is to Finding
smallest of three integer numbers
in c programming language

::  © Created By GitHub@barhouum7
*/

#include<stdio.h>
#include<stdlib.h>
//#include<string.h>
//#include<math.h>

int main(){
  //Declaration Part...
  int a,b,c;
  //WELCOME Part ...
  printf("\n\n        <<<<<   Hello World ! :) >>>>>\n\n\n");
  //Task is to find the greatest of three integer numbers...
  //I read the three integer numbers...
  printf("\n  ::  Enter The First Number : ");
  scanf("%d",&a);
  printf("\n  ::  Enter The second Number : ");
  scanf("%d",&b);
  printf("\n  ::  Enter The Third Number : ");
  scanf("%d",&c);
  //I compare three numbers to find which is the greatest...
  printf("\n\n  ::  Your Input numbers is : %d, %d, %d",a,b,c);
   //if((a!=b) && (a!=c) && (c!=b)){
    if((a<c) && (a<b))
       printf("\n\n  :: The smallest of your three numbers is : %d",a);
    else if((b<a) && (b<c))
       printf("\n\n  :: The smallest of your three numbers is : %d",b);
    else if((c<a) && (c<b))
       printf("\n\n  :: The smallest of your three numbers is : %d\n\n",c);
 //The End of Testing...
 printf("\n\n            <<<<<<  Good By Sir ! :)  >>>>>>\n\n");
  system("PAUSE\n\n");
  return 0;
}

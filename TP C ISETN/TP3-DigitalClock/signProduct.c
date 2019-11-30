/*
This Program is to
verify the sign of product of two numbers...
© Created By GitHub@barhouum7
*/

#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<math.h>
#include<conio.h>

int main(){

  printf("\n\n                <<<<<<   Hello World ! :)   >>>>>>\n");//WELCOME Part ?\?/
  int a,b;
  printf("\n  :: Enter two numbers Please : ");
  scanf("%d %d",&a,&b);
  if(a==0 || b==0){
    printf("\n\n  :: The sign of product of this two numbers is NULL(0).\n\n");
  }else if((a>0 && b>0) || (a<0 && b<0)){
    printf("\n\n  :: The sign of product of this two numbers is Positive.\n\n");
  }else
  printf("\n\n  :: The sign of product of this two numbers is Negative.\n\n");

  printf("\n\n            <<<<<<  Good By Sir ! :)  >>>>>>\n\n");
  getch();
  return 0;
}

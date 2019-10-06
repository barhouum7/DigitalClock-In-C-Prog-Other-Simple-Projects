/*
This Program is to
verify if your numbers is Positive or Not...
© Created By GitHub@barhouum7
*/

#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<math.h>
#include<conio.h>

int main(){
  printf("\n\n                <<<<<<   Hello World ! :)   >>>>>>\n");
  int a,b;
  do{
  printf("\n  :: Enter two numbers Please : ");
  scanf("%d %d",&a,&b);
}while( a==0 || b==0);
  if(a<0 || b<0){
    printf("\n\n  :: Your numbers is NOT positive.\n");
  }else
    printf("\n\n  :: Your numbers is Positive.\n");

  printf("\n\n            <<<<<<  Good By Sir ! :)  >>>>>>\n\n");
  getch();
  return 0;
}

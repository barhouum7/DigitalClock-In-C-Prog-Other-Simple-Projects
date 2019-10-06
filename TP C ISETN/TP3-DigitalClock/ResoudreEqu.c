/*
This Program is to
solve a second degree equation...
© Created By GitHub@barhouum7
*/
#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
#include<math.h>
#include<conio.h>
/* :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::: */
#define sqr(b) ((b)*(b))

/* :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::: */
int main(){
  printf("\n\n                <<<<<<   Hello World ! :)   >>>>>>\n");
  int a,b,c,delta;
  printf("\n\n  :: Enter the values a, b and c of the equation ax^2+bx+c=0 : ");
  scanf("%d %d %d",&a,&b,&c);
  /*
  Verifying
  how many solutions for this equation ...
  */
  //Verifying is a first-degree equation or Not ...
  if(a==0)
    printf("\n\n  :: equation du premier degre.\n");
  else{
    delta = sqr(b)-4*(a*c);
    // printf("%d",delta);

      if(delta>0)
        printf("\n\n  :: Solutions for this equation is : %d AND %d",-b-sqrt(delta)/(2*a),-b+sqrt(delta)/(2*a));
      else if(delta==0)
        printf("\n\n  :: This equation has one solution : %d",-b/2*a);
      else
      printf("This equation has no real solutions.");
  }//End if() ...

  printf("\n\n            <<<<<<  Good By Sir ! :)  >>>>>>\n\n");
  getch();
  return 0;
}

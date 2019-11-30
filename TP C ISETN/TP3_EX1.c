#include<stdio.h>
#include<stdlib.h>
//#include<string.h>
#include<conio.h>

int main()
{
  // float a,b,x;
  //     /* Resolution d'une equation du premier degree .... */
  //     printf("\n\n  :: Introduire la valeur de a : ");
  //     scanf("%f",&a);
  //     printf("\n\n  :: Introduire la valeur de b : ");
  //     scanf("%f",&b);
  //     if(a==0){
  //       if(b==0)
  //         printf("\n\n *::*::* Infinite de solution.");
  //       else printf("\n\n *::*::* Pas de solution. ");
  //     }else{
  //       x = -b/a;
  //       printf("\n\n *::*::*  La solution = %.3f\n",x);
  //     }

/* --------------------------------------------------------------------------------------------------------- */

    // int x,y,z;
    // printf("\n\n  :: Donnez 3 entiers : ");
    // scanf("%d %d %d",&x,&y,&z);
    // if(x>y){
    //   x += y;
    //   z = x*3;
    // }else{
    //   if(y>x){
    //   y += x;
    //     z = x+y;
    //   }else  z += (x+y);
    // }
    // printf("\n\n   x = %d  ||  y = %d  ||  z = %d",x,y,z);

/* --------------------------------------------------------------------------------------------------------- */

int a,b,c;

   printf("\n\n  :: Donnez 3 entiers : ");
   scanf("%d %d %d",&a,&b,&c);
   if((a>b)&&(b>c))
     printf("\n\n  :: Your Sort Now is  %d > %d > %d \n",a,b,c);
     else
        if((b>a)&&(a>c))
          printf("\n\n  :: Your Sort Now is  %d > %d > %d \n",b,a,c);
        else
        if((c>a)&&(c>b)){
          if(a>b)
            printf("\n\n  :: Your Sort Now is  %d > %d > %d \n",c,a,b);
          else  printf("\n\n  :: Your Sort Now is  %d > %d > %d \n",c,b,a);
        }

//    if((a>b)&&(b>c))
//      printf("\n\n  :: Your Sort Now is  %d > %d > %d \n",a,b,c);
//      else if((a>b)&&(b<c))
//      printf("\n\n  :: Your Sort Now is  %d > %d > %d \n",a,c,b);
// /*--------------------------------------------*/
//    if((b>a)&&(a>c))
//      printf("\n\n  :: Your Sort Now is  %d > %d > %d  okkokkokokoko\n",b,a,c);
//      else if((b>a)&&(c>a))
//      printf("\n\n  :: Your Sort Now is  %d > %d > %d \n",b,c,a);
// /*--------------------------------------------*/
//     if((c>a)&&(a>b))
//       printf("\n\n  :: Your Sort Now is  %d > %d > %d \n",c,a,b);
//       else if((c>a)&&(b>a))
//       printf("\n\n  :: Your Sort Now is  %d > %d > %d \n",c,b,a);



  //  if(a>b){
  //   if(b>c)
  //    printf("\n\n  :: Your Sort Now is  %d > %d > %d \n",a,b,c);
  //    else
  //       printf("\n\n  :: Your Sort Now is  %d > %d > %d \n",a,c,b);
  // }else if(b>a){
  //   if(a>c)
  //    printf("\n\n  :: Your Sort Now is  %d > %d > %d \n",b,a,c);
  //    else
  //       printf("\n\n  :: Your Sort Now is  %d > %d > %d \n",b,c,a);
  // }else if((c>a)&&(c>b))
  //     printf("\n\n  :: Your Sort Now is  %d > %d > %d \n",c,a,b);

   /* --------------------------------------------------------------------------------------------------------- */

   // //Declaration Part...
   // int hour,min,second;
   //
   // printf("\n\n  :: Enter Your Current Time HH:MM:SS  : ");
   // scanf("%d:%d:%d",&hour,&min,&second);
   // if((hour<24)&&(min<60)&&(second<60)){
   //   hour = 0;
   //     min = 0;
   //       second = 0;
   //       second += 1;
   // }else  second += 1;
   // printf("\n\n  Your Time now is  %d:%d:%d",hour,min,second);

   /* --------------------------------------------------------------------------------------------------------- */


  getch();
  return 0;
}

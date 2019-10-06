/* This Program is To Finding
    Factorial Of n Number

::  © Created By GitHub@barhouum7
*/


#include<stdio.h>
#include<stdlib.h>
//#include<math.h>
//#include<string.h>

int main(){
  //WELCOME Part ...
  printf("\n\n        <<<<<   Hello World ! :) >>>>>\n\n\n");
  //Declaration Part...
  int n,i;
  long fact = 1;
  printf("\n\n  :: Enter a Number to calculate its factorial : ");
  scanf("%d",&n);
  if(n>0){
    for(i=1; i<=n; i++)
      fact = fact*i;

    printf("\n\n  :: Factorial of %d = %d\n\n",n,fact);
    //End for() Loop...
  }else printf("\n\n                     [ !!! ]   Invalid Number ( Number Must be Positive ) .\n\n");
  printf("\n\n            <<<<<<  Good By Sir ! :)  >>>>>>\n\n");
  system("PAUSE\n\n");
  return 0;
}

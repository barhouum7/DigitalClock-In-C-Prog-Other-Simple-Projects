#include<stdio.h>

int main(){
  // char a;
  // short b;
  // int d;
  // long c;
  // float e;
  // double f;
  // long double h;
  // long long k;
  //
  // printf("\n\nData Type Sizes : char = %d , short = %d , int = %d , long = %d ,\n\n float = %d , double = %d , long double = %d , long long = %d\n\n",sizeof(a),sizeof(b),sizeof(d),sizeof(c),sizeof(e),sizeof(f),sizeof(h),sizeof(k));

  int a = 1, b = 4;
  a*=b+5;
  int c = !b;
  printf("\n  :: La valeur de a = %d  |  :: La valeur de b = %d ",a,b);
  printf("\n\n Le Resultat de L'expression : %d\n\n",!--a==++c);

  return 0;
}

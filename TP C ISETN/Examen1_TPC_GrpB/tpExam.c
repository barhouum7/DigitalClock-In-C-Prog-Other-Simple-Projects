/*=========== Preprocessor Part ============*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/*============ Constant Part ===============*/
#define MAX 50



void saisieTranches(int *n);
double prixTranche(int cons);
int rechAbonne(int consAb[MAX][5],int n,int reff);
double totAbonne(double reff);
double totCons(int consAb[MAX][5],int n);
void trimestreMax(int consAb[MAX][5],int n);
void NbrAbonne(int consAb[MAX][5],int n);



int main(void){
  printf("\n\n\t\t\t\t\t ||||  WELCOME!  ||||");
  /* Remplissage de la Matrice.. */
  int consAb[MAX][5];
  int i,j,n;
  saisieTranches(&n);
  // initialize les references ...
  printf("\n\n\n\t\t /============= Initialize les references ... ==============/");
  for(i=0;i<n;i++){
    do{
      printf("\n\n\t\t\t Entrer La reference de lAbonnes num %d : ",i+1);
      scanf("%d",&consAb[i][0]);
    }while(consAb[i][0]<10000000 || consAb[i][0]>99999999);
  }
  // Remplissage des consommations des Abonnes ...
  printf("\n\n\n\t\t /============= Remplissage des consommations des Abonnes ==============/");
  for(i=0;i<n;i++){
    for(j=1;j<5;j++){
      printf("\n\n\t\t\t Les Consommations de lAbonnes %d , ( Tranche %d ) : ",i+1,j);
      scanf("%d",&consAb[i][j]);
      printf("\n");
    }
  }

  // Affichage de la Matrice Pour l'utisateur ....
  printf("\n\n\n\t\t /============= Affichage de la Matrice Pour l'utisateur .... ==============/");
  // printf("\n\n\t\t\t ConsAb[][] = \n");
  printf("\n\n\n\t\t      Reference  |  Trimestre (1) |  Trimestre (2) |  Trimestre (3) |  Trimestre (4) |");
  printf("\n\t");
  for(i=0;i<n;i++){
    for(j=0;j<5;j++){
      printf("\t\t%d",consAb[i][j]);
    }
    printf("\n\n\t");
  }
  // Le Prix dUne tranche de consommation ....
  int ligneTrn,colonneTrn,reff,numTrn;
  printf("\n\n\n\t\t /============= Le Prix dUne tranche de consommation ==============/");
  printf("\n\n\n\t\t\t Pour Determiner Le Prix dUne tranche de consommation.");
  printf("\n\n\n\t\t\t    Quelle tranche vous voulez ? (1/2/3/4) : ");
  scanf("%d",&numTrn);
  do{
    printf("\n\n\n\t\t\t    Entrer Votre Reference : ");
    scanf("%d",&reff);
    if(reff<10000000 || reff>99999999){
      printf("\n\n\n\t\t _______________________ ");
      printf("\n\t\t | Reference Invalide ! | ");
      printf("\n\t\t ------------------------");
    }
  }while(reff<10000000 || reff>99999999);

  int rechAbn = rechAbonne(consAb,n,reff);
  double totalAbn,summ;


    if(rechAbn == -1){
      printf("\n\n\n\t\t   _________________________");
      printf("\n\t\t | Reference inexistante ! |");
      printf("\n\t\t   -------------------------");
    }else{
      printf("\n\n\n\t\t\t\t____________________________________________________________________");
      printf("\n\t\t\t\t| ");printf("LAbonne a un reference ( %d ) dans la (%d) Ligne,            |",consAb[rechAbn][0],rechAbn+1);printf("\n\t\t\t\t| ");printf("dans la (%d) tranche, son prix de consommation est : %.2lf dinar. |",numTrn,prixTranche(consAb[rechAbn][numTrn]));
      printf("\n\t\t\t\t------------------------------------------------------------------------");
      summ = 0;
      for(i=1;i<5;i++){
        totalAbn = totAbonne(prixTranche(consAb[rechAbn][i]));
        //printf("\n\n\t\t\t\t %.2lf",prixTranche(consAb[rechAbn][i]));
        summ += prixTranche(consAb[rechAbn][i]);
      }
      // printf("\n\n\t\t\t\t %.2lf",summ);

      printf("\n\n\n\t\t\t\t__________________________________________________________________");
      printf("\n\t\t\t\t| ");printf("Le total de toutes les consommations    ");printf("\t\t\t  |");printf("\n\t\t\t\t| ");printf("de lAbonne a cette reference ( %d ) est :  %.2lf dinar.  |",consAb[rechAbn][0],summ);
      printf("\n\t\t\t\t------------------------------------------------------------------------");


    }




  double totalCons = totCons(consAb,n);
  trimestreMax(consAb,n);
  NbrAbonne(consAb,n);


  printf("\n\n\n\n\n\t\t\t\t\t ||||  Good By!   ||||\n\n");
  system("PAUSE");
  return 0;
}
/* ==================================================================== */
void saisieTranches(int *n){
  do{
    printf("\n\n\t\t\t Entrer Le nombre dAbonnes : ");
    scanf("%d",&*n);
  }while(*n<0 || *n>MAX);
}
/* ==================================================================== */
double prixTranche(int cons){
  //double result;
  if(cons>=0 && cons<=20)
    return 145;
  else
  if(cons>=21 && cons<=40)
    return 250;
  else
  if(cons>=41 && cons<=70)
    return 340;
  else
  if(cons>=71 && cons<=100)
    return 620;
  else
  if(cons>=101 && cons<=150)
    return 760;
  else
  if(cons>=151 && cons<=500)
    return 1060;
  else
    return 1110;

  // return result;
}
/* ==================================================================== */
int rechAbonne(int consAb[MAX][5],int n,int reff){
  //int reslt;
  int i=0;
  do{
    if(reff == consAb[i][0])
      return i;
    else
      return -1;

    i++;
  }while(i<n);

  // return reslt;
}
/* ==================================================================== */
double totAbonne(double reff){
  int i;
  double sum=0;
  for(i=0;i<4;i++)
    sum += reff;
return sum;
}
/* ==================================================================== */
double totCons(int consAb[MAX][5],int n){

}
/* ==================================================================== */
void trimestreMax(int consAb[MAX][5],int n){

}
/* ==================================================================== */
void NbrAbonne(int consAb[MAX][5],int n){

}

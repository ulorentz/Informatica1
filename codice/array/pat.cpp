#include <iostream>
#include <stdio.h>

int main()
{
  const int kmax=6; 
  double y0[kmax+1];
  double lam[kmax][kmax];
	
 
  
  for(int k=0; k<=kmax; k++)
  {  
	y0[k]=k;
	
  	for(int j=0; j<=kmax; j++) 
	{
	lam[k][j]=0; //ERRORE!!! Hai definito lam[kmax][kmax], cosa stai facendo?
	//L'indice k scorre fino a kmax, invece dovrebbe fermarsi a kmax-1. 
	//Andando oltre alla sua dimensione scrivi nelle celle di memoria successive
	//La sfiga è che nelle celle successive c'è proprio y0, e tu lo stai riempiendo di zeri
	}
  }

  //Come sai un vettore è un puntatore: ecco l'indirizzo di memoria del primo elemento di y0:
  printf("Indirizzo yo:\t\t\t%p\n", y0);
  //L'indirizzo del kmaxesimo elemento di lam
  printf("Indirizzo di lam[kmax-1]:\t%p\n",lam[kmax-1]);
  //Indirizzo fuori dal range su cui tu vai a scrivere, confronta con il primo:
  printf("Out of range lam[kmax]: \t%p\tUguale al primo!!! Stai riempiendo di zeri\n",lam[kmax]);
  
   return(0);  





  
}

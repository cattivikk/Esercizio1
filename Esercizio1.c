#include <stdio.h>
#define dim 30

int main()
{
	int numero[dim], scelta;
	int somma=0;
	int media;
	int max;
	int min;
	int numeripari= 0;
	int numeridispari= 0;
	int i;
	
	do
	{
		printf("Decidi quanti numeri inserire: ");
		scanf("%d", &scelta);
		if(scelta==0)
			{
				printf("--ERRORE--\n");
			}	
		
	}
	while(scelta==0);

	
	
	printf("\n\nInserisci dei numeri interi (positivi, negativi o zero): ");
	
	for (i=0; i<scelta; i++)
	{	
		scanf("%d",&numero[i]);
		if (numero[i]==0)
		{
			printf("nessun dato valido.\n");
		}
		else
		{
		somma= somma + numero[i];
		max = numero[0];
		min = numero[0];
		}
	
			
	}
	
	for(i = 0; i<scelta; i++)
	 {
    	if(numero[i]>max)
		{
    	 max = numero[i];
   	 	}
    	if(numero[i]<min)
		{
     	 min = numero[i];
		}
	}
 	 			
  
  	for (i=0; i<scelta; i++)
	{
    if(numero[i]%2==0)
		{
     	 numeripari++;
    	}
			else
			{	
      		numeridispari++;
   			}	
  	}
	
	printf("Sono stati inseriti %d numeri.\n", scelta);
	printf("La somma dei %d numeri e di: %d.\n", scelta, somma);
	media= somma/scelta;
	printf("La media dei numeri inseriti e di: %d\n", media);
	printf("Il numero massimo e %d\n", max);
	printf("Il numero minimo e %d\n", min);
	printf("I numeri pari sono %d\n", numeripari);
	printf("I numeri dispari sono %d\n", numeridispari);
	
	
}

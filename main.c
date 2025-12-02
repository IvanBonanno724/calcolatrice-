#include <stdio.h>
#include <calch.c>

int main(){ 

int a,b;
int somma,differenza,moltiplicazione;
int risultato=0;
char scelta;
printf("scegli l'operazione\n");

printf("S somma\n");
printf("D sottrazione\n");
printf("M moltiplicazione\n");
scanf (" %c",&scelta);

printf("inserisci primo operando: ");
scanf("%d",&a);
printf("inserisci secondo operando: ");
scanf("%d",&b);	

switch(scelta){
	
	case'S':
	risultato = somma ( a ,b);
	printf("la somma e\':%d\n",risultato);
	break;
	
		case'M':
	risultato = moltiplicazione(a,b);
	printf("la moltiplicazione e\':%d\n",risultato);
	break;
	
		case'D':
	risultato = differenza(a,b);
	printf("la differenza e\':%d\n",risultato);
	break;	


default:
printf("scelta non valida");
break;
}

return 0;

}
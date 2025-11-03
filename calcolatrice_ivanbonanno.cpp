#include <stdio.h>
	int moltiplicazione;
	int differenza;
	int sottrazione;
int main(){
	char scelta;
	int op1;
	int op2;
	
	int risultato;
	printf("s)(somma\n");
	printf("d)(differenza\n");
	printf("m)(moltiplicazione\n");
	scanf ("%d", &scelta);
	printf ("inserisci op1");
	scanf("%d", &op1);
	printf ("inserisci op2");
	scanf("%d", &op2);
	if (scelta =='s')
	risultato = somma(op1,op2);
	printf("%d"+ "%d \n", op1+op2);

	else if (scelta =='d')
	risultato = (op1,op2;);
	printf("%d"- "%d \n", op1-op2);
	
	else if	(scelta =='m')
	risultato = moltiplicazione(op1,op2;);
	printf("%d"*"%d \n", op1*op2);
	return 0;
	
	
	
	
}
#include<stdio.h>

// demanar data neixement, dia, mes, any, fer la suma dels digits. 

int main()
{
	int dia, mes, any, resultat; 
	printf("Escriu el dia en que vas neixer en format 09:\n"); 
	scanf_s("%d\n", &dia); 
	printf("Escriu el mes en que vas neixer en format 02:\n");
	scanf_s("%d\n", &mes); 
	printf("Escriu el mes en que vas neixer en format 2009:\n");
	scanf_s("%d\n", &any); 

	resultat = dia + mes + any; 

	printf("El resultat es: %d+%d+%d=%d \n", dia, mes, any, resultat); 

	return 0;

}
#include <stdio.h>

/*
Complete las palabras con los caracteres correspondientes para que se imprima en consola lo siguiente:
	- Esternocleidomastoideo
	- Paralelepipedo 
	- Framework
*/

int main(){
	//NO MODIIFICAR
	char caracterW = 'w';
	char caracterE = 'e';
	char caracterI = 'i';
	char caracterL = 'l';
	char caracterR = 'r';
	char caracterP = 'p';
	char caracterS = 's';
	//NO MODIIFICAR

	printf("Est%crnocle%cdoma%ctoideo\n", caracterE, caracterI, caracterS);
	printf("Para%cele%cipedo\n", caracterL,  caracterP);
	printf("F%came%cork\n", caracterR, caracterW);

	return 0;
}
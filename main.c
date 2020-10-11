//Exemplo1: Programa usando loop for em C
#include <stdio.h>

int main(void)
{
	int contador; //variável de controle do loop
	
	for(contador = 0; contador <= 10; contador++)
	{
		printf("%d ", contador);
	}
	
	return(0);
}
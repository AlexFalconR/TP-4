/* Informa la longitud promedio de las líneas
* Alex Nicolás Falcon Rodríguez
* 10/05/2015
*/

#include <stdio.h> /* getchar EOF feof perror printf */
#include <stdlib.h> /* EXIT_SUCCESS */

int main(void) {

int nl; /* la cantidad de lineas */
int nc; /* la cantidad de caracteres */
int c; /* el caracter leido */

for(nl = 0, nc = 0; ( c = getchar()) != EOF;){
	(c == "\n")?++nl:++nc;
	}

if( ferror(stdin) )
	perror("No se pudo seguir leyendo de la entrada debido a un error");
else
	if (nl==0)
		printf("Longitud promedio = 0");
	else
		printf("Longitud promedio: %.1f\n", nc / (float)nl );
return EXIT_SUCCESS;
}

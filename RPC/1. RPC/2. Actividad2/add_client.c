/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "add.h"
#include "unistd.h"


void
add_prog_1(char *host, char* nombreR, int metodoR)
{
	CLIENT *clnt;
	char * *result_1;
	char * add_1_arg;
	char * *result_2;
	char * search_1_arg;

#ifndef	DEBUG
	clnt = clnt_create (host, ADD_PROG, ADD_VERS, "udp");
	if (clnt == NULL) {
		clnt_pcreateerror (host);
		exit (1);
	}
#endif	/* DEBUG */
int metodo = metodoR;
char* nombre = nombreR;

printf("metodo %d seleccionado\n", metodo);

if(metodo == 1){
result_1 = add_1(&nombre, clnt);
printf("Server Response: The server added, %s \n", nombre);
} else if(metodo == 2){
printf("wtf\n");
result_2 = search_1(&nombre, clnt);
//printf("Server Response: The server found, %s %d times\n", nombre, result_2);
printf ("%s\n", result_2);
}




#ifndef	DEBUG
	clnt_destroy (clnt);
#endif	 /* DEBUG */
}


int
main (int argc, char *argv[])
{
	char *host;
	char *nombre;
	int metodo;


	if (argc < 2) {
		printf ("usage: %s server_host\n", argv[0]);
		exit (1);
	}
	host = argv[1];
	metodo = atoi(argv[2]);
	nombre = argv[3];

	add_prog_1 (host, nombre, metodo);

exit (0);
}

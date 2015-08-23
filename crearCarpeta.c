#include <sys/stat.h>
#include <sys/types.h>
#include <stdlib.h> 
#include <stdio.h> 
#include <string.h>




void crearCarpeta(char *nombreCarpeta)
{
	char resolved_path[100]; 
    realpath(nombreCarpeta, resolved_path); 
	int carpeta = mkdir(resolved_path, 0700);
}

int main(int argc, char const *argv[])
{
	crearCarpeta("Repositorio");
	return 0;
}
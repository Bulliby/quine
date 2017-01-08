#include <fcntl.h>
#include <strings.h>
#include <stdio.h>
int main(int argc, char **argv)
{
	FILE *file; int i; char filename[42]; 
	bzero(filename, 42); 
	i = (!strcmp(argv[0], "./Sully")) ? 5 : atoi(&(argv[0][8])); 
	sprintf(filename, "Sully_%c.c", 0x30 + i); 
	printf("i %i", i);
	printf("argv [%s]\n ", argv[0]);
	printf("%s\n", filename);
	file = fopen(filename, "w"); 
}

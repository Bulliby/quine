#include <fcntl.h>
#include <strings.h>
#include <stdio.h>
#define Q(x)char*s=#x;x
#define FT(x)int main(int argc, char **argv){FILE *file; int i; char filename[42]; bzero(filename, 42); i = (!strcmp(argv[0], "./Sully")) ? 5 : atoi(&(argv[0][8])); sprintf(filename, "Sully_%c.c", 0x30 + i); file = fopen(filename, "w"); Q(fprintf(file, "#include <fcntl.h>\n#include <stdio.h>\n#define Q(x)char*s=#x;x\n#define FT(x)int main(int argc, char **argv){FILE *file; int i; char filename[42]; bzero(filename, 42); i = (!strcmp(argv[0], \"Sully\")) ? 5 : atoi(argv[0][6]); sprintf(filename, \"Sully_%%c.c\", i); file = fopen(filename, \"w\"); Q(%s);}\nFT(xxxxxxxx)", s));}
FT(xxxxxxxx)

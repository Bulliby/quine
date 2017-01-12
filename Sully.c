#include <fcntl.h>
#include <stdio.h>
#include <strings.h>
#include <stdlib.h>
#define Q(x)char*s=#x;x
int main(int argc, char **argv){
FILE *file;
int i = 5; 
char filename[42]; char compile[142]; char tmp[42]; bzero(filename, 42); i = (!strcmp(argv[0], "./Sully")) ? i : atoi(&(argv[0][8])) - 1; sprintf(filename, "Sully_%c.c", 0x30 + i); (void) argc; file = fopen(filename, "w"); Q(fprintf(file, "#include <fcntl.h>\n#include <stdio.h>\n#include <strings.h>\n#include <stdlib.h>\n#define Q(x)char*s=#x;x\nint main(int argc, char **argv){\nFILE *file;\nint i = %d;\nchar filename[42]; char compile[142]; char tmp[42]; bzero(filename, 42); i = (!strcmp(argv[0], \"./Sully\")) ? i : atoi(&(argv[0][8])) - 1; sprintf(filename, \"Sully_%%c.c\", 0x30 + i); (void) argc; file = fopen(filename, \"w\"); Q(%s); fflush(file); if (i >= 0) { bzero(tmp, 42); bzero(compile, 42); sprintf(compile, \"clang -Wall -Wextra -Werror %%s -o %%s\", filename, strncpy(tmp, filename, 7)); system(compile); bzero(compile, 42); sprintf(compile, \"./%%s\", tmp); system(compile); i--;}}\n", i,s)); fflush(file); if (i >= 0) { bzero(tmp, 42); bzero(compile, 42); sprintf(compile, "clang -Wall -Wextra -Werror %s -o %s", filename, strncpy(tmp, filename, 7)); system(compile); bzero(compile, 42); sprintf(compile, "./%s", tmp); system(compile); i--;}}

#include <fcntl.h>
#include <stdio.h>
#include <strings.h>
#include <stdlib.h>
#define Q(x)char*s=#x;x
#define FT(x)int main(int argc, char **argv){FILE *file; int i; char filename[42]; char compile[42]; char tmp[42]; bzero(filename, 42); i = (!strcmp(argv[0], "./Sully")) ? 5 : atoi(&(argv[0][8])); sprintf(filename, "Sully_%c.c", 0x30 + i); file = fopen(filename, "a+"); Q(fprintf(file, "#include <fcntl.h>\n#include <stdio.h>\n#include <strings.h>\n#include <stdlib.h>\n#define Q(x)char*s=#x;x\n#define FT(x)int main(int argc, char **argv){FILE *file; int i; char filename[42]; char compile[42]; char tmp[42]; bzero(filename, 42); i = (!strcmp(argv[0], \"./Sully\")) ? 5 : atoi(&(argv[0][8])); Q(%s); if (i > 0) { bzero(filename, 42); i = (!strcmp(argv[0], \"Sully\")) ? 5 : atoi(argv[0][6]); sprintf(filename, \"Sully_%%c.c\", 0x30 + i); file = fopen(filename, \"w\"); bzero(compile, 42); sprintf(compile, \"clang -Wall -Wextra -Werror %%s -o %%s\", filename, strncpy(tmp, filename, 7)); system(compile); bzero(compile, 42); sprintf(compile, \"./%%s\", filename); system(compile); i--;}}\nFT(xxxxxxxx)", s)); if (i > 0) { bzero(tmp, 42); bzero(compile, 42); sprintf(compile, "clang -Wall -Wextra -Werror %s -o %s", filename, strncpy(tmp, filename, 7)); system(compile); bzero(compile, 42); sprintf(compile, "./%s", tmp); system(compile);  i--;}}
FT(xxxxxxxx)

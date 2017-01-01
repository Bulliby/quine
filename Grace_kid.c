#include <fcntl.h>
#include <stdio.h>
#define Q(x)char*s=#x;x
#define FT(x)int main(){FILE *file; file = fopen("Grace_kid.c", "w"); Q(fprintf(file, "#include <fcntl.h>\n#include <stdio.h>\n#define Q(x)char*s=#x;x\n#define FT(x)int main(){FILE *file; file = fopen(\"Grace_kid.c\", \"w\"); Q(%s);}\nFT(xxxxxxxx)\n/*\n\tcommentaire\n*/\n", s));}
FT(xxxxxxxx)
/*
	commentaire
*/

#include <stdio.h>
#define Q(x)char*s=#x;x
/*
	en dehors de tout
*/
int main()
{
	/*
		commentaire dans le main
	*/
	Q(printf("#include <stdio.h>\n#define Q(x)char*s=#x;x\n/*\n\ten dehors de tout\n*/\nint main()\n{\n\t/*\n\t\tcommentaire dans le main\n\t*/\n\tQ(%s)\n\treturn (0);\n}\n\nvoid func ()\n{\n\t;\n}\n",s);)
	return (0);
}

void func ()
{
	;
}

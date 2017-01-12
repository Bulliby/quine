#include <stdio.h>
#define Q(x)char*s=#x;x
void func ()
{
	;
}
/*
	en dehors de tout
*/
int main()
{
	/*
		commentaire dans le main
	*/
	Q(printf("#include <stdio.h>\n#define Q(x)char*s=#x;x\nvoid func ()\n{\n\t;\n}\n/*\n\ten dehors de tout\n*/\nint main()\n{\n\t/*\n\t\tcommentaire dans le main\n\t*/\n\tQ(%s)\n\tfunc();\n\treturn (0);\n}\n",s);)
	func();
	return (0);
}

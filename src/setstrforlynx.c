#include <stdio.h>
#include <err.h>

int main(int argc, char * argv[])
{
	char * str = argv[1];

	if (argc !=2 ) errx(-1,"Usage : %s \"a string\" .", argv[0]);

	while ( *str != '\0' ) {
		if ( *str & 0x80 )
			printf("key 0x%02x\n", (int) *str & 0xff );
		else
			printf("key %c\n", *str );
		str++;
	}
	return(0);
}


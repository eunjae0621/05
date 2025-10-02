#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x, y;
	char c;
	
	printf("enter the calculation : ");
	scanf("%i %c %i", &x, &c, &y);
	
	if (c == '+')
		printf("= %i\n", x+y);
	else if (c == '-')
		printf("= %i\n", x-y);
	else if (c == '*')
		printf("= %i\n", x*y);	
	else if (c == '/')
		printf("= %i\n", x/y);

	return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x, y;
	char c;
	int result;
	
	printf("enter the calculation : ");
	scanf("%i %c %i", &x, &c, &y);
	
	if (c == '+')
		result = x+y;
	
	else if (c == '-')
		result = x-y;
	
	else if (c == '*')
		result = x*y;
	
	else if (c == '/')
		result = x/y;
	
		
	printf("= %i\n", result);

	return 0;
}

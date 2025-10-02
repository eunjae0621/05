#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int answer = 59;
	int trial = 0;
	int num;
	
	do {
		printf("Guess a number : ");
		scanf("%i", &num);
		trial++;
		
		if (num < answer)
			printf("low!\n");
		else if (num > answer)
			printf("high!\n");
	}
	while (num != answer);
	
	printf("Congratulation! trials : %i\n", trial);

	return 0;
}

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <stdbool.h>

int main() {
	
	int guess;
	time_t t;
	srand((unsigned)time(&t));
	int random = rand() % 1000;
	int i = 0;
	
	while (true) {
		printf("%d \n", random);
		printf("Devine : ");
		scanf_s("%d", &guess);
		if (guess == random) {
			i++;
			printf("Bien joue vous avez reussi en %d coups", i);
			return(EXIT_SUCCESS);
		}
		else {
			if (guess > random) {
				printf("C'est moins \n");
				i++;
			}
			else {
				printf("C'est plus \n");
				i++;
			}
		}

	}
}
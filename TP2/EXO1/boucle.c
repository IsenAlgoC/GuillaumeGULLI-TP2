#include <stdio.h>
#include <stdlib.h>

int main() {
	unsigned short n = 0;
	unsigned short sommefor = 0;
	int exit = 1;
	while (exit) {
		printf("Entrez une valeur de n :");
		scanf_s("%hu", &n);

		if (n > 361) {
			printf("Entrez une valeur de n qui ne depasse pas le maximum autorise pour un unsigned short :");
		}
		else {
			printf("n vaut : %d \n", n);
			for (int i = 2; i <= n; i++) {
				sommefor = sommefor + i;
			}
			printf("La somme des 100 premiers entiers avec la boucle for est : %d \n", sommefor);

			int sommewhile = 0;
			int j = 1;
			while (j < n) {
				j++;
				sommewhile = sommewhile + j;
			}
			printf("La somme des 100 premiers entiers avec la boucle while est : %d \n", sommewhile);

			int sommedo = 0;
			int k = 1;
			do {
				k++;
				sommedo = sommedo + k;
			} while (k < n);
			printf("La somme des 100 premiers entiers avec la boucle do...while est : %d \n", sommedo);

			int sommemax = 0;
			int l = 0;
			int exit1 = 0;
			while (exit1 == 0) {
				l++;
				sommemax = sommemax + l;
				if (sommemax + l >= 65535) {
					65535 - sommemax <= l;
					exit = 1;
				}
			}
			printf("La valeur de l'entier max avant d'avoir une somme depassant la valeur d'un unsigned short est : %d \n", l);
			exit = 0;
			return (EXIT_SUCCESS);

		}
	}
}
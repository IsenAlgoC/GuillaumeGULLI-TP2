#include <stdio.h>
#include <stdlib.h>

int main() {
	char p = 0;
	int r = 0;

	while (p == 0) {

		float a = 0, b = 0, c = 0;

		printf("Entrez les dimensions de la valise:");
		scanf_s("%f %f %f", &a, &b, &c);
		printf("les dimensions sont : %f x %f x %f \n", a, b, c);

		while (a > 149 || a < 1){
				printf("Entrez la premiere valeur du bagage comprise entre 1 et 150 :");
				scanf_s("%f", &a);
		}
		while (b > 149 || b < 1) {
			printf("Entrez la deuxieme valeur du bagage comprise entre 1 et 150 :");
			scanf_s("%f", &b);
		}
		while (c > 149 || c < 1) {
			printf("Entrez la troisieme du bagage comprise entre 1 et 150 :");
			scanf_s("%f", &c);
		}
		printf("les dimensions sont : %f x %f x %f \n", a, b, c);

		if (a < b) {
			float tmp;
			tmp = a;
			a = b;
			b = tmp;
		}
	
		if (b < c) {
			float tmp;
			tmp = b;
			b = c;
			c = tmp;
		}
	
		if (a < b) {
			float tmp;
			tmp = a;
			a = b;
			b = tmp;
		}
		printf("les valeurs ordonnees : %f x %f x %f \n", a, b, c);

		if (a > 55 || b > 35 || c > 25) {
			printf("votre bagage n'est pas valide \n");
		}
		else {
			printf("votre bagage est valide \n");
		}
		printf("Voulez vous rajouter un bagage, tapez 1 pour oui tapez 2 pour non \n");
		scanf_s("%d", &r);

		if (r == 2) {
			p = p + 1;
		}
	}
}
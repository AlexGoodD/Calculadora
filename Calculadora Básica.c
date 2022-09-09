#include <stdio.h>
#include <math.h>

int main(){

	int d, n, op=1;
	float n1, n2, res;

	printf("////Calculadora básica hecha en C////\n");

	while (op == 1){
	printf("\n");
	printf("Ingresa numero 1: ");
	scanf("%f", &n1);

	printf("Ingresa numero 2: ");
	scanf("%f", &n2);

	printf("\n\n¿Qué operación desea hacer?\n1.- Suma\n2.- Resta\n3.- Multiplicación\n4.- División\n5.- Raiz\n6.- Potencia\n\n");
	scanf("%d", &d);


	switch(d){

		case 1:{

			res = n1+n2;

			printf("\nEl resultado de la operación es: %.2f", res);

			break;
		}

		case 2:{

			res = n1-n2;

			printf("\nEl resultado de la operación es: %.2f", res);

			break;
		}

		case 3:{

			res = n1*n2;

			printf("\nEl resultado de la operación es: %.2f", res);

			break;
		}

		case 4:{

			res = n1/n2;

			printf("\nEl resultado de la operación es: %.2f", res);

			break;
		}

		case 5:{

			printf("\n\n¿A qué numero desea sacarle raíz?\n1.-%.2f\n2.- %.2f\n\n", n1, n2);
			scanf("%d", &n);

			if(n == 1){

				res = sqrt(n1);

			} else {

				res = sqrt(n2);
			}
			printf("\nEl resultado de la operación es: %.2f", res);

			break;
		}

		case 6:{

			printf("\n\n¿A qué numero desea potenciar?\n1.-%.2f\n2.- %.2f\n\n", n1, n2);
			scanf("%d", &n);

			if(n == 1){

				res = pow(n1,2);

			} else {
				
				res = pow(n2,2);
			}
			printf("\n\nEl resultado de la operación es: %.2f", res);

			break;

		}

	}

		printf("\n\n¿Deseas hacer otra operación? \n1.- Si\n2.- No\n\n");
		scanf("%d", &op);
	}

	printf("\n\nMuchas gracias por haber usado este programa.\n\nCréditos para: Alex");


	return 0;
}
/*
 * main.c
 *
 *  Created on: 18 ene 2022
 *      Author: joelrc
 */

#include <stdio.h>
void main() {
	int choose, num, count = 0, tocado = 0;
	char letra;
	printf("\n**********************");
	printf(" HUNDIR LA FLOTA ");
	printf("**********************\n");
// Muestra título del juego
	printf("\n******* MENÚ **********\n");
	printf("\n1.- Nivel fácil\n");
	printf("2.- Nivel medio\n");
	printf("3.- Nivel difícil\n");
	printf("0.- Salir\n");
// Muestra el menú y puedes escoger el nivel que quieras (fácil, medio, difícil)
// PD: Los niveles medio y difícil solo muestra el mapa de hundir la flota
	do {
		printf("\nHola, jugador! Escoge un nivel o pulsa el 0 para salir: ");
		scanf("%d", &choose);
	} while (choose >= 4);
// Valida que escojo un numero que esté en el menú
	switch (choose) {
	case 0:
		printf("\n\n******** HAS DECIDIDO SALIR DEL JUEGO ********\n");
		break;
// Si escojo el número 0, sale del juego
	case 1:
		printf("Has escogido el nivel fácil\n");
		printf("   A  B  C  D  E  F  G  H  I  J  \n");
		printf("1  [] [] [] [] [] [] [] [] [] []  \n");
		printf("2  [] [] [] [] [] [] [] [] [] []  \n");
		printf("3  [] [] [] [] [] [] [] [] [] []  \n");
		printf("4  [] [] [] [] [] [] [] [] [] []  \n");
		printf("5  [] [] [] [] [] [] [] [] [] []  \n");
		printf("6  [] [] [] [] [] [] [] [] [] []  \n");
		printf("7  [] [] [] [] [] [] [] [] [] []  \n");
		printf("8  [] [] [] [] [] [] [] [] [] []  \n");
		printf("9  [] [] [] [] [] [] [] [] [] []  \n");
		printf("10 [] [] [] [] [] [] [] [] [] []  \n");
		do {
			do {
				printf("Escoge un numero para tirar: ");
				scanf("%d", &num);
			} while (num < 1 || num > 10);
// Valido que el numero esta entre el 1 y el 10 para poder tirar
			printf("Escoge una letra para tirar: ");
			scanf("%s", &letra);
			if (num == 4 && (letra == 'e' || letra == 'E')) {
				printf("Tocado\n");
				printf("   A  B  C  D  E  F  G  H  I  J  \n");
				printf("1  [] [] [] [] [] [] [] [] [] []  \n");
				printf("2  [] [] [] [] [] [] [] [] [] []  \n");
				printf("3  [] [] [] [] [] [] [] [] [] []  \n");
				printf("4  [] [] [] [] X  [] [] [] [] []  \n");
				printf("5  [] [] [] [] [] [] [] [] [] []  \n");
				printf("6  [] [] [] [] [] [] [] [] [] []  \n");
				printf("7  [] [] [] [] [] [] [] [] [] []  \n");
				printf("8  [] [] [] [] [] [] [] [] [] []  \n");
				printf("9  [] [] [] [] [] [] [] [] [] []  \n");
				printf("10 [] [] [] [] [] [] [] [] [] []  \n");
				tocado++;
				// Si la tirada que he hecho es 4e te muestra este panel conforme has tocado una parte del barco
			} else if (num == 5 && (letra == 'e' || letra == 'E')) {
				printf("Tocado\n");
				printf("   A  B  C  D  E  F  G  H  I  J  \n");
				printf("1  [] [] [] [] [] [] [] [] [] []  \n");
				printf("2  [] [] [] [] [] [] [] [] [] []  \n");
				printf("3  [] [] [] [] [] [] [] [] [] []  \n");
				printf("4  [] [] [] [] [] [] [] [] [] []  \n");
				printf("5  [] [] [] [] X  [] [] [] [] []  \n");
				printf("6  [] [] [] [] [] [] [] [] [] []  \n");
				printf("7  [] [] [] [] [] [] [] [] [] []  \n");
				printf("8  [] [] [] [] [] [] [] [] [] []  \n");
				printf("9  [] [] [] [] [] [] [] [] [] []  \n");
				printf("10 [] [] [] [] [] [] [] [] [] []  \n");
				tocado++;
				// Si la tirada que he hecho es 5e te muestra este panel conforme has tocado una parte del barco
			} else if (num == 6 && (letra == 'e' || letra == 'E')) {
				printf("Tocado\n");
				printf("   A  B  C  D  E  F  G  H  I  J  \n");
				printf("1  [] [] [] [] [] [] [] [] [] []  \n");
				printf("2  [] [] [] [] [] [] [] [] [] []  \n");
				printf("3  [] [] [] [] [] [] [] [] [] []  \n");
				printf("4  [] [] [] [] [] [] [] [] [] []  \n");
				printf("5  [] [] [] [] [] [] [] [] [] []  \n");
				printf("6  [] [] [] [] X  [] [] [] [] []  \n");
				printf("7  [] [] [] [] [] [] [] [] [] []  \n");
				printf("8  [] [] [] [] [] [] [] [] [] []  \n");
				printf("9  [] [] [] [] [] [] [] [] [] []  \n");
				printf("10 [] [] [] [] [] [] [] [] [] []  \n");
				tocado++;
				// Si la tirada que he hecho es 6e te muestra este panel conforme has tocado una parte del barco
			} else {
				printf("Agua, vuelve a intentarlo\n");
				printf("   A  B  C  D  E  F  G  H  I  J  \n");
				printf("1  [] [] [] [] [] [] [] [] [] []  \n");
				printf("2  [] [] [] [] [] [] [] [] [] []  \n");
				printf("3  [] [] [] [] [] [] [] [] [] []  \n");
				printf("4  [] [] [] [] [] [] [] [] [] []  \n");
				printf("5  [] [] [] [] [] [] [] [] [] []  \n");
				printf("6  [] [] [] [] [] [] [] [] [] []  \n");
				printf("7  [] [] [] [] [] [] [] [] [] []  \n");
				printf("8  [] [] [] [] [] [] [] [] [] []  \n");
				printf("9  [] [] [] [] [] [] [] [] [] []  \n");
				printf("10 [] [] [] [] [] [] [] [] [] []  \n");
			}
			count++;
			// Si no he tocado ninguna parte del barco te muestro esto porque has fallado
			if (tocado == 3) {
				printf("\n\n\nTocado y hundido\n");
				printf("   A  B  C  D  E  F  G  H  I  J  \n");
				printf("1  [] [] [] [] [] [] [] [] [] []  \n");
				printf("2  [] [] [] [] [] [] [] [] [] []  \n");
				printf("3  [] [] [] [] [] [] [] [] [] []  \n");
				printf("4  [] [] [] [] X  [] [] [] [] []  \n");
				printf("5  [] [] [] [] X  [] [] [] [] []  \n");
				printf("6  [] [] [] [] X  [] [] [] [] []  \n");
				printf("7  [] [] [] [] [] [] [] [] [] []  \n");
				printf("8  [] [] [] [] [] [] [] [] [] []  \n");
				printf("9  [] [] [] [] [] [] [] [] [] []  \n");
				printf("10 [] [] [] [] [] [] [] [] [] []  \n");
				printf("\n\n******** HAS GANADO, FELICIDADES!!!! ********\n\n\n");
				break;
			// Si he tocado las 3 partes te muestra el mapa y te dice que has ganado
			} else if(tocado == 0){
				printf("\nTe quedan por tocar 3 casillas más del barco y te quedan %d intentos\n\n", 20 - count);
			} else if(tocado == 1){
				printf("\nTe quedan por tocar 2 casillas más del barco y te quedan %d intentos\n\n", 20 - count);
			} else if(tocado == 2){
				printf("\nTe quedan por tocar 1 casilla más del barco y te quedan %d intentos\n\n", 20 - count);
			}
			// Esto es para informar al usuario de cuantas casillas del barco le faltan por tocar y cuantos intentos le quedan
		} while (count < 20);
		if (count >= 20) {
			printf(
					"\n\n\n******** HAS PERDIDO, VUELVE A INTENTARLO ********\n");
			// Esto es porque he puesto que tiene máximo 20 intentos, y si lo supera te muestra un mensaje diciendo que has perdido
		}
		break;
	case 2:
		printf("Has escogido el nivel medio\n");
		printf("   A  B  C  D  E  F  G  H  I  J  \n");
		printf("1  [] [] [] [] [] [] [] [] [] []  \n");
		printf("2  [] [] [] [] [] [] [] [] [] []  \n");
		printf("3  [] [] [] [] [] [] [] [] [] []  \n");
		printf("4  [] [] [] [] [] [] [] [] [] []  \n");
		printf("5  [] [] [] [] [] [] [] [] [] []  \n");
		printf("6  [] [] [] [] [] [] [] [] [] []  \n");
		printf("7  [] [] [] [] [] [] [] [] [] []  \n");
		printf("8  [] [] [] [] [] [] [] [] [] []  \n");
		printf("9  [] [] [] [] [] [] [] [] [] []  \n");
		printf("10 [] [] [] [] [] [] [] [] [] []  \n");
		break;
	case 3:
		printf("Has escogido el nivel difícil\n");
		printf("   A  B  C  D  E  F  G  H  I  J  \n");
		printf("1  [] [] [] [] [] [] [] [] [] []  \n");
		printf("2  [] [] [] [] [] [] [] [] [] []  \n");
		printf("3  [] [] [] [] [] [] [] [] [] []  \n");
		printf("4  [] [] [] [] [] [] [] [] [] []  \n");
		printf("5  [] [] [] [] [] [] [] [] [] []  \n");
		printf("6  [] [] [] [] [] [] [] [] [] []  \n");
		printf("7  [] [] [] [] [] [] [] [] [] []  \n");
		printf("8  [] [] [] [] [] [] [] [] [] []  \n");
		printf("9  [] [] [] [] [] [] [] [] [] []  \n");
		printf("10 [] [] [] [] [] [] [] [] [] []  \n");
		break;
	}
}


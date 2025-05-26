#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int cadeiras [3][5] { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15} };


int main () {

int opcao, menu = 1;
while   (menu = 1) {
		printf("\n--- MENU CINEMA ---\n");
		printf("1. RESERVAR LUGARES\n");
		printf("2. REMOVER RESERVA\n");
		printf("3. VER TODOS OS ACENTOS\n");
        printf("4. ACENTOS DISPONÍVEIS E INDISPONOÍVEIS\n");
		printf("0. SAIR\n");
		printf("Escolha uma opcao: ");
		scanf("%d", &opcao);
	while (getchar() != '\n');
        
switch (opcao) {
    case 1: printf("Cadeiras disponiveis: ");
    


break;
    case 2: printf("teste2");

break;
    case 3: printf("===== CINEMAS SETREM =====");

break;
    case 4: printf("teste4");

break;
    case 5: printf("teste5");

break;
    };
};



return 0;
}

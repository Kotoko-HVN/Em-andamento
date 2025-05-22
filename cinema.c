#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool A1, A2, A3, A4, A5; 
bool B1, B2, B3, B4, B5;
bool C1, C2, C3, C4, C5;


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
    case 3: printf("===== CINEMAS SETREM ===== \n" "%d, A1" "%d, A2" "%d, A3" "%d, A4" "%d, A5\n" "B1 B2 B3 B4 B5\n" "C1 C2 C3 C4 C5\n");

break;
    case 4: printf("teste4");

break;
    case 5: printf("teste5");

break;
    };
};



return 0;
}

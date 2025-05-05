#include <stdio.h>
#include <string.h>

struct agenda {
    int celular;
    char nome[50];
};


int main()
{
   struct agenda A1;
   
  strcpy(A1.nome, "robson");
  A1.celular = 23;

printf("Nome do contato: %s\n", A1.nome);
printf("Numero do contato: %d\n", A1.celular);

    return 0;
}

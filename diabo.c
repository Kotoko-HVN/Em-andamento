#include <stdio.h>
#include <string.h> 

struct contato {
    char nome [50];
    char telefone [50];
    char email [50];
};

void MostrarContatos (struct contato lista [], int quantidade) {    
    printf("\n Lista de Contatos \n");
    
       for (int i = 0; i < quantidade; i++) {
        printf("\nContato %d\n", i + 1);
        printf("Nome: %s\n", lista[i].nome);
        printf("Telefone: %s\n", lista[i].telefone);
        printf("E-mail: %s\n", lista[i].email);
    }
}

int main() { 
    int n, i;
    
    printf("Quantos contatos deseja cadastrar? ");
    scanf("%d", &n);
    struct contato ListaDeContatos[n];

  for (i = 0; i < n; i++) {
        printf("\nCadastro do contato %d\n", i + 1);
        getchar();
        
    printf("Nome: ");
    fgets(ListaDeContatos[i].nome, sizeof(ListaDeContatos[i].nome), stdin);
    ListaDeContatos[i].nome[strcspn(ListaDeContatos[i].nome, "\n")] = 0;
    
    printf("Telefone: ");
    fgets(ListaDeContatos[i].nome, sizeof(ListaDeContatos[i].nome), stdin);
    ListaDeContatos[i].nome[strcspn(ListaDeContatos[i].telefone, "\n")] = 0;
    
    printf("Email: ");
    fgets(ListaDeContatos[i].nome, sizeof(ListaDeContatos[i].nome), stdin);
    ListaDeContatos[i].nome[strcspn(ListaDeContatos[i].email, "\n")] = 0;

}

 MostrarContatos(ListaDeContatos, n);

    return 0;
}

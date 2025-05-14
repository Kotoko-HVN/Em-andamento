#include <stdio.h> 

int main() {
int numero;

printf("Digite um numero: ");
scanf("%d", &numero);

while (numero != 0) {
switch (numero) {
    case 1:
        if (numero >= 1){
        printf("Numero positivo.");}
    break;
    case 2:
        if (numero <= -1){
        printf("Numero negativo.");}
    break;
    case 4:
        if (numero = 0){
        return 0;
        }
    break;
    default:
        printf("apenas numeros.");
    break;
        }
    }
        return 0;

}

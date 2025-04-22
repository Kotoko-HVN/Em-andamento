#include <stdio.h>

int main()
{
    float slm, vcd; 

    // SLM = Saldo médio
    // VCD = Valor do crédito
    
    printf("Digite o valor do Saldo médio: ");
    scanf("%f", &slm);
    
    if (slm <= 500) {
    printf("Seu saldo médio é muito baixo para gerar um valor em crédito.");
    
        
    
        
    } else if (slm > 500 && slm <= 1000) {slm + (slm * 0.85);}
        
        
    printf("O valor em crédito adicional é de: %.2f\n", slm);

    return 0;
}

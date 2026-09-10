#include <stdio.h>


double lerEntrada_double(const char* mensagem) { // Função para o tratamento de entradas do tipo double (float)
    double valor;
    while (1) {
        printf("%s", mensagem);
        if (scanf("%lf", &valor) == 1) {
            return valor;
        }
        printf("Error: Entrada invalida! Por favor, digite um número real valido.\n");
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }
}

int lerEntrada_int(const char* mensagem) { // Função para o tratamento de entradas do tipo int (inteiro)
    int valor;
    while (1) {
        printf("%s", mensagem);
        if (scanf("%d", &valor) == 1) return valor;
        printf("Error: Entrada invalida! Por favor, digite um número inteiro valido.\n");
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }
}

void celsius_para_fahrenheit() {
    double C = lerEntrada_double("\nDigite o valor em Celsius: ");
       
    double fahrenheit = (C * 9.0/5.0) + 32.0;
            
    printf("°%.2lf C = %.2lf F", C, fahrenheit);
}

void celsius_para_kelvin() {
    double C = lerEntrada_double("\nDigite o valor em Celsius: "); 
    
    double kelvin = C + 273.15;
            
    printf("%.2lf C = %.2lf K", C, kelvin);
}

void fahrenheit_para_celsius() {
    double F = lerEntrada_double("\nDigite o valor em Fahrenheit: ");
    
    double celsius = (F - 32.0) * 5.0/9.0;
            
    printf("%.2lf F = %.2lf C", F, celsius); 
}

void fahrenheit_para_kelvin() {
    double F = lerEntrada_double("\nDigite o valor em Fahrenheit: "); 
    
    double kelvin = (F - 32.0) * 5.0/9.0 + 273.15;
            
    printf("%.2lf F = %.2lf K", F, kelvin); 
}

void kelvin_para_celsius() {
    double K = lerEntrada_double("\nDigite o valor em Kelvin: "); 
    
    double celsius = K - 273.15;
            
    printf("%.2lf K = %.2lf C", K, celsius);
}

void kelvin_para_fahrenheit() {
    double K = lerEntrada_double("\nDigite o valor em Kelvin: ");
     
    double fahrenheit = (K - 273.15) * 9.0/5.0 + 32.0;
            
    printf("%.2lf K = %.2lf F", K, fahrenheit);
}

int main()
{
    printf("--- Digite uma opção de converção de temperatura --- \n"
           "1- Celsius(°C) -> Fahrenheit (°F) \n"
           "2- Celsius(°C) -> Kelvin (K) \n"
           "3- Fahrenheit (°F) -> Celsius(°C) \n"
           "4- Fahrenheit (°F) -> Kelvin (K) \n"
           "5- Kelvin (K) -> Celsius(°C) \n"
           "6- Kelvin (K) -> Fahrenheit (°F) \n");
           
    int op;  
    
    op = lerEntrada_int("\nDigite uma opção(0 para sair): ");
    switch (op){
        case 0:
           printf("\nSaindo...");
           break;
        case 1: 
            celsius_para_fahrenheit();
            break;
        case 2:
            celsius_para_kelvin();
            break;
        case 3: 
            fahrenheit_para_celsius();
            break;
        case 4: 
            fahrenheit_para_kelvin();
            break;
        case 5: 
            kelvin_para_celsius();
            break;
        case 6:
            kelvin_para_fahrenheit();
            break;
        default:
        printf("\nOpção invalida!");
    }

    return 0;
}

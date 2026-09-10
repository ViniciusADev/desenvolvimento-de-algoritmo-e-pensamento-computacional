#include <stdio.h>

void celsius_para_fahrenheit() {
    double C = 0;
    printf("\n Digite o valor em Celsius: ");
    scanf("%lf", &C);
            
    double fahrenheit = (C * 9.0/5.0) + 32.0;
            
    printf("°%.2lf C = %.2lf F", C, fahrenheit);
}

void celsius_para_kelvin() {
    double C = 0;
    printf("\nDigite o valor em Celsius: ");
            scanf("%lf", &C);
            
    double kelvin = C + 273.15;
            
    printf("%.2lf C = %.2lf K", C, kelvin);
}

void fahrenheit_para_celsius() {
    double F = 0;
    printf("\nDigite o valor em Fahrenheit: ");
    scanf("%lf", &F);
            
    double celsius = (F - 32.0) * 5.0/9.0;
            
    printf("%.2lf F = %.2lf C", F, celsius); 
}

void fahrenheit_para_kelvin() {
    double F = 0;
    printf("\nDigite o valor em Fahrenheit: ");
    scanf("%lf", &F);
            
    double kelvin = (F - 32.0) * 5/9 + 273.15;
            
    printf("%.2lf F = %.2lf K", F, kelvin); 
}

void kelvin_para_celsius() {
    double K = 0;
    printf("\nDigite o valor em Kelvin: ");
    scanf("%lf", &K);
            
    double celsius = K - 273.15;
            
    printf("°%.2lf K = %.2lf C", K, celsius);
}

void kelvin_para_fahrenheit() {
    double K = 0;
    printf("\nDigite o valor em Kelvin: ");
    scanf("%lf", &K);
            
    double fahrenheit = (K - 273.15) * 9.0/5.0 + 32.0;
            
    printf("°%.2lf K = %.2lf F", K, fahrenheit);
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
    
    printf("\nDigite uma opção: ");
    scanf("%d", &op);
   
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

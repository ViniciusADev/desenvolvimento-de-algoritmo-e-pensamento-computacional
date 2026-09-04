#include <stdio.h>
# include <math.h>

int main()
{
    printf("---Digite uma opção de converção de temperatura -- \n"
           "1- Celsius(°C) -> Fahrenheit (°F) \n"
           "2- Fahrenheit (°F) -> Celsius(°C) \n"
           "3- Celsius(°C) -> Kelvin (K) \n" 
           "4- Kelvin (K) -> Celsius(°C) \n"
           "5- Fahrenheit (°F) -> Kelvin (K) \n"
           "6- Kelvin (K) -> Fahrenheit (°F) \n"
           "0- Encerra o programa \n");
           
    int op;  
    
    printf("\nDigite uma opção: ");
    scanf("%d", &op);
   
    switch (op){
        
        case 0: {
           printf("\nSaindo...");
           break;
        }   
        case 1: { 
            double C = 0;
            printf("\n Digite o valor em Celsius: ");
            scanf("%lf", &C);
            
            double fahrenheit = (C * 9/5) + 32;
            
            printf("°%.2lf  = °%.2lf F", C, fahrenheit);
            break;
        }
        case 2: {
          double F = 0;
            printf("\nDigite o valor em Fahrenheit: ");
            scanf("%lf", &F);
            
            double celsius = (F - 32) * 5/9;
            
            printf("°%.2lf C = °%.2lf F", F, celsius); 
            break;
        }
        case 3: {
            double C = 0;
            printf("\nDigite o valor em Celsius: ");
            scanf("%lf", &C);
            
            double kelvin = C + 273.15;
            
            printf("°%.2lf C = °%.2lf K", C, kelvin);
            break;
        }
        case 4: {
            double K = 0;
            printf("\nDigite o valor em Kelvin: ");
            scanf("%lf", &K);
            
            double celsius = K - 273.15;
            
            printf("°%.2lf K = °%.2lf C", K, celsius);
            break;
        }
        case 5:{
          double K = 0;
            printf("\nDigite o valor em Kelvin: ");
            scanf("%lf", &K);
            
            double fahrenheit = K * 9/5 - 459.67;
            
            printf("°%.2lf K = °%.2lf C", K, fahrenheit);
            break;
        }
        case 6:{
         double F = 0;
            printf("\nDigite o valor em Fahrenheit: ");
            scanf("%lf", &F);
            
            double kelvin = (F + 459.67) * 5/9;
            
            printf("°%.2lf F = °%.2lf K", F, kelvin); 
            break;
        }
        default:
        printf("\n Opção invalida!");
    }

    return 0;
}

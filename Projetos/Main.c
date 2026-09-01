#include <stdio.h>
#include <math.h> 

int main() {
    
    
        char* menu = ("\n-------------------------------------ID das funções da calculadora científica-------------------------------------------\n"

             "|1-  Soma(+)                       |2- Subtração(-)               |3- Multiplicação(X)          |4- Divisão(÷)          |\n"
             "|5- Potênciação(Bᵉ)                |6- Raiz quadrada(√)           |7- Fatorial(X!)              |8- Raiz cúbica(∛)      |\n"
             "|9- logaritmo(log) (Base 10)       |10- Seno(Sen)                 |11- Cosseno(Cos)             |12- Tangente(Tan)      |\n"
             "|13- Arredondamento(≈)             |14- Mínimo Multiplo Comum(MMC)|15- Máximo Divisor Comum(MDC)|16- Porcentagem(%)     |\n"
             "|17- Conversão de ângulos(rad ou °)|18- Constante de PI(π)        |19- Constante de Euler(e)    |20- Valor absoluto(Abs)|\n");
        printf("%s", menu);
    while(1){
        int op = 0;
        printf("\nEscolha uma opção: ");
        scanf("%d", &op);
        
        if (op == 0){
          printf("\nSaindo...");
          break;
        }
        
        else if(op == 1){
            double n1 = 0, n2 = 0;
          printf("Digite um valor: ");
          scanf("%lf", &n1);
          printf("Escolha outro número: ");
          scanf("%lf", &n2);
          double soma = n1 + n2;
          printf("A soma de %.2lf + %.2lf = %.2lf", n1, n2, soma);
        }
          
        else if(op == 2){
            double n1 = 0, n2 = 0;
          printf("Digite um valor: ");
          scanf("%lf", &n1);
          printf("Escolha outro número: ");
          scanf("%lf", &n2);
          double sub = n1 - n2;
          printf("A subtração de %.2lf - %.2lf = %.2lf", n1, n2, sub);
         }
         
        else if(op == 3){
            double n1 = 0, n2 = 0;
          printf("Digite um valor: ");
          scanf("%lf", &n1);
          printf("Escolha outro número: ");
          scanf("%lf", &n2);
          double mult = n1 * n2;
          printf("A multiplicação de %.2lf * %.2lf = %.2lf", n1, n2, mult);
         }
         
        else if(op == 4){
            double n1 = 0, n2 = 0;
          printf("Digite um valor: ");
          scanf("%lf", &n1);
          printf("Escolha outro número: ");
          scanf("%lf", &n2);
          double divisao = n1 / n2;
          printf("A divisão de %.2lf / %.2lf = %.2lf", n1, n2, divisao);
          
         }
         
        else if(op == 5){
            int n1 = 0, n2 = 0;
          printf("Digite o valor da base: ");
          scanf("%d", &n1);
          printf("Digite o valor do expoente: ");
          scanf("%d", &n2);
          int potencia = pow(n1,n2);
          printf("%d ^ %d = %d", n1, n2, potencia);
          
         }
         
        else if(op == 6){
            int n1 = 0;
          printf("Digite o valor da base: ");
          scanf("%d", &n1);
          int raiz_quadrada = sqrt(n1);
          printf("A raiz quadrada de %d e %d", n1,  raiz_quadrada);
         }
          
        else if(op == 7){             
            
        }
        
        else if(op == 8){
            
        }
        
        else if(op == 9){
            
        }
        
        else if(op == 10){
            
        }
        
        else if(op == 11){
            
        }
         
        else{
            printf("Digite uma opção valida, por favor!");
        }
    }
    return 0;

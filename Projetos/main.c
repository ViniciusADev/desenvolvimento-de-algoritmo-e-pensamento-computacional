#include <stdio.h>
#include <math.h>

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
};
        
int lerEntrada_int(const char* mensagem) { // Função para o tratamento de entradas do tipo int (inteiro)
    int valor;
	
    while (1) {
        printf("%s", mensagem);
		
        if (scanf("%d", &valor) == 1) return valor; 
        
        printf("Error: Entrada invalida! Por favor, digite um número inteiro valido.\n");
		
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }
};

long long lerEntrada_longlong(const char* mensagem) { // Função para o tratamento de entradas do tipo long long(valores grandes)
    long long valor;
	
    while (1) {
        printf("%s", mensagem);
		
        if (scanf("%lld", &valor) == 1) return valor; 
        
        printf("Erro: Entrada invalida! Por favor, digite um número inteiro valido.\n");
        
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }
};

int main() {

	 const char* menu ="\n-------------------------------------ID das funções da calculadora científica-------------------------------------------\n"

	              "|1-  Soma(+)                       |2- Subtração(-)               |3- Multiplicação(X)          |4- Divisão(÷)          |\n"
	              "|5- Potênciação(Bᵉ)                |6- Raiz quadrada(√)           |7- Fatorial(X!)              |8- Raiz cúbica(∛)      |\n"
	              "|9- logaritmo(log) (Base 10)       |10- Seno(Sen)                 |11- Cosseno(Cos)             |12- Tangente(Tan)      |\n"
	              "|13- Arredondamento(≈)             |14- Mínimo Multiplo Comum(MMC)|15- Máximo Divisor Comum(MDC)|16- Porcentagem(%)     |\n"
	              "|17- Conversão de ângulos(rad ou °)|18- Constante de PI(π)        |19- Constante de Euler(e)    |20- Valor absoluto(Abs)|\n";
	printf("%s", menu);

	while(1) {
		int op = lerEntrada_int("\nEscolha uma opção: ");

		if (op == 0) {
			printf("\nSaindo...");
			break;
		}

		else if(op == 1) {
	     	double n1 = lerEntrada_double("Digite um valor: ");

			double n2 = lerEntrada_double("Escolha outro número: ");

			double soma = n1 + n2;
			printf("A soma de %.2lf + %.2lf = %.2lf \n", n1, n2, soma);
		}

		else if(op == 2) {
		    double n1 = lerEntrada_double("Digite um valor: ");
	
			double n2 = lerEntrada_double("Escolha outro número: ");   
	
			double sub = n1 - n2;
			printf("A subtração de %.2lf - %.2lf = %.2lf \n", n1, n2, sub);
		}

		else if(op == 3) {
			double n1 = lerEntrada_double("Digite um valor: ");
		
			double n2 = lerEntrada_double("Escolha outro número: ");
			
			double mult = n1 * n2;
			printf("A multiplicação de %.2lf * %.2lf = %.2lf \n", n1, n2, mult);
		}

		else if(op == 4) {
	     	double n1 = lerEntrada_double("Digite um valor: ");
			
			double n2 = lerEntrada_double("Escolha outro número: ");
			
			if(n2 == 0){
			    printf("Error: A calculadora não aceita divisão por zero!");
			}
			else{
			double divisao = n1 / n2;
			printf("A divisão de %.2lf / %.2lf = %.2lf \n", n1, n2, divisao);
			}

		}

		else if(op == 5) {
			double n1 = lerEntrada_double("Digite o valor da base: ");
			
			double n2 = lerEntrada_double("Digite o valor do expoente: ");
			
			double potencia = pow(n1,n2);
			printf("%.2lf ^ %.2lf = %.2lf", n1, n2, potencia);

		}

		else if(op == 6) {
			double n1 = lerEntrada_double("Digite um valor: ");
			if(n1 < 0){
			    printf("Error: A calculadora não aceita raizes negativas!");
			}
			else{
			double raiz_quadrada = sqrt(n1);
			printf("A raiz quadrada de %.2lf é %.2lf", n1,  raiz_quadrada);
			}
		}

		else if(op == 7) { // fatorial 

		}

		else if(op == 8) {
            double n1 = lerEntrada_double("Digite o valor da base: ");
			
        	double raiz_cubica = cbrt(n1);
			printf("A raiz cúbica de %.2lf é %.2lf", n1,  raiz_cubica);
		}

		else if(op == 9) {
           double n1 = lerEntrada_double("Digite um número: ");
           if (n1 < 0){
               printf("Error: Digite um valor maior que zero!");
           }
           else{
               double log_10 = log10(n1);
               printf("O log10 de %.2lf é %.2lf", n1, log_10);
           }
		}

		else if(op == 10) { // Seno

		}

		else if(op == 11) { // Cosseno

		}
		
		else if(op == 12){ // Tangente
		    
		}
		
		else if(op == 13){
		    double n1 = lerEntrada_double("Digite um valor: ");
		    
		    double abaixo = floor(n1);
		    double acima = ceil(n1);
		    
		    printf("O arredondamento de %.2lf: \n- Abaixo: %.2lf \n- Acima: %.2lf", n1, abaixo, acima);
		}
		
        else if(op == 14){ // MMC
            
        }
        
        else if(op == 15){ // MDC
            
        }
        
        else if(op == 16){ // Porcentagem
            
        }
        
        else if(op == 17){ // Conversor de ângulos 
            
        }
        
        else if(op == 18){ // Contante de PI
            
        }
        
        else if(op == 19){ // Constante de Euler
            
        }
        
        else if(op == 20){ //  
            double n1 = lerEntrada_double("Digite um valor: ");
            
            double valor_absoluto = fabs(n1);
            printf("O valor absoluto de %.2lf é %.2lf", n1, valor_absoluto);
        }
		else {
			printf("Digite uma opção valida, por favor!");
		}
	}
    return 0;
}



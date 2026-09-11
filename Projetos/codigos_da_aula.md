# Códigos 

```c
#include <stdio.h>
#include <string.h>

int main() {
    char s1[50], s2[50];
    printf("Digite a primiera string: ");
    scanf("%s", s1);
    printf("Digite a segunda string: ");
    scanf("%s", s2);
    
    if (strcmp(s1, s2) == 0){
        printf("As string são iguais! \n");
    }
    else if (strcmp(s1, s2) < 0){
            printf("A primeira string é menor!\n");
        }        
    else{
     printf("A primeira string e maior!\n");   
    }
    
	return 0;

}
```

---

```c
#include <stdio.h>
#include <string.h>

int main() {
	char senha[50];
	const char senha_correta[] = "1234";

	printf("Digite a senha: ");
	scanf("%s", senha);

	while (strcmp(senha, senha_correta) != 0){
	    printf("Senha incorreta! Tente novamente: ");
	    scanf("%s", senha);
	}
	printf("Acesso liberado!");

		return 0;

}
```

---

```c
#include <stdio.h>

int main() {
    
        float temperatura;
        
        printf("Iniciando monitoramento de temperatura...\n");
        printf("Digite a temperatura (ºC): ");
        scanf("%f", &temperatura);
        
        while(temperatura < 80) {
           printf("Temperatura atual: %.1lf ºC \n", temperatura);
           printf("Digite a temperatura (ºC): ");
           scanf("%f", &temperatura);
        }
        printf("\nALERTA: temperatura acima do limete!");

		return 0;

} 
```

---

```c
#include <stdio.h>

int main() {
	int n, i = 1;

	printf("Digite um número para ver a tabuada: ");
	scanf("%d", &n);

	do {
		printf("%d x %d = %d \n", n, i, n * i);
		i++;
	} while(i <= 10);
	
	return 0;
}

```
> Nota1: Rastreamento de dados?  Rastreamento de saída?

> Nota2: Desafio Guiado: Sistema Inteligente de Monitoramento Industrial (temperatura de máquina) 

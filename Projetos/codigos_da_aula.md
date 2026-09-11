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


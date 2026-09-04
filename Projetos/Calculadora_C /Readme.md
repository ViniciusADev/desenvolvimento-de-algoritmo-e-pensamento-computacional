> # Arquitetura & Implementação  (Linguagem C) 

Para garantir a funcionalidade e precisão matemática no código em C, o projeto foi estruturado com foco em **validação de entrada de dados**, **prevenção de memória** e **controle de fluxo**.

---

# Motivos dos Tratamentos na Linguagem C:

* **Estabilidade do Programa:** Limpeza do buffer do teclado  e validação das entradas numéricas para evitar *loops* infinitos.
* **Integridade Matemática:** Verificação de cálculos e gargalos(como divisão por zero e raízes de números negativos) antes da execução das operações evitando alguns problemas em c. 
* **Tentativa de Precisão nos Resultados:** Utilização do tipo `long long` para lidar com números inteiros de até 64 bits em operações como MMC, MDC e Fatorial; `double` para lidar com números reais com 15 a 17 casas decimais; `int` para lidar com os números do tipo inteiro. 

---
### Funcionalidades Integradas (20 Operações) 

O sistema suporta as seguintes cálculos: 

| Categoria | Operações Suportadas |
| :--- | :--- |
| **Aritmética Básica** | Soma, Subtração, Multiplicação, Divisão |
| **Potenciação & Raízes** | Potenciação ($B^e$), Raiz Quadrada ($\sqrt{x}$), Raiz Cúbica ($\sqrt[3]{x}$) |
| **Trigonometria** | Seno ($\sin$), Cosseno ($\cos$), Tangente ($\tan$), Conversão de Ângulos ($\text{rad} \leftrightarrow \text{deg}$) |
| **Estatística & Teoria dos Números** | Fatorial ($x!$), Logaritmo ($\log_{10}$), MMC, MDC, Porcentagem (%) |
| **Utilitários & Constantes** | Arredondamento ($\approx$), Valor Absoluto(\|X\|), Constante ($π$), Constante de Euler ($e$) |

---

### Como Compilar e Executar o Código em C

1. Instale um compilador C (como o **GCC**).
2. Abra o terminal na pasta onde o arquivo `main.c` está localizado.
3. Compile o arquivo incluindo a biblioteca matemática (`-lm`):
   ```bash
   gcc -Wall -Wextra main.c -o main -lm
4. Execute o programa gerado:

 - Linux / macOS: `./main`

 - Windows: `main.exe`

### Ou

1. Copie o código do arquivo `main.c`.
2. Abra um compilador de c online [OnlineGDB](https://www.onlinegdb.com/online_c_compiler)
3. Apague todo o código inicial.
4. Cole o código do `main.c`.
5. Execute o programa apertando F9.

# Calculadora Científica em Flowgorithm e C 

Projeto desenvolvido como parte da disciplina de Pensamentos e Algoritmos Computacionais . A aplicação consiste em uma calculadora com 20 operações matemáticas, feita no Flowgorithm antes da sua implementação para a  linguagem C.

---

# Visão Geral do Projeto 

Este repositório contém as etapas completo de desenvolvimento da calculadora:
1. **Fase 1:** Modelagem de fluxo de dados, lógica de controle e modularização gráfica no **Flowgorithm** (`.fprg`).
2. **Fase 2:** Implementação da lógica e fluxo do Flowgorithm  para a  **Linguagem C** (`.c`).

---

# Arquitetura & Otimização (Flowgorithm) 

Para evitar problemas com  renderização gráfica e lag na interface do Flowgorithm devido ao alto volume de conteúdo na tela, o projeto foi arquitetado usando **Modularização por Funções (Subprogramas)**. 

---

### Motivos da Modularização:
* **Escalabilidade:** O fluxo principal (`Main`) atua estritamente como um controlador de rotas de menu.
* **Isolamento de Erros:** Cada operação matemática possui seu próprio escopo de variáveis e tratamentos de erro (ex: divisão por zero, log de números não positivos, etc.).
* **Desempenho Visual:** Redução de conteúdo no código  principal e menos complexidade no diagrama principal.

---


### Funcionalidades Integradas (20 Operações) 

A calculadora suporta as seguintes cálculos modularizados: 

| Categoria | Operações Suportadas |
| :--- | :--- |
| **Aritmética Básica** | Soma, Subtração, Multiplicação, Divisão |
| **Potenciação & Raízes** | Potenciação ($B^e$), Raiz Quadrada ($\sqrt{x}$), Raiz Cúbica ($\sqrt[3]{x}$) |
| **Trigonometria** | Seno ($\sin$), Cosseno ($\cos$), Tangente ($\tan$), Conversão de Ângulos ($\text{rad} \leftrightarrow \text{deg}$) |
| **Estatística & Teoria dos Números** | Fatorial ($x!$), Logaritmo ($\log_{10}$), MMC, MDC, Porcentagem (%) |
| **Utilitários & Constantes** | Arredondamento ($\approx$), Valor Absoluto(\|X\|), Constante ($π$), Constante de Euler ($e$) |

---

### Como Executar o Fluxograma 

1. Baixe e instale o [Flowgorithm](http://www.flowgorithm.org/).
2. Clone este repositório:
   ```bash
   https://github.com/Snow-in/Projeto_de_AePC.git
3. ​Abra o arquivo .fprg(Calculadora_flowgorithm.fprg) no Flowgorithm e clique em Executar (F5).

#### Ou 

1. Clique no botão verde no canto inferior direito, escrito `<> Code`. 

2. Baixe o arquivo em formato .zip 

3. Após isso, no seu gerenciador de arquivos, extraia o arquivo em algum local. (Recomendação: Área de trabalho) 

4. Após isso instale ou abra o Flowgorithm e clique em abri arquivo (Calculadora_Flowgorithm.fprg) no programa. 

5. Após isso execute o programa (F5).
   
---
---

# Arquitetura & Implementação  (Linguagem C) 

Para garantir a funcionalidade e precisão matemática no código em C, o projeto foi estruturado com foco em **validação de entrada de dados **, **prevenção de memória** e **controle de fluxo**.

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

1. Copie o código do arquivo `main.c`
2. Abra um compilador de c online: [OnlineGDB](https://www.onlinegdb.com/online_c_compiler)
3. Apague todo o código inicial
4. Cole o código do `main.c`
5. Execute o programa apertando F9




# Projeto Prático: Calculadora Científica em Flowgorithm

**Aluno:** Vinícius Alves  
**Disciplina:** Algoritmos e pensamento computacional

---

## Objetivo do Programa

O objetivo deste projeto é desenvolver uma **Calculadora Científica** utilizando a ferramenta **Flowgorithm**, aplicando conceitos de lógica de programação, controle de fluxo, estruturas de repetição e **modularização por subprogramas (funções)**. 

A aplicação serve como modelo lógico estruturado para depois fazer sua conversão e implementação na linguagem C, com algumas pequenas alterações.

---

## Descrição do Funcionamento

A calculadora atua com uma interface de terminal do flowgorithm via menu interativo de navegação contínua (laço `while`):

1. **Menu Principal:** O programa exibe uma lista numerada com as 20 operações disponíveis e uma opção de saída (`0`).
2. **Seleção de Opção:** O usuário escolhe a operação desejada digitando a opção de cálculo correspondente a operação.
3. **Execução Modular:** O programa redireciona o fluxo para a **função (subprograma)** específica da operação escolhida pelo usuário.
4. **Coleta e Validação de Dados:** A função solicita os dados de entrada, realiza tratamentos de exceção (como validação de divisão por zero ou medidas negativas) e processa os cálculos.
5. **Retorno:** Exibe o resultado na tela e retorna ao menu principal até que o usuário decida encerrar o programa digitando `0`.

> ** Arquitetura:** O fluxo principal (`Main`) funciona puramente como um gerenciador de rotas. O uso de subprogramas isolados previne erros de variáveis e reduz o impacto visual no diagrama do Flowgorithm, um extra e que ajuda no leg gerado pela quantidade de operações e if`s no código. 

---

## Relação das 20 Funções Implementadas:

Abaixo está a relação completa de todas as rotas e funções:

| Nº | Função / Operação | Descrição |
| :-: | :--- | :--- |
| **01** | **Soma** | Adição entre dois números reais |
| **02** | **Subtração** | Subtração entre dois números reais |
| **03** | **Multiplicação** | Multiplicação entre dois números reais |
| **04** | **Divisão** | Divisão de dois números com tratamento contra divisão por zero |
| **05** | **Potenciação** | Eleva uma base $B$ a um expoente $e$ ($B^e$) |
| **06** | **Raiz Quadrada** | Calcula $\sqrt{x}$ (com validação para radicais não negativos) |
| **07** | **Fatorial** | Cálculo do fatorial ($x!$) para inteiros positivos |
| **08** | **Raiz Cúbica** | Calcula $\sqrt[3]{x}$ |
| **09** | **Logaritmo** | Logaritmo na base 10 ($\log_{10}$) |
| **10** | **Seno** | Cálculo do seno ($\sin$) de um ângulo |
| **11** | **Cosseno** | Cálculo do cosseno ($\cos$) de um ângulo |
| **12** | **Tangente** | Cálculo da tangente ($\tan$) de um ângulo |
| **13** | **Arredondamento** | Arredondamento de números reais |
| **14** | **MMC** | Mínimo Múltiplo Comum entre dois números inteiros |
| **15** | **MDC** | Máximo Divisor Comum entre dois números inteiro |
| **16** | **Porcentagem** | Cálculo de porcentagens simples (%) |
| **17** | **Conversão Rad/Grau** | Converte ângulos de Radianos para Graus e vice-versa |
| **18** | **IMC** | Cálculo do Índice de Massa Corporal com validação de altura |
| **19** | **Área Geométrica** | Cálculo de área de Retângulos, Triângulos e Círculos |
| **20** | **Absoluto (Abs)** | Retorna o valor em módulo ou seja positivo |

---

## Funções Obrigatórias

Em conformidade com os requisitos da atividade, as funções **18** e **19** cobrem regras de negócio e validações específicas:

*  **`IMC` (Opção 18):** Solicita o peso ($\text{kg}$) e a altura ($\text{m}$) do usuário. Possui validação interna que impede a entrada de altura menor ou igual a zero, evitando divisões inválidas e calculando o índice através da fórmula:
  $$\text{IMC} = \frac{\text{Peso}}{\text{Altura}^2}$$

*  **`AreaGeometrica` (Opção 19):** Submenu interativo que permite escolher a figura geométrica desejada para cálculo da área:
  1. **Retângulo:** $A = \text{base} \times \text{altura}$
  2. **Triângulo:** $A = \frac{\text{base} \times \text{altura}}{2}$
  3. **Círculo:** $A = \pi \times \text{raio}^2$

---

## Como Executar o Fluxograma 

1. Baixe e instale o [Flowgorithm](http://www.flowgorithm.org/).
2. Clone este repositório ou baixe os arquivos:
   ```bash
   git clone https://github.com/Snow-in/desenvolvimento-de-algoritmo-e-pensamento-computacional.git
3. ​Abra o arquivo .fprg(calculadora_flowgorithm.fprg) no Flowgorithm e clique em Executar (F5).

#### Ou 

1. Clique no botão verde no canto inferior direito, escrito `<> Code`. 
2. Baixe o arquivo em formato .zip 
3. Após isso, no seu gerenciador de arquivos, extraia o arquivo em algum local. (Recomendação: Área de trabalho) 
4. Depois isso, instale ou abra o Flowgorithm e clique em abri arquivo (calculadora_Flowgorithm.fprg) no programa. 
5. Logo após isso execute o programa (F5). 

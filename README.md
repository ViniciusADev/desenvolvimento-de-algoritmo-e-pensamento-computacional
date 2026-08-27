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


Funcionalidades Integradas (20 Operações) 

A calculadora suporta as seguintes cálculos modularizados: 

| Categoria | Operações Suportadas |
| :--- | :--- |
| **Aritmética Básica** | Soma, Subtração, Multiplicação, Divisão |
| **Potenciação & Raízes** | Potenciação ($B^e$), Raiz Quadrada ($\sqrt{x}$), Raiz Cúbica ($\sqrt[3]{x}$) |
| **Trigonometria** | Seno ($\sin$), Cosseno ($\cos$), Tangente ($\tan$), Conversão de Ângulos ($\text{rad} \leftrightarrow \text{deg}$) |
| **Estatística & Teoria dos Números** | Fatorial ($x!$), Logaritmo ($\log_{10}$), MMC, MDC, Porcentagem (%) |
| **Utilitários & Constantes** | Arredondamento ($\approx$), Valor Absoluto(\|X\|), Constante ($π$), Constante de Euler ($e$) |

---

Como Executar o Fluxograma 

1. Baixe e instale o [Flowgorithm](http://www.flowgorithm.org/).
2. Clone este repositório:
   ```bash
   https://github.com/Snow-in/Projeto_de_AePC.git
3. ​Abra o arquivo .fprg(Calculadora_flowgorithm.fprg) no Flowgorithm e clique em Executar (F5). 





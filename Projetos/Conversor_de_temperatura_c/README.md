# Conversor de Temperaturas em C

**Aluno:** Vinícius Alves  
**Disciplina:** Algoritmos e Pensamento Computacional  

---

## Objetivo do Programa

O objetivo deste projeto é desenvolver um **Conversor de Temperaturas em Linguagem C**, capaz de realizar conversões entre as três principais escalas termométricas: Celsius (°C), Fahrenheit (°F) e Kelvin (K). O sistema oferecer uma interface no terminal bem interativa e robusta, utilizando a estrutura `switch...case` para controle de fluxo e funções de validação para garantir a estabilidade do sistema.

---

## Descrição do Funcionamento

O programa apresenta um menu de opções ao usuário, realiza a leitura da entrada do usuário e executa a conversão correspondente através da estrutura de decisão `switch...case`.

Para garantir a **estabilidade, precisão e modularidade**, o código conta com:
* **Validação de Entrada e Limpeza de Buffer:** Funções que são dedicadas para capturar entradas de dados do teclado (`int` e `double`), tratando erros de digitação, como letras ou caracteres especiais, e prevenindo *loops* infinitos.
* **Modularização por Funções:** Implementação de funções especifica, dividindo-as cada uma em uma conversão de função `void`, o que torna o código limpo e de fácil manutenção.
* **Conformidade de Unidades:** Apresentação clara do resultado formatado com duas casas decimais e suas respectivas unidades padrão (°C, °F e K).

---

## Relação das Funções e Conversões Implementadas

O programa oferece suporte a 6 operações de conversão entre escalas termométricas:

| Nº | Conversão | Função Implementada | Fórmula Utilizada |
| :-: | :--- | :--- | :--- |
| **01** | **Celsius $\rightarrow$ Fahrenheit** | `celsius_para_fahrenheit()` | $F = (C \times \frac{9}{5}) + 32$ |
| **02** | **Celsius $\rightarrow$ Kelvin** | `celsius_para_kelvin()` | $K = C + 273.15$ |
| **03** | **Fahrenheit $\rightarrow$ Celsius** | `fahrenheit_para_celsius()` | $C = (F - 32) \times \frac{5}{9}$ |
| **04** | **Fahrenheit $\rightarrow$ Kelvin** | `fahrenheit_para_kelvin()` | $K = (F - 32) \times \frac{5}{9} + 273.15$ |
| **05** | **Kelvin $\rightarrow$ Celsius** | `kelvin_para_celsius()` | $C = K - 273.15$ |
| **06** | **Kelvin $\rightarrow$ Fahrenheit** | `kelvin_para_fahrenheit()` | $F = (K - 273.15) \times \frac{9}{5} + 32$ |

---

### Como Compilar e Executar o Código em C

> Nota: Este método só funciona no Windows
 
1. Certifique-se de ter um compilador C instalado (como o **GCC**).
2. Abra o terminal na pasta onde o arquivo `conversor_de_temperatura.c` está localizado.
3. Compile o arquivo incluindo a biblioteca matemática (`-lm`):
   ```bash
   gcc -Wall -Wextra conversor_de_temperatura.c -o conversor_de_temperatura
4. Execute  arquivo gerado `conversor_de_temperatura.exe`
 

### Ou


1. Copie o código do arquivo `conversor_de_temperatura.c`.
2. Abra um compilador de c online [OnlineGDB](https://www.onlinegdb.com/online_c_compiler)
3. Apague todo o código inicial.
4. Cole o código do `conversor_de_temperatura.c`.
5. Execute o programa apertando F9. 


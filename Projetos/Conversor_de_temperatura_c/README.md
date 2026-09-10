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

Tabela
---

### Como Compilar e Executar o Código em C




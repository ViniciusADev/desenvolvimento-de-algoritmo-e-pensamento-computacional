# Calculadora Científica em C

**Aluno:** Vinícius Alves  
**Disciplina:** Algoritmos e pensamento computacional 

---

## Objetivo do Programa

O objetivo deste projeto é desenvolver uma **Calculadora Científica com 20 operações em Linguagem C**, capaz de realizar operações matemáticas fundamentais e avançadas. O programa visa oferecer uma interface via terminal, com tratamento de erros e validação contínua de entrada de dados para garantir a estabilidade do sistema.

---

## Descrição do Funcionamento

A calculadora opera em um laço de repetição contínuo (`while`), exibindo um menu interativo com todas as opções disponíveis até que o usuário decida encerrar (opção `0`). 

Para garantir a **estabilidade e precisão**, o código conta com:
* **Validação de Entrada:** Tratamento e limpeza do *buffer* do teclado para evitar *loops* infinitos caso o usuário digite letras em vez de números.
* **Integridade Matemática:** Prevenção de erros de execução, bloqueando operações inválidas como divisão por zero, raiz quadrada de número negativo e logaritmo de número menor ou igual a zero.
* **Precisão nos Resultados:** Utilização do tipo `double` (até 15 casas decimais) para operações reais e `long long` (64 bits) para fatoriais e números inteiros grandes.

---

## Relação das 20 Funções Implementadas

O programa oferece suporte a 20 operações e constantes matemáticas organizadas a seguir:

--- Tabela ---

### Como Compilar e Executar o Código em C

> Nota: Essa mátodo só funciona no Windows
 
1. Certifique-se de ter um compilador C instalado (como o **GCC**).
2. Abra o terminal na pasta onde o arquivo `calculadora.c` está localizado.
3. Compile o arquivo incluindo a biblioteca matemática (`-lm`):
   ```bash
   gcc -Wall -Wextra calculadora.c -o calculadora -lm
4. Execute  arquivo gerado `calculadora.exe`
 

### Ou
1. Copie o código do arquivo `calculadora.c`.
2. Abra um compilador de c online [OnlineGDB](https://www.onlinegdb.com/online_c_compiler)
3. Apague todo o código inicial.
4. Cole o código do `main.c`.
5. Execute o programa apertando F9. 

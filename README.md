# SubstituidorDeVogais

**Prof. Me. Patrick Araújo**  
**Aula 6 (Vetores e Strings) - Estrutura de Dados e Algoritmos**  
**11 de Abril de 2025**

---

## 📝 Descrição do Projeto

Implementação em C do Exercício 6 do Capítulo 7 do livro *"Linguagem C: Completa e Descomplicada"* (André Backes, Elsevier, 2013), desenvolvido como atividade prática sobre manipulação de strings.

**Objetivo:**  
Substituir todas as vogais de uma string por um caractere especificado e contar as ocorrências.

---

## 📚 Enunciado Original

"Leia uma string do teclado e conte quantas vogais (a, e, i, o, u) ela possui. Entre com um caractere (vogal ou consoante) e substitua todas as vogais da palavra dada por esse caractere. Ao final, imprima a nova string e o número de vogais que ela possui."

---

## 🛠 Funcionamento

### 🔧 Tecnologias Utilizadas
- Linguagem C
- Biblioteca padrão (stdio.h, string.h, ctype.h)

### ⚙️ Lógica Implementada
1. Leitura segura da string com `fgets()`
2. Remoção do caractere de nova linha (`\n`)
3. Identificação de vogais (case insensitive)
4. Substituição por caractere fornecido
5. Contagem de vogais substituídas

### 📥 Entradas
1. String de até 50 caracteres
2. Caractere substituto

### 📤 Saídas
1. String original
2. Quantidade de vogais
3. String modificada

---

## 🚀 Como Executar

```bash
gcc main.c -o main
./main

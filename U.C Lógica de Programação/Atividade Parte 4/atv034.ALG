Algoritmo "semnome"
// Disciplina  :  [Lógica de Programação]
// Professor   : Rafael Lima
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 19/08/2024
Var
   // Seção de Declarações das variáveis
   i: inteiro
   maior, n: real

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...

   para i <- 1 ate 50 faca
      escreval("Informe um número: ")
      leia(n)
      se(maior < n) entao
         maior <- n
      fimse
   fimpara
   escreva("O maior número entre eles e: ", maior)

Fimalgoritmo
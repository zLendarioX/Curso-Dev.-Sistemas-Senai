Algoritmo "semnome"
// Disciplina  :  [Lógica de Programação]
// Professor   : Rafael Lima
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 19/08/2024
Var
   // Seção de Declarações das variáveis
   i: inteiro
   p, im, n: real

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...

   para i <- 1 ate 50 faca
      escreval("Informe um número: ")
      leia(n)
      limpatela
      se(n <- n % 2 > 0) entao
         p <- p + 1
      senao
         im <- im + 1
      fimse

   fimpara
   escreva(" Tem no total de ", p ," de números pares e ",im," de números impares")
Fimalgoritmo
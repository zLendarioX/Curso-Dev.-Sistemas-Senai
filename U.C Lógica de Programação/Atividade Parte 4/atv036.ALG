Algoritmo "semnome"
// Disciplina  :  [Lógica de Programação] 
// Professor   : Rafael Lima 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 19/08/2024
Var
// Seção de Declarações das variáveis 
   i, nu: inteiro
   n, media, s: real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
   escreva("Informe quantos números irá informar: ")
   leia(nu)

   para i <- 1 ate nu faca
   escreva("Informe a ",i,"° Número: ")
   leia(n)
   s <- s + n
   fimpara
   media <- s / i
   limpatela
   escreva("Média: ", media: 10:2)
Fimalgoritmo
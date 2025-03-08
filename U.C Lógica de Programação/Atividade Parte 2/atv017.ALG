Algoritmo "semnome"
// Disciplina  :  [Lógica de Programação]
// Professor   : Rafael Lima
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 14/08/2024
Var
   horas, nivel, valor: inteiro
Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   escreva("Qual seu nivel: ")
   leia(nivel)
   escreva("Qual foi o total de horas trabalhada: ")
   leia(horas)
   
   
   
   se(nivel = 1) entao
    valor <- 25 * horas
   fimse
   
   se(nivel = 2) entao
    valor <- 35 * horas
   fimse
   
   se(nivel = 3) entao
    valor <- 45 * horas
   fimse

   escreval("Seu pagazmento será no valor de: ", valor)
Fimalgoritmo
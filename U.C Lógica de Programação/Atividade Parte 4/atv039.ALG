Algoritmo "semnome"
// Disciplina  :  [Lógica de Programação]
// Professor   : Rafael Lima
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 19/08/2024
Var
   // Seção de Declarações das variáveis
   i, n, nu: inteiro

Inicio
 // Seção de Comandos, procedimento, funções, operadores, etc...
   escreva("Informe quantos números irá informar: ")
   leia(nu)

   para i <- 1 ate nu faca

      escreval("Informe um valor: ")
      leia(n)
      se(n > 0) entao
         escreval("Positivo")
      senao
       se(n < 0) entao
       
         escreval("Negativo")
         senao
          escreval("Neutro")
         fimse
      fimse
   fimpara

Fimalgoritmo
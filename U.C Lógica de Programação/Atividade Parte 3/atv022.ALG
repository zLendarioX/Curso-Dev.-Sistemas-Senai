Algoritmo "semnome"
// Disciplina  :  [Lógica de Programação]
// Professor   : Rafael Lima
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 15/08/2024
Var
   // Seção de Declarações das variáveis
   op: inteiro
   r, n1, n2: real
Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   escreva("Informe um número: ")
   leia(n1)
   escreva("Informe a Operação: ")
   leia(op)
   escreva("Informe um número: ")
   leia(n2)

   escolha(op)
   caso 1
      r <- n1 + n2
      escreva("A soma dos valores e ingual:", r)
   caso 2
      r <- n1 - n2
      escreva("A subtração dos valores e ingual:", r)
   caso 3
      r <- n1 * n2
      escreva("A mutiplicação dos valores e ingual:", r)
   caso 4
      r <- n1 / n2
      escreva("A dovisão dos valores e ingual:", r: 2:2)
   outrocaso
      escreva("Operação invalida!")
   fimescolha


Fimalgoritmo
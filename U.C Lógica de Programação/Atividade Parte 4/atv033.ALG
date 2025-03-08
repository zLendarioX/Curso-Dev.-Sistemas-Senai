Algoritmo "semnome"
// Disciplina  :  [Lógica de Programação]
// Professor   : Rafael Lima
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 19/08/2024
Var
   // Seção de Declarações das variáveis
   i, n, f: inteiro

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   escreva("Informe o numero inicial: ")
   leia(n)
   escreva("Informe o número final: ")
   leia(f)
   se(n > f) entao
      para i <- n ate f  passo -1 faca
         escreva(i)
      fimpara
   senao
      para i <- n ate f faca
         escreva(i)
      fimpara
   fimse


Fimalgoritmo
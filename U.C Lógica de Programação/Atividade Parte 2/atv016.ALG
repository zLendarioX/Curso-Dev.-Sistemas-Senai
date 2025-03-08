Algoritmo "semnome"
// Disciplina  :  [Lógica de Programação]
// Professor   : Rafael Lima
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 13/08/2024
Var

   valor: inteiro
Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   escreva("Informe um número: ")
   leia(valor)


   se(valor <= 10) entao
   escreva("e menor 10!")
   fimse
   se(valor <= 20) entao
      se(valor >= 10) entao
         escreva("entre 10 a 20!")
      fimse
   fimse
   se(valor <= 30) entao
      se(valor >= 21) entao
         escreva("entre 21 a 30!")
      fimse
   fimse
   se(valor <= 40) entao
      se(valor >= 31) entao
         escreva("entre 31 a 40!")
      fimse
   fimse
   se(valor <= 50) entao
      se(valor >= 41) entao
         escreva("entre 41 a 50!")
      fimse
   fimse
   se(valor > 50) entao
      escreva("maior que 50!")
   fimse
Fimalgoritmo
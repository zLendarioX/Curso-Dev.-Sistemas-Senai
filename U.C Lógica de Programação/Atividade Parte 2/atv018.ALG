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
   escreva("Informe sua idade: ")
   leia(valor)
   se(valor <= 12) entao
      se(valor >= 0) entao
         escreva("Você é uma criança")
      fimse
   fimse
   se(valor <= 17) entao
      se(valor >= 13) entao
         escreva("Você é um adolecente!")
      fimse
   fimse
   se(valor < 59) entao
      se(valor > 18) entao
         escreva("Você é um adulto!")
      fimse
   fimse
   se(valor > 60) entao
      escreva("Você é um idoso!")
   fimse
Fimalgoritmo
Algoritmo "semnome"
// Disciplina  :  [Lógica de Programação]
// Professor   : Rafael Lima
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 13/08/2024
Var
   nome: caracter
   idade: inteiro

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   escreva("Informe seu nome: ")
   leia(nome)
   escreva("Informe sua idade: ")
   leia(idade)


   se(idade >= 16) entao
      escreva("Olá ",nome,"!, Você pode votar")
   senao
      escreva("Olá ",nome,"!, Você não pode votar")
   fimse

Fimalgoritmo
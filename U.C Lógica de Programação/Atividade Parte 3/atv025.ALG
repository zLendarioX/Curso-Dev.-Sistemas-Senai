Algoritmo "semnome"
// Disciplina  :  [Lógica de Programação]
// Professor   : Rafael Lima
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 15/08/2024
Var
   // Seção de Declarações das variáveis

   n: inteiro

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...

   escreval("--------------------")
   escreval("1 -  Café")
   escreval("2 -  Chá")
   escreval("3 -  Suco")
   escreval("4 -  Refrigerante")
   escreval("--------------------")

   escreval("Informe o id do produto: ")
   leia(n)
   escolha(n)
   caso 1
      escreval("1 -  Café")
   caso 2
      escreval("2 -  Chá")
   caso 3
      escreval("3 -  Suco")
   caso 4
      escreval("4 -  Refrigerante")
   outrocaso
      escreval("Código inválido")
   fimescolha
Fimalgoritmo
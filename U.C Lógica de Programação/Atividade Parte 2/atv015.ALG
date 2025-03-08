Algoritmo "semnome"
// Disciplina  :  [Lógica de Programação]
// Professor   : Rafael Lima
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 13/08/2024
Var
   // Seção de Declarações das variávei
   prod, prod1, prod2, total : real



Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   escreva("Informe o valor do primeiro produto: ")
   leia(prod)

   escreva("Informe o valor do segundo produto: ")
   leia(prod1)

   escreva("Informe o valor do terceiro produto: ")
   leia(prod2)



   total <- prod + prod1 + prod2

   se(total > 200) entao
      escreva(" Bônus concedido!")
   senao
      escreva("Sem Bônus")
   fimse
Fimalgoritmo
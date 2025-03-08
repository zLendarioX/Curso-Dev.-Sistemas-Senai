Algoritmo "semnome"
// Disciplina  :  [Lógica de Programação]
// Professor   : Rafael Lima
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 13/08/2024
Var
   // Seção de Declarações das variáveis

   d, n1, n2: inteiro


Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   escreva("Informe dois valores: ")
   leia(n1, n2)



   se(n1 >= n2) entao
      d <- n1 - n2
   senao
      d <- n2 - n1
   fimse
   escreva("A diferença entre os números e de: ", d)
Fimalgoritmo
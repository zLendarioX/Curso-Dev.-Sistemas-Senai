Algoritmo "semnome"
// Disciplina  :  [Lógica de Programação]
// Professor   : Rafael Lima
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 13/08/2024
Var
   n1, n2, n3: inteiro
Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc... ]
   escreva("Informe Três \n\nvalores: ")
   leia(n1, n2, n3)

   se(n1 >= n2) entao
      se(n1 >= n3) entao
         escreva("O ",n1," é o maior entre eles")
      senao
         escreva("O ",n3," é o maior entre eles")
      fimse
   senao
      se(n2 >= n3) entao
         escreva("O ",n2," é o maior entre eles")
      senao
         escreva("O ",n3," é o maior entre eles")
      fimse
   fimse
   
   
   // Verificar Menor
   se(n1 <= n2) entao
      se(n1 <= n3) entao
         escreval("O ",n1," é o menor entre eles")
      senao
         escreval("O ",n3," é o menor entre eles")
      fimse
   senao
      se(n2 <= n3) entao
         escreval("O ",n2," é o menor entre eles")
      senao
         escreval("O ",n3," é o menor entre eles")
      fimse
   fimse


Fimalgoritmo
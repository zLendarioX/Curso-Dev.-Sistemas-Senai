Algoritmo "semnome"
// Disciplina  :  [Lógica de Programação]
// Professor   : Rafael Lima
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 22/08/2024
Var
   // Seção de Declarações das variáveis
   x, num, cont, resto: inteiro
Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   escreva("Informe um número: ")
   leia(num)
    x <- 1
   enquanto (x <= num) faca
   resto <- num%x
      se(resto = 0) entao
         cont <- cont + 1
      fimse
      x <- x + 1
   fimenquanto

   se(cont <> 2) entao
      escreva("Este número não é primo")
   senao
      escreva("Este número é primo")
   fimse
Fimalgoritmo
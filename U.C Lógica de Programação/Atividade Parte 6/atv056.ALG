Algoritmo "semnome"
// Disciplina  :  [Lógica de Programação]
// Professor   : Rafael Lima
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 23/08/2024
Var

   i, num, resto, total: inteiro
Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   escreva("Deseja saber divisores de qual número?: ")
   leia(num)
   limpatela
   total <- 0
   repita
      i <- i + 1
      resto <- num % i
      se(resto = 0) entao
      total <- total + 1
         escreval(total,"° divisor é:", i)
      fimse

   ate (i = num)
   
   escreval("Seu número possui no total de",total," de divisores")

Fimalgoritmo
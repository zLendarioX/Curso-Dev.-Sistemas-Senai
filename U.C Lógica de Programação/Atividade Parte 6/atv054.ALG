Algoritmo "semnome"
// Disciplina  :  [Lógica de Programação]
// Professor   : Rafael Lima
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 23/08/2024
Var
   // Seção de Declarações das variáveis
   x, num: inteiro
   di: real

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   escreva("Informe um número: ")
   leia(num)
   repita
    x <- x + 1
     di <- num * x / num
     escreval(num * x ," :", num ," =", di: 0:2)
   ate (x = 10)
Fimalgoritmo
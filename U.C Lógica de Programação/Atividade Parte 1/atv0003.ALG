Algoritmo "semnome"
// Disciplina  :  [Lógica de Programação] 
// Professor   : Rafael Lima 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) Xaluno(a)
// Data atual  : 12/08/2024
Var
// Seção de Declarações das variáveis 
   x, y, z: inteiro
Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
   escreva("Inforne o valor de X: ")
   leia(x)
   escreva("Inforne o valor de Y: ")
   leia(y)
   
   z <- x
   x <- y
   y <- z
   
   escreva("O valor de X: ",x," O valor de Y: ", y)
Fimalgoritmo
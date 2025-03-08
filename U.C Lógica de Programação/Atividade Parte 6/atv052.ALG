Algoritmo "semnome"
// Disciplina  :  [Lógica de Programação] 
// Professor   : Rafael Lima 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 23/08/2024
Var
// Seção de Declarações das variáveis 
 x, num:inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
     escreva("Informe até onde irá imprimir: ")
     leia(num)
     x <- 1
     limpatela
     repita
      se(x%2 = 0) entao
      escreva(x)
      fimse
      x <- x + 1
     ate (x = num)

Fimalgoritmo
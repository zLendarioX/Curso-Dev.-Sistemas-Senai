Algoritmo "semnome"
// Disciplina  :  [Lógica de Programação] 
// Professor   : Rafael Lima 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 23/08/2024
Var
// Seção de Declarações das variáveis 

   i: inteiro
   a, b,c,d, area: real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
   repita
      escreva("Informe qautro valores: ")
      leia(a, b, c, d)
   ate (a = b) e (a = c) e (a = d)
   limpatela
   area <- a * a
   escreval("Você tem um quadrado!")
   escreval("àrea do quadrado é:", area," m²")

Fimalgoritmo
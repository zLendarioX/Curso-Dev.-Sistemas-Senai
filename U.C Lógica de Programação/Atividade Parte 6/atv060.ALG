Algoritmo "semnome"
// Disciplina  :  [Lógica de Programação]
// Professor   : Rafael Lima
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)   : Nome do(a) aluno(a)
// Data atual  : 26/08/2024
Var
   // Seção de Declarações das variáveis
   i, n, cont: inteiro
   continua: caracter
Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...

   continua <- "null"
   repita
      escreva("Informe o inucio: ")
      leia(n)
      escreva("Informe o final: ")
      leia(i)
      cont <- n
      se(i > n) entao
         repita
            cont <- cont + 1
            escreval(cont)
         ate (cont = i)
      senao
         se (i < n) entao
            repita
               cont <- cont - 1
               escreval(cont)
            ate (cont = i)
         fimse
      fimse
      escreval("deseja continua?: ")
      escreval("S - Sim")
      escreval("N - Não")
      leia(continua)
      
      -1
   ate (continua = "n")
Fimalgoritmo
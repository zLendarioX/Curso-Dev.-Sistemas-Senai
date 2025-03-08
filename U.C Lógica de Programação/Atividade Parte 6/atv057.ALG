Algoritmo "semnome"
// Disciplina  :  [Lógica de Programação]
// Professor   : Rafael Lima
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 23/08/2024
Var

   soma, i, tente: inteiro
   num: vetor[1..5] de inteiro
   media: real
Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   repita
    i <- 1
    soma <- 0
    limpatela
    repita
    escreva("informe a nota do",i,"° Bimestre: ")
    leia(num[i])
    soma <- soma + num[i]
    i <- i + 1
    ate (i > 4)
    media <- soma / 4
    escreval("Média Final: ", media: 0:1)
   ate (media >= 7)
   escreval("Aprovado!")
Fimalgoritmo
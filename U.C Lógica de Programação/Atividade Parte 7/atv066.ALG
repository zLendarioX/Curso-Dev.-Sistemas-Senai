Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 30/08/2024
Var
   numeros : vetor[0..5] de inteiro
   i, cont, search: inteiro
Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...

   para i de 0 ate 5 faca
      escreva("Informe ",i + 1,"° valor: ")
      leia(numeros[i])
   fimpara
   limpatela
   escreva("Está a procurando qual valor?: ")
   leia(search)
   para i de 0 ate 5 faca
      se(numeros[i] = search) entao
         cont <- cont + 1
      fimse
   fimpara

   se(cont <> 0 ) entao
      escreva("Este número apareceu",cont ," vezes")
   senao
      escreva("Este número não está presente no vetor")
   fimse

Fimalgoritmo
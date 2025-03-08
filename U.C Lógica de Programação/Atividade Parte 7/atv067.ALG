Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 30/08/2024
Var
   // Seção de Declarações das variáveis
   numeros: vetor[0..9] de real
   i: inteiro
   maior : real

Inicio
   para i de 0 ate 9 faca
      escreva("Informe ",i + 1,"° valor: ")
      leia(numeros[i])
   fimpara
   limpatela
   para i de 0 ate 9 faca
      se(numeros[i] > maior) entao
         maior <- numeros[i]
      fimse
   fimpara
   escreva("O",maior," é o maior número do vetor")

Fimalgoritmo
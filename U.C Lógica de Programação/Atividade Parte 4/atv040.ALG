Algoritmo "semnome"
// Disciplina  :  [Lógica de Programação]
// Professor   : Rafael Lima
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 19/08/2024
Var
   // Seção de Declarações das variáveis
   i, n: inteiro
   nome :caracter
Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...

   para i de 1 ate 5 faca

      escreval("Informe um nome: ")
      leia(nome)
      se(nome <> "") entao
       n <- n + 1
      senao
      fimse
   fimpara

   escrevaL("Foram digitados no total de ",n," Nomes")

Fimalgoritmo
Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 30/08/2024
Var
// Seção de Declarações das variáveis 
   nomes: vetor[0..6] de caracter
   i: inteiro
Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
   para i de 0 ate 6 faca
        escreva("Informe ", i + 1,"° Nome: ")
        leia(nomes[i])
   fimpara
   
   para i de 0 ate 6 faca
   escreval("Vetor n°",i + 1,": ", nomes[i])
   fimpara
Fimalgoritmo
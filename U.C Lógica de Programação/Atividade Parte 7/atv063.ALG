Algoritmo "semnome"
// Disciplina  :  [Lógica de Programação]
// Professor   : Rafael Lima
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 29/08/2024
Var
// Seção de Declarações das variáveis
    num : vetor[0..9] de real
    media, soma: real
    i: inteiro
Inicio
// Seção de Comandos, procedimento, funções, operadores, etc...
    para i de 0 ate 9 faca
        escreva("Informe um número: ")
        leia(num[i])
        soma <- soma + num[i]
    fimpara
    media <- soma / 10
    
    limpatela
    escreva("A MÉDIA ENTRE OS NÚMEROS: ", media : 0:2)
Fimalgoritmo
Algoritmo "semnome"
// Disciplina  :  [Lógica de Programação]
// Professor   : Rafael Lima
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 29/08/2024
Var
// Seção de Declarações das variáveis
    num : vetor[0..14] de inteiro
    i: inteiro
Inicio
// Seção de Comandos, procedimento, funções, operadores, etc...
    para i de 0 ate 14 faca
        escreva("Informe um número: ")
        leia(num[i])
    fimpara
    limpatela
     para i de 0 ate 14 faca
        se(num[i]%2 = 0) entao
            escreva(num[i])
        fimse
    fimpara

Fimalgoritmo
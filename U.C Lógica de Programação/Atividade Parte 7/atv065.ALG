Algoritmo "semnome"
// Disciplina  :  [Lógica de Programação]
// Professor   : Rafael Lima
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 29/08/2024
Var
// Seção de Declarações das variáveis
    num : vetor[1..9] de inteiro
    i, soma: inteiro
Inicio
// Seção de Comandos, procedimento, funções, operadores, etc...
    para i de 1 ate 9 faca
        escreva("Informe um número: ")
        leia(num[i])
        se(i%2 = 0) entao
            soma <- soma + num[i]
        fimse
    fimpara
    limpatela
    
    escreva("A s soma dos vetores pares é: ", soma)

Fimalgoritmo
Algoritmo "semnome"
// Disciplina  :  [Lógica de Programação]
// Professor   : Rafael Lima
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 14/08/2024
Var
   // Seção de Declarações das variáveis
   mes: caracter

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   escreva("Informe o nome de um mês: ")
   leia(mes)

   se(mes = "Janeiro") entao
      escreva("Alta temporada")
   senao
      se(mes = "Julho") entao
         escreva("Alta temporada")
      senao
         se(mes = "Dezembro") entao
            escreva("Alta temporada")
         senao
            escreva("Baixa temporada")
         fimse
      fimse
   fimse
Fimalgoritmo
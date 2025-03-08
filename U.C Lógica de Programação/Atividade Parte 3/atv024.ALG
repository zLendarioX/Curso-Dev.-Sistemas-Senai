Algoritmo "semnome"
// Disciplina  :  [Lógica de Programação]
// Professor   : Rafael Lima
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 15/08/2024
Var
   // Seção de Declarações das variáveis
   mes: caracter

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   escreva("Informe o número do mês: ")
   leia(mes)

   escolha(mes)
   caso "01", "1"
      escreva("Janeiro")
   caso "02","2"
      escreva("Fevereiro")
   caso "03","3"
      escreva("Março")
   caso "04","4"
      escreva("Abril")
   caso "05","5"
      escreva("Maio")
   caso "06","6"
      escreva("Junho")
   caso "07","7"
      escreva("Julho")
   caso "08","8"
      escreva("Agosto")
   caso "09","9"
      escreva("Setembro")
   caso "10"
      escreva("Novembro")
   caso "11"
      escreva("Novembro")
   caso "12"
      escreva("Dezembro")
   outrocaso
      escreva("Números entre 1 a 12")
   fimescolha
Fimalgoritmo
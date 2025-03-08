Algoritmo "semnome"
// Disciplina  :  [Lógica de Programação]
// Professor   : Rafael Lima
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 14/08/2024
Var
   // Seção de Declarações das variáveis
   peso, altura, imc: real

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   escreva("Informe sua altura: ")
   leia(altura)
   escreva("Informe seu peso: ")
   leia(peso)
   altura <- altura * altura
   imc <- peso / altura


   se(imc < 18.5) entao
      escreva("Abaixo do Peso")
   senao
      se(imc < 24.9)  entao
         escreva("Peso Normal")
      senao
         se(imc < 29.9)  entao
            escreva("Sobrepeso")
         senao
            se(imc >= 30.0)  entao
               escreva("Obeso")
            fimse
         fimse
      fimse
   fimse
Fimalgoritmo
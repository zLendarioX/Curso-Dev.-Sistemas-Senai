Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 30/08/2024
Var
   // Seção de Declarações das variáveis
   nomes: vetor[0..4] de caracter
   i, cont: inteiro
Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   para i de 0 ate 4 faca
      escreva("Informe a", i + 1,"° Instituição: ")
      leia(nomes[i])
   fimpara
   para i de 0 ate 4 faca
      se(nomes[i] = "senai") entao
         cont <- cont + 1
      fimse
   fimpara
   se(cont <> 0 ) entao
      escreva("O Nome senai apareceu",cont," Vezes")
   senao
      escreva("O nome senai não foi encontrado")
   fimse
Fimalgoritmo
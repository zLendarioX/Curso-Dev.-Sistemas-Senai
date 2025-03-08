Algoritmo "semnome"
// Disciplina  :  [Lógica de Programação] 
// Professor   : Rafael Lima 
//  
//  
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 12/08/2024
Var
   dis, kmL: inteiro
   valorGas, total: real

Inicio
      escreva("Qual a distancia que será pecorrida: ")
      leia(dis)
      escreva("!Qual o valor do combustível?: ")
      leia(valorGas)
      escreva("Quantos Km´s seu veículo faz por litro?:  ")
      leia(kmL)
      
      
      total <- (dis/kmL) * valorGas
      
      escreva("Você irá pagar um valor de: ", total)
Fimalgoritmo
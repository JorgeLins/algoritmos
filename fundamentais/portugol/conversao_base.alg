Algoritmo "Algoritmo Fundamental No. 8"
// Disciplina: Algoritmos e Programa��o de Computadores
// Professor : Gilson Pereira
// Descri��o : Convers�o de base
// Problema  : Converter um n�mero inteiro decimal para sua
//             representa��o bin�ria correspondente.
// Aplica��es: Interpreta��o de instru��es e dados armazenados em computador.

Var
    // Declara��es das vari�veis
    n, q, i : inteiro
    r : vetor[1..10] de inteiro

Inicio
   escreva("Informe um n�mero decimal: ")
   leia(n)
   
   q <- n
   i <- 0
   
   enquanto q > 0 faca
      i <- i + 1
      r[i] <- q mod 2
      q <- q div 2
   fimenquanto

   enquanto i > 0 faca
      escreva(r[i])
      i <- i - 1
   fimenquanto
Fimalgoritmo
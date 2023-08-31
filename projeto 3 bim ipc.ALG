Algoritmo "Classificação"
Var

time : vetor [1..4] de caractere
pturno : vetor [1..2,1..4] de inteiro
tpontos: vetor [1..4] de inteiro
x, y, aux_pontos, qt, aux2: inteiro
aux_time : caractere

Inicio
      para x de 1 ate 4 faca
           escreval("Digite o nome do",x,"º time:")
           leia(time[x])
           escreval("----------------------------------------------")
         para y de 1 ate 2 faca
              escreval("Digite a quantidade de pontos no turno",y,":")
              leia(pturno[y,x])
              tpontos[x]<-(tpontos[x] + pturno[y,x])
         fimpara
         escreval("----------------------------------------------")
         escreval()
      fimpara


      escreval("\Pontos por turno/")
      escreval()
      para x de 1 ate 4 faca
         escreval("-",time[x])
         escreval("----------------------")
         para y de 1 ate 2 faca
              escreval("Turno",y,"=",pturno[y,x])
         fimpara
         escreval("----------------------")
         escreval()
      fimpara

      qt<- 4
      enquanto qt > 1 faca
         para x de 1 ate qt - 1 faca
          se(tpontos[x]<tpontos[x+1])ou((tpontos[x]=tpontos[x+1])e(pturno[2,x]<pturno[2,x+1])) entao
                   aux_pontos <- tpontos[x]
                   tpontos[x] <- tpontos[x+1]
                   tpontos[x+1] <- aux_pontos

                   aux_time <- time[x]
                   time[x] <- time[x+1]
                   time[x+1] <- aux_time

                   aux2<-pturno[2,x]
                   pturno[2,x] <- pturno[2,x+1]
                   pturno[2,x+1]<-aux2
                fimse
           fimpara
         qt<-qt-1
      fimenquanto

      escreval("\Classificação:/")
      escreval()
      para x de 1 ate 4 faca
      escreval("-", time[x])
      fimpara
      escreval()

      escrevaL("O time Campeão é: ", time[1])
      escrevaL("O time Vice-campeão é: ", time[2])
      escrevaL("O pior time do campeonato é: ", time[4])
      escreval("----------------------------------------")
      escreval()
Fimalgoritmo
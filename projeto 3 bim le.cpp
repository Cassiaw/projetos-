#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int pturno[3][5]; 
int tpontos[5];   
char time[5][40]; 
int x, y, auxpontos, aux2, qt;
char auxtime[4]; 

int main() {
    for (x = 1; x <= 4; x++) {
        printf("----------------------------------------------\n");
        printf("Digite o nome do time %d: \n", x);
        scanf("%s", time[x]); 
        for (y = 1; y <= 2; y++) { 
            printf("----------------------------------------------\n");
            printf("Digite a quantidade de pontos no turno %d: \n", y);
            scanf("%d", &pturno[y][x]);
            tpontos[x] = (tpontos[x] + pturno[y][x]); 
        }
    }

    system("cls");

    printf("Pontos por turno: \n");
    for (x = 1; x <= 4; x++) {
        printf("-> %s\n", time[x]);
        printf("----------------------\n");
        for (y = 1; y <= 2; y++) { 
            printf("Turno %d = %d\n", y, pturno[y][x]);
        }
        printf("--------------------------------\n");
    }


qt=4;
    while(qt>1){
   			for(x=1;x<=qt-1;x++){ 
           	 if ((tpontos[x] < tpontos[x + 1]) || ((tpontos[x] == tpontos[x + 1]) && (pturno[2][x] < pturno[y][x + 1]))) {
                	auxpontos = tpontos[x];
                   tpontos[x] = tpontos[x+1];
                   tpontos[x+1] = auxpontos;

                  strcpy(auxtime, time[x]);
                  strcpy(time[x], time[x+1]);
                  strcpy(time[x+1], auxtime);

                   aux2 = pturno[2][x];
                   pturno[2][x] = pturno[2][x+1];
                   pturno[2][x+1]=aux2;
	       }
        }
        qt=qt-1;
    }
  
    
    printf("CLASSIFICACAO:\n");
    for (x = 1; x <= 4; x++) {
        printf("-> %s\n", time[x]);
    }

    printf("TIME CAMPEAO: %s\n", time[1]);
    printf("TIME VICE-CAMPEAO: %s\n", time[2]);
    printf("PIOR TIME DO CAMPEONATO: %s\n", time[4]);

    return 0;
}


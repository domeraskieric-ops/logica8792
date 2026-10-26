#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>

int main(){    

    
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    int cartela[5] = {3,8,12,15,10};
    int sorteado[21] = {0};
    int acertos = 0, rodadas = 0, bola;
    
    srand(time(NULL));
    while(acertos < 5){
        
        do{
            bola = rand() % 20 + 1;
        }while(sorteado[bola]);
        sorteado[bola] = 1;
        rodadas++;

        printf("Bola %d: %d\n", rodadas, bola);

        for(int i = 0; i < 5; i++){
            if(cartela[i] == bola){
                acertos++;
                printf("Acertou o %d! (%d de 5)\n", bola, acertos);
            }
        }
    }

    return 0;
}








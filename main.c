#include<stdio.h>
#include<locale.h>

   
int main (){
    
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int horas[12];
    int minutos[60];

    for(int i = 0; i < 12; i++){
        horas[i] = i + 1;
    }

    for ( int j = 0; j < 60; j++)
    {       minutos[j] = j;
    }
    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 60; j++){
            printf("Hora: %2d:%02d\n", horas[i], minutos[j]);
        }
    }
    
    


    return 0;
}
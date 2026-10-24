#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<windows.h>

#define QTS 5

int main(){    
    
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    const int dias = 7;
    
    float temp[dias];
    
    float soma = 0, média;

    float maior, menor;

    int diaMaior = 1, diaMenor = 1;

    int acimaMedia = 0;

    for(int i = 0; i < dias; i ++){
        printf("Temperatura do dia %d:", i + 1);
        scanf("%f", &temp[i]);
        soma += temp[i];
    }
    média = soma / dias;
    maior = temp[0];
    menor = temp[0];

    for(int i = 0; i < dias; i++){
        if(temp[i] > maior){
            maior = temp[i];
            diaMaior = i + 1;
        }
        if(temp[i] < menor){
            menor = temp[i];
            diaMenor = i + 1;
        }
    }
    for(int i = 0; i < dias; i++){
        if(temp[i] > média){
            acimaMedia++;
        }
    }
    printf("\n ----- Temperaturas -----");
    for(int i = 0; i < dias; i++){
        printf("Dia %d: %.1f\n", i + 1, temp[i]);
    }
    printf("\n Média da semana: %.1f\n", média);
    printf("Maior: %1.f (dia %d)\n", maior, diaMaior);
    printf("Menor: %.1f (dia %d)\n", menor, diaMenor);
    printf("Dias acima da média: %d\n", acimaMedia);

    return 0;
}








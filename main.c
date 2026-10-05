#include<stdio.h>
#include<locale.h>
#include<string.h>

int main(){    
    
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int voto;

    printf(" Qual candidato você quer votar:\n 10-Manoel\n 20-Carla\n 30-Bianca\n 40-Henrique\n 50-Bruno\n");
    scanf("%d", &voto);

   if(voto == 10){
    printf("Você votou em Manoel!");
   }else if(voto == 20){
    printf("Você votou em Carla!");
   }else if(voto == 30){
    printf("Você votou em Bianca!");
   }else if(voto == 40){
    printf("Você votou em Henrique!");
   }else{  
    printf("Você votou em Bruno!");
   }

    return 0;
}









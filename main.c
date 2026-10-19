#include<stdio.h>
#include<locale.h>
#include<string.h>


int main(){    
    
    setlocale(LC_ALL, "pt_BR.UTF-8");
   
        int idade;
        int temIngresso;~

        printf("Digite sua Idade:");
        scanf("%d", &idade);

        printf("Possui ingresso? (1 - Sim / 0 - Não)\n");
        scanf("%d", &temIngresso);

        if(idade >= 18 && temIngresso){
            printf("Entrada Permitida!\n");
        }else{
            printf("Entrada não Permitida!\n");
        }
  
    
    
    return 0;
  
} 









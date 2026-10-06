#include<stdio.h>
#include<locale.h>
#include<string.h>

int votosA = 0;
int votosB = 0;
int votosNulos = 0;

void votar(int numero){
    if(numero == 1){
        votosA++;
        printf("Você votou no candidato A!\n");
    }else if(numero == 2){
        votosB++;
        printf("Você votou no candidato B!\n");
    }else{
        votosNulos++;
        printf("Voto nulo!\n");
    }
}
void resultado(){
    printf("\n====== Resultado da votação =======\n");
    printf("Candidato A: %d votos\n", votosA);
    printf("Candidato B: %d votos\n", votosB);
    printf("Nulos: %d votos\n", votosNulos);

    if(votosA == 0 && votosB == 0 && votosNulos > 0){
        printf(">>>> Não houve vencedor! \n");
    }else if(votosB > votosA){
        printf(">>>>> Candidato B venceu!\n");
    }else if(votosA > votosB){
        printf(">>>>> Candidato A venceu!\n");
    }else{
        printf(">>>>>> Empate!\n");
    }
}
int main(){    
    
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int voto;
    int totalEleitores = 6;

    for(int i = 0; i < totalEleitores; i++){
        printf("Eleitor %d - Digite 1 para A, 2 para B:", i + 1);
        scanf("%d", &voto);
        votar(voto);
    }
    resultado();
   

    return 0;
}









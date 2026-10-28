#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>

int main(){    
 
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    int opcao;
    char placa[20] = "";
    
    do{ 
    printf("\n----------- ÓLA BEM VINDO! ------------\n");
    printf("\nEscolha uma opção:\n");
    printf("\n1- Digite o número de sua  placa:\n");
    printf("\n2- Consulte sua placa:\n");
    printf("\n0- Para Sair!\n");
    scanf("%d", &opcao);
    
        switch (opcao)
        {
        case 1:
            printf("Digite a placa do veículo:");
            scanf("%s", placa);

            printf("Placa registrada com sucesso!\n");
            break;
        
        case 2:
            if(strlen(placa) == 0){
                printf("Nenhuma placa registrada.\n");
            }else{
                printf("Placa registrada: %s\n", placa);
            }
            break;
        case 3:
            printf("Saindo do sistema....\n");
            break;    
        default:
            printf("Opção inválida!\n");
            break;
        }
    }while(opcao != 3);
    






    return 0;
}








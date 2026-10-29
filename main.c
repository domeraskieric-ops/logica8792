#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>

char* tipoVeiculo(char placa[]){
    char primeiro = placa[0];
    if(primeiro >= 'A' && primeiro <= '2'){
        return "Veículo particular";
    }else if(primeiro >= '0' && primeiro <= '9'){
        return "Placa irregular";
    }else{
        return "formato desconhecido";
    }
}

int main(){    
 
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int opcao;
    char placa[8];
    printf("--------- SISTEMA DE TRANSITO BRASILEIRO----------\n");
    printf("Digite os caracteres da placa do veículo:\n");
    scanf("%s", placa);

    do{
        printf(" 1 - Ver placa | 2 - Tipo de veículo | 0 - Sair\n");
        scanf("%s",opcao);

        switch (opcao)
        {
        case 1:
            printf("PLACA DO VEÍCULO: %s\n", placa);
            break;
        case 2:
            printf("Tipo de veículo: %s\n", tipoVeiculo(placa));
            break;
        case 0:
            printf("Saindo......");
            break;
        default:
            printf("Número inválido!\n");
            break;
        }
    }while(opcao != 0);
    
    

    return 0;
}








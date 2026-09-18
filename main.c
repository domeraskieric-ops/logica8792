#include<stdio.h>
#include<locale.h>

int main (){

    setlocale(LC_ALL, "pt_BR.UTF-8");

   int opcao;

   printf("---- sistema de pedagio -----\n");
   printf("1 - moto\n");
   printf("2 - carro passeio\n");
   printf("3 - caminhão\n");
   printf("4 - onibus\n");
   scanf("%d", &opcao);

   switch (opcao){
    case 1 :
        printf("Moto | tarifa: R$ 5,00\n");
        break;
    case 2 :
        printf("Carro paseio | R$ 10,00\n");  
        break;
    case 3 :
        printf("Caminhão | R$ 25,00\n");
        break;
    case 4 :
        printf("Onibus | R$ 30,00\n");
        break;   
    default:
        printf("ERRO\n");
        break;      
   }
    
    
    return 0;
}

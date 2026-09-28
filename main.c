#include<stdio.h>
#include<locale.h>
#include<string.h>
   
int main (){
    
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int contador = 0;

    for(int i = 0; i <= 9; i++){

        for(int j = 0; j <= 9; j++){
        
            for(int s = 0; s <= 9; s++){ 
            
                for(int n = 0; n <= 9; n++){ 
                
                contador++;
             
         printf("%d %d %d %d \n", i, j, s, n);
        }
        printf("\n");
    }
}
    }
    printf("Total de cod: %d\n", contador);



    

    return 0;
}









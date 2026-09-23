#include<stdio.h>
#include<locale.h>

   
int main (){
    
    setlocale(LC_ALL, "pt_BR.UTF-8");

    char nomes[3][20] ={
        "Eric",
        "Otavio",
        "Andressa"
    }; 
    for(int i = 0; i < 3; i++){
        printf("%s\n", nomes[i]);
    }
    
    
    


    return 0;
}
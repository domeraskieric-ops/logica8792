#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>

float media(float notas[], int n){
    float soma = 0;
    for(int i = 0; i < n; i++){
        soma += notas[i];
    }   
        return soma /n;
    
}
int main(){    
 
    setlocale(LC_ALL, "pt_BR.UTF-8");

    float notas[5];

    for( int i = 0; i < 5; i++){
        printf("Nota %d: ", i + 1);
        scanf("%f", &notas[i]);
    }
    printf("Média: %.1f\n", media(notas, 5));
    return 0;
}








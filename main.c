#include<stdio.h>
#include<locale.h>
#include<string.h>
   
int main (){
    
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int n;

    printf("Digite o tamanho do vetor:");
    scanf("%d", &n);

    int v[n];
   int pares = 0, impares = 0;
   for(int i = 0; i < n; i++){
    printf("Digite o valor %d:", i +1);
    scanf("%d", &v[i]);
    if(v[i] % 2 == 0){
        pares++;
    }else{
        impares++;
    }
   }
   printf("Pares: %d\n", pares);
   printf("Impares: %d\n", impares);

    return 0;
}









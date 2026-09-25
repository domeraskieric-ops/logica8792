#include<stdio.h>
#include<locale.h>
#include<string.h>
    
int main (){
    
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int n,s;

    printf("digite um número:\n");
    scanf("%d",&n);

    for(int i = 1; i <= 10; i++){
        s = i * n;
        printf("\n%d x %d = %d", i,n,s);
    }
    return 0;
}









#include<stdio.h>
#include<locale.h>
#include<string.h>
   
int main (){
    
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int n;
    float nota, soma = 0;

    printf("Quantos alunos tem a turma:");
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        printf("Digite a nota do aluno %d: \n", i + 1);
        scanf("%f", &nota);
        soma += nota;
    }

    printf("Média da turma: %.2f\n", soma / n);

    return 0;
}









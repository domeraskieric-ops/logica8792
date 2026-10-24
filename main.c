#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<windows.h>

#define QTS 5

int main(){    
    
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    const int alunos = 5;
    
    float notas[alunos];
    
    float soma = 0;


    for(int i = 0; i < alunos; i ++){
        printf("Nota do aluno %d:", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }
    printf("\n------------ Notas --------------\n");
    for(int i = 0; i < alunos; i++){
        printf("Aluno %d: %.1f\n", i + 1, notas[i]);
    }
    printf("\nMédia da turma: %.1f\n", soma / alunos);
        

    return 0;
}








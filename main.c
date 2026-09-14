#include<stdio.h>
#include<locale.h>

int main (){

    setlocale(LC_ALL, "pt_BR.UTF-8");

   int idade;

   printf("digite uma idade:");
   scanf("%d", &idade);

   if (idade >= 50){
    printf("senior");
   }else if(idade >= 18)
   {printf("maior de idade");
   }else if(idade >= 12)
   {printf("adolescente");
    }else if (idade >= 9)
    {printf("PRE-adolescente");
    }else
    {printf("crianca");
    }

    return 0;
}

#include<stdio.h>
#include<locale.h>
#include<math.h>

        void fibonacci (int termos){
            int a = 0, b = 1, c;
            printf("sequencia de fibonacci (%d termos): \n", termos);
            for (int i = 1; i <= termos; i++){
                printf("%d\n",a);
                c = a + b;
                a = b;
                b = c;
            }
            printf("\n");
        }
int main (){
    
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    fibonacci(10);

    return 0;
}
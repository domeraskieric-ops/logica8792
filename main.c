#include<stdio.h>
#include<locale.h>
#include<math.h>

        void tabuada(int n){
            printf("tabuada do %d\n", n);
            for(int i = 1; i <= 10; i++){
                printf("%d x %d = %d\n", n, i, n * i);
            }
        }
int main (){
    
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    tabuada(7);

    return 0;
}
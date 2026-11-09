#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>

   float areaRetangulo(float base, float altura){
        return base * altura;
   }

int main(){    
 
    setlocale(LC_ALL, "pt_BR.UTF-8");

    printf("Área: %2f\n", areaRetangulo(5, 3.5));
    
    
   

    return 0;
}








#include<stdio.h>
#include<locale.h>

int main (){

    setlocale(LC_ALL, "pt_BR.UTF-8");

    int numerosInteiros[5] = {1, 5, 10, 15, 20};
    float numerosFloat[5] = {10.5, 20.8, 30.2, 40.9, 50.1};
    char carros[3][20] = {"Ferrari", "Mercedez", "Mazda"};

    printf("%d %d %d %d %d", numerosInteiros[0], numerosInteiros[1], numerosInteiros[2], numerosInteiros[3], numerosInteiros[4]);

    {for (int i = 0; i > 5; i++);}
    {
        printf("%.1f\n", numerosFloat);
    }



    return 0;
}
#include<stdio.h>
#include<locale.h>

int main (){

    setlocale(LC_ALL, "pt_BR.UTF-8");

    int idades[3] = {25, 35, 45};

    printf("%s %d %s", "Manoel tem,", idades[0], "anos!\n");

    printf("%s %d %s", "Otávio tem,", idades[1], "anos!\n");

    printf("%s %d %s", "Duda tem,", idades[2], "anos!\n");

    return 0;
}
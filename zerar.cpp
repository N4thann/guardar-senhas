#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
int main(){
    //Este código é exclusivamente para zerar os arquivos(.bin)
    FILE *arq;

    arq = fopen("221132154243.bin", "w");
    fclose(arq);
    arq = fopen("2545114343.bin", "w");
    fclose(arq);
    arq = fopen("4423155435114343.bin", "w");
    fclose(arq);

    return 0;
}

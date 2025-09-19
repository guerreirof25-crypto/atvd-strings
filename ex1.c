#include <stdio.h>
int tamanho(char* str){
    int soma=0;
    for(int i=0; str[i]!='\0';i++){
        soma+=1;
    }
    return soma;
}
int main() {
   char p[100];
   printf("digite uma palavra ou frase: ");
   scanf("%s", p);
   int o = tamanho(p);
   printf("%d",o);

    return 0;
}

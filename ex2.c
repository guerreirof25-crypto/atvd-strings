#include <stdio.h>
int tamanho(char* str){
    int soma=0;
    for(int i=0; str[i]!='\0';i++){
        soma+=1;
    }
    return soma;
}
void concatena(char*d,char*o1,char*o2){
    int k=tamanho(o1);
    int w = tamanho(o2);
    for(int j=0;j<k;j++){
        d[j]=o1[j];
    }
    for(int l=0;l<w;l++){
        d[k+l]=o2[l];
    }
}
int main() {
   char o1[100];
   char o2[100];
   char d[200];
   printf("digite uma palavra ou frase: ");
   scanf("%s", o1);
   printf("digite uma palavra ou frase: ");
   scanf("%s", o2);
   concatena(d,o1,o2);
   printf("%s",d);
   return 0;
}

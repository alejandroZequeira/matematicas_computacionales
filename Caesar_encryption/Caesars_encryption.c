#include<stdio.h>
#include<string.h>

char abc[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int *pos;
void leer(char cadena[]){
    printf("%s",cadena);
    for(int i=0;i < strlen(cadena) ;i++){
        printf("entro");
        for(int j=0; j < strlen(abc);j++){
            if(cadena[i]==abc[j]){
                pos[i]=j;
                printf("%i",pos[i]);
            }
        }
    }
    
}
int main(){
    char str[]="PATM BL MAX B-MA IKBFX GNFUXK?";
    leer(str);
    return 0;
}
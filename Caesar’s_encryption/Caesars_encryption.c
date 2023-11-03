#include<stdio.h>
#include<string.h>

char abc[26]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int *pos;
void leer(char cadena[]){
    //printf("%s",cadena);
    for(int i=0;i <strlen(cadena) ;i++){
        for(int j=0;strlen(abc);j++){
            if(cadena[i]==abc[j]){
                pos[i]=j;
                printf("%i",pos[i]);
            }
        }
    }
    
}
int main(){
    printf("hola mundo");
    char str[]="PATM BL MAX B-MA IKBFX GNFUXK?";
    leer(str);
    return 0;
}
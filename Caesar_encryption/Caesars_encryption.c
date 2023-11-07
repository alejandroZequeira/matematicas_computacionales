#include<stdio.h>
#include<string.h>

char abc[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
void leer(char cadena[],int *pos){
    printf("%s ",cadena);
    for (int i = 0; i < strlen(cadena); i++)
    {
        for (int j = 0; j < strlen(abc); j++)
        {   
            if (cadena[i]==abc[j])
            {
                *(pos+i)=j;
            }
            
        }
    }
    
}
void descifrar(int *pos,char msg[],int key){
    int pos_nva=0;
    char msg_des[strlen(msg)];
    for (int i = 0; i < strlen(msg); i++)
    {
        if(pos[i]!=-1){
            
            if ((pos[i]-key)<0){
                pos_nva=26+(pos[i]-key);
                msg_des[i]=abc[pos_nva];
            }else{
                pos_nva=pos[i]-key;
                msg_des[i]=abc[pos_nva];
            }
        }else{
            msg_des[i]= msg[i];
        }
        printf("%c",msg_des[i]);  
    }
    
}
void inicializar(int *pos){
    for (int i = 0; i < (int)sizeof(pos); i++)
    {
        pos[i]=-1;
        printf("%i ",pos[i]);
    }
    
}
int main(){
    char str[]="PATM BL MAX B-MA IKBFX GNFUXK?";
    char str2[]="BFIEXFXGM MABL TL LBFIEX TL RHN PTGM, UNM RHN LAHNEW ATOX T EHHD TM MAX LBXOX HY XKTMHLMAXGXL.";
    int pos[strlen(str)];
    inicializar(pos);
    leer(str,pos);
    descifrar(pos,str,19);
    return 0;
}
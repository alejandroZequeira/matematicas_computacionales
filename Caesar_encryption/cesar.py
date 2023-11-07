global abc 
abc ="ABCDEFGHIJKLMNOPQRSTUVWXYZ"
def comparar(c):
    for i in range(0,len(abc)):
                if c==abc[i]:
                    return i
    return -1
def escribir_archivo(name,msg):
     archivo=open(name,mode="a")
     for m in msg:
          print(m)
          archivo.write(m)
def desencriptar(archivo,key):
    msg=[]
    for linea in archivo:
        cadena=""
        for c in linea:
            i=comparar(c)
            if i!=-1:
                 cadena+=abc[(i-key)%26]
            else:
                 cadena+=c                      
        msg.append(cadena)
    escribir_archivo("msg_desencriptado.txt",msg)

def encriptar(archivo,key):
    msg=[]
    for linea in archivo:
        cadena=""
        for c in linea:
            i=comparar(c)
            if i!=-1:
                 cadena+=abc[ (i+key) % 26]
            else:
                 cadena+=c                      
        msg.append(cadena)
    escribir_archivo("msg_encriptado.txt",msg)

if __name__=="__main__":
    archivo=open("mensaje.txt",mode="r")
    desencriptar(archivo=archivo,key=19)
    archivo2=open("mensaje2.txt",mode="r")
    encriptar(archivo2,key=4)
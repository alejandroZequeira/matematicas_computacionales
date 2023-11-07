import sys
def criba(n):
    if n <= 0:
        return None 

    limite = n * 15  
    is_primo = []
    for i in range(0,limite+1):
        is_primo.append(True)
    is_primo[0] = False
    is_primo[1] = False

    p = 2
    cont = 0

    while cont < n:
        if is_primo[p]:
            cont += 1
            if cont == n:
                return p 
            for i in range(p*p, limite + 1,p):
                is_primo[i] = False
        p +=1 

if __name__=="__main__":
    primo = criba(int(sys.argv[1]))
    print(primo)
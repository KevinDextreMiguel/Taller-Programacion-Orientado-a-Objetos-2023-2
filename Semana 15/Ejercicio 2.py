import random

def IngresarN():
    n=-1
    while n<0 or n>50:
        n=int(input('N: '))
        
    return n

def Generar(n):
    for i in range(n):
        valor=chr(random.randint(65,90))
        lista.append(valor)

def imprimir():
        print(lista)  
    
def ExisteVocalesCreciente(n):    
      for i in range(n-6):
        if lista[i] in listaV and lista[i+2] in listaV and lista[i+4] in listaV and lista[i+6] in listaV:
            if lista[i]<lista[i+2] and lista[i+2]<lista[i+4] and lista[i+4]<lista[i+6]:
                print('Existe')


def OrdenarPosicionImpar(n):
    impares = lista[1::2]#Pasar a una nueva lista solo los de índice impar
    print(impares)
    impares.sort(reverse=True)
    print(impares)
    cont=0
    for i in range(1,n,2):
        lista[i]=impares[cont]
        cont+=1



#main
lista=[]
listaV=['A','E','I','O','U']
n=IngresarN()
Generar(n)
imprimir()
ExisteVocalesCreciente(n)
OrdenarPosicionImpar(n)
imprimir()

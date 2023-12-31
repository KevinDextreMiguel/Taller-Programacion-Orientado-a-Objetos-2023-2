import random

class CEncuesta:
    def __init__(self,edad,sexo,tipoP,nivelS):
        self.__Edad=edad
        self.__Sexo=sexo
        self.__TipoPrueba=tipoP
        self.__NivelSatisfaccion=nivelS
        
    #set
    def SetEdad(self,edad):
        self.__Edad=edad
    def SetSexo(self,sexo):
        self.__Sexo=sexo
    #get
    def GetEdad(self):
        return self.__Edad
    def GetSexo(self):
        return self.__Sexo
    def GetTipoPrueba(self):
        return self.__TipoPrueba
    def GetNivelSatisfaccion(self):
        return self.__NivelSatisfaccion
    
    def getInfo(self):
        print(f'{self.__Edad}\t{self.__Sexo}\t{self.__TipoPrueba}\t{self.__NivelSatisfaccion}')
        


def IngresarN():
    n=-1
    while n<0 or n>40:
        n=int(input('N: '))
        
    return n


def Generar(n):
    sex=['F','M']
    tip=['R','H','C']
    niv=['R','B','M']
    for i in range(n):
        edad = random.randint(18,75)
        sexo = random.choice(sex)#forma 2
        tipo = tip[random.randint(0,2)]
        nivel = niv[random.randint(0,2)]
        objeto = CEncuesta(edad,sexo,tipo,nivel)
        lista.append(objeto)
        

def imprimir(n):
    print('Edad\tSexo\tTipo P.\tNovel S')
    for i in range(n):
        lista[i].getInfo()
        
def EdadMayores(n):
    cont=0
    print('Edad\tSexo\tTipo P.\tNovel S')
    for i in range(n):
        if lista[i].GetEdad()>60:
            lista[i].getInfo()
            cont+=1
    print(f'Total {cont}')


def EdadPromedioCovid(n):
    cont=0
    suma=0
    for i in range(n):
        if lista[i].GetTipoPrueba()=='C':
            suma+=lista[i].GetEdad()
            cont+=1
            
    if cont!=0:
        suma = suma /cont
    print(f'Promedio tipo de P. Covid {suma}')
    

def CantidadPorNivel(n):
    contR=contM=contB=0
    for i in range(n):
        if lista[i].GetNivelSatisfaccion()=='R':
            contR+=1
        elif lista[i].GetNivelSatisfaccion()=='M':
            contM+=1
        else:
            contB+=1
      
    print('\nmayor cantidad de nivel')
    if contR>contM and contR>contB:
        print('Regular')
    if contM>contR and contM>contB:
        print('Malo')       
    if contB>contM and contB>contR:
        print('Bueno')
        
            
def MujerMasJovenSinPruebaCovid(n):
    encontrar = False
    edad=999
    
    for i in range(n):
        if lista[i].GetTipoPrueba()!='C' and lista[i].GetSexo()=='F':
             encontrar = True
             if edad>lista[i].GetEdad():
                 edad = lista[i].GetEdad()

    if encontrar:
        print(f'La mujer con edad: {edad}')
    else:
        print('No existe')
 
def UtilizarSet(n):
    
    for i in range(n):
        if lista[i].GetSexo()=='F':
             lista[i].SetSexo('Z')
#main
lista=[]
n=IngresarN()
Generar(n)
imprimir(n)
EdadMayores(n)
EdadPromedioCovid(n)
CantidadPorNivel(n)
MujerMasJovenSinPruebaCovid(n)
#UtilizarSet(n)
#imprimir(n)
